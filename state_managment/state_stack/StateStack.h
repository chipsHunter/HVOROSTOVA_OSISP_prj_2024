#ifndef COURSE_STATESTACK_H
#define COURSE_STATESTACK_H

#include <SFML/System/NonCopyable.hpp>
#include <SFML/System/Time.hpp>
#include <SFML/Window/Event.hpp>
#include <vector>
#include <map>
#include <functional>
#include "../state/State.h"
#include "../StatesEnum.h"

class StateStack : private sf::NonCopyable {
public:
    enum Action { PUSH, POP, CLEAR };

    explicit StateStack(State::Context context);

    template<class T>
    void registerState(States::ID stateId);
    void update(sf::Time time);
    void draw();
    void handleEvent(sf::Event& event);
    void pushState(States::ID id);
    void popState();
    void clearStates();

    bool isEmpty();

private:
    struct PendingChange {
        //todo
        Action action;
        States::ID id;
    };

    State::Ptr createState(States::ID stateId);
    void applyPendingChanges();

    std::vector<State::Ptr> mStack;
    std::vector<PendingChange> mPendingList;
    State::Context mContext;
    std::map<States::ID, std::function<State::Ptr() >> mFactories;

};

#endif //COURSE_STATESTACK_H
