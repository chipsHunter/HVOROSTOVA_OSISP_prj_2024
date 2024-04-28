#ifndef COURSE_ENTITY_H
#define COURSE_ENTITY_H


#include <SFML/System/Vector2.hpp>
#include "../sever_structures.h"
#include "../../resource_managment/Textures.h"
#include "../SceneNode.h"

class Entity: public SceneNode{
    coordinate coordinates;
    //int hp;
//    enum entity_type {
//        BULLET = 1 << 1,
//        PLAYER = 1 << 2
//    };
public:
    explicit Entity(entity _entity);
    virtual Textures::ID getResource() = 0;
};
#endif //COURSE_ENTITY_H
