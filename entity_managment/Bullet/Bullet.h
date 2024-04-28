#ifndef COURSE_BULLET_H
#define COURSE_BULLET_H

#include <SFML/Graphics/Sprite.hpp>
#include "../Entity/Entity.h"
#include "../../resource_managment/TextureHolder/ResourceHolder.h"
#include "../../EntityType.h"
#include <SFML/Graphics/RenderTarget.hpp>

typedef ResourceHolder<Textures::ID, sf::Texture> TextureHolder;

class Bullet: public Entity{
public:
    Bullet(bullet_t bulletInfo, const TextureHolder &bulletTexture);
    virtual void drawCurrent(sf::RenderTarget& target, sf::RenderStates states) const;

private:
    sf::Sprite sprite;
    EntityType::Type owner;
};
#endif //COURSE_BULLET_H
