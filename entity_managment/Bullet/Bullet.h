#ifndef COURSE_BULLET_H
#define COURSE_BULLET_H

#include "../Entity/Entity.h"
#include "../../resource_managment/TextureHolder/ResourceHolder.h"

typedef ResourceHolder<Textures::ID, sf::Texture> TextureHolder;

class Bullet: public Entity{
public:
    explicit Bullet(entity entity, const ResourceHolder<Textures::ID, sf::Texture> &bulletTexture);
};
#endif //COURSE_BULLET_H
