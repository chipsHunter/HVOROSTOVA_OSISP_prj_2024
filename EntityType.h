#ifndef COURSE_ENTITYTYPE_H
#define COURSE_ENTITYTYPE_H

namespace EntityType {
    enum Type {
        NONE            = 0,
        PLAYER1         = 1 << 1,
        PLAYER2         = 1 << 2,
        PLAYER          = PLAYER1 | PLAYER2,
        BOSS            = 1 << 3,
        PLAYERBULLER    = 1 << 4,
        BOSSBULLET      = 1 << 5
    };
}

#endif //COURSE_ENTITYTYPE_H
