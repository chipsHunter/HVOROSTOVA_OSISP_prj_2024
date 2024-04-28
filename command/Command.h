#ifndef COURSE_COMMAND_H
#define COURSE_COMMAND_H

#include <SFML/System/Time.hpp>

#include <functional>
#include <cassert>
#include "../EntityType.h"
#include "../entity_managment/sever_structures.h"


class SceneNode;

struct Command
{
    typedef std::function<void(SceneNode&, coordinate _coordinate)> Action;

    Command(): action(), category(EntityType::NONE) { }

    Action						action;
    unsigned int				category;
};
template <typename GameObject, typename Function>
Command::Action derivedAction(Function fn);

#endif //COURSE_COMMAND_H
