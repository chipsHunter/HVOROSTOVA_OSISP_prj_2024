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
    return nullptr;
}

void StateStack::applyPendingChanges() {

}

template<class T>
void StateStack::registerState(States::ID stateId) {
    mFactories[stateId]
}
