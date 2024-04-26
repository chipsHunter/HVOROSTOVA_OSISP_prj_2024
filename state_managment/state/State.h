#ifndef COURSE_STATE_H
#define COURSE_STATE_H

#include <memory>
#include <SFML/Graphics/RenderWindow.hpp>
#include "../state_stack/StateStack.h"
#include "../../resource_managment/TextureHolder/ResourceHolder.h"
#include "../../resource_managment/Fonts.h"

class Font;

class State {
public:
    typedef std::unique_ptr<State> Ptr;
    struct Context {
        sf::RenderWindow*	                            window;
        ResourceHolder<Textures::ID, sf::Texture>*		textures;
        ResourceHolder<Fonts::ID, Font>*			        fonts;
        //Player                                        player;
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
