#ifndef _GYM_H_
#define _GYM_H_
#include "building.h"
#include <string>

class Gym: public Building {
  public:
    gym(Display *d, std::string name, std::string owner, const int pcost, bool mortgage,
        const int type);
    ~gym();
    int getFee(int die, int num);
    int getAsset() override;
}


#endif
