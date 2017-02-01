#include "residence.h"
#include "display.h"
#include <string>
using namespace std;



Building::Residence::Residence(Display *d, string name, string owner, const int pcost, bool mortgage, const int type, const int baserent) : Building(d,name,owner,pcost,mortgage, type), baserent{baserent} {}

Building::Residence::~Building() {}


int Building::Residence::getRent(int num) {
   if (num == 0) {return 0;};
   int i= 1;
   int rent = baserent;
   while (i < num) {
      rent *= 2;
      i++;}
   return rent;
}

int Building::Residence:: getAsset() {
  return getPrice();
}
