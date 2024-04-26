//
// Created by hvorostok on 11.04.2024.
//

#include "StateStack.h"

StateStack::StateStack(State::Context context) : mContext(context) {

}

void StateStack::update(sf::Time time) {

}

void StateStack::draw() {

}

void StateStack::handleEvent(sf::Event &event) {

}

void StateStack::pushState(States::ID id) {

}

void StateStack::popState() {

}

void StateStack::clearStates() {

}

bool StateStack::isEmpty() {
    return false;
}

State::Ptr StateStack::createState(States::ID stateId) {
    auto found = mFactories.find(stateId);
    return found->second();
}

void StateStack::applyPendingChanges() {

}

template<class T>
void StateStack::registerState(States::ID stateId) {
    mFactories[stateId] = [this] () {
        return State::Ptr(new T(*this, mContext));
    };
}
