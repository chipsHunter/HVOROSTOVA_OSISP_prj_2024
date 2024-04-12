//
// Created by hvorostok on 11.04.2024.
//

#include "State.h"

State::State(StateStack &stack, State::Context context) {

}

State::~State() {

}

void State::requestStackPush(States::ID stateId) {

}

void State::requestStackPop() {

}

void State::requestStackClear() {

}

State::Context State::getContext() const {
    return State::Context();
}
