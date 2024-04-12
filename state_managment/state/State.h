#ifndef COURSE_STATE_H
#define COURSE_STATE_H

#include <memory>
#include "../state_stack/StateStack.h"


class State {
public:
    typedef std::unique_ptr<State> Ptr;
    struct Context {
        //todo
    };

    State(StateStack& stack, Context context);
    virtual ~State();
    virtual void draw() = 0;
    virtual bool update(sf::Time time) = 0;
    virtual bool handleEvent(const sf::Event& event) = 0;

protected:
    void requestStackPush(States::ID stateId);
    void requestStackPop();
    void requestStackClear();

    Context getContext() const;

private:
    StateStack* mStack;
    Context mContext;
};

#endif //COURSE_STATE_H
