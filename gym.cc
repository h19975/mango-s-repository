#include "gym.h"
#include "display.h"
#include <string>

using namespace std;
Building::Gym::Gym(Display *d, string name, string owner, const int pcost, bool mortgage, 
   const int type): Building(d,name,owner,pcost,mortgage) {}


Building::Gym::~Gym() {}


int Building::Gym::getFee(int die, int num) {
   if (num == 0) return 0;
   if (num == 1) {return 4*die;}
   else {return 10*die;}
}

int Building::Gym::getAsset() {
  return getPrice();
}

