#ifndef SMALLTREASURE_H
#define SMALLTREASURE_H

#include "treasure.h"

class SmallTreasure : public Treasure {
 public:
    SmallTreasure(Floor *floor, Posn posn, int gold);
    ~SmallTreasure();
    bool gainGold(Player* player) override;
};

#endif