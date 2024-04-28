//
// Created by hvorostok on 29.04.2024.
//

#include "Command.h"
template <typename GameObject, typename Function>
Command::Action derivedAction(Function fn) {
    return [=] (SceneNode& node, coordinate _coordinate)
    {
        // Check if cast is safe
        assert(dynamic_cast<GameObject*>(&node) != nullptr);

        // Downcast node and invoke function on it
        fn(static_cast<GameObject&>(node), _coordinate);
    };
}

