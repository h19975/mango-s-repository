#include "academic.h"
#include <vector>
#include <string>
#include "display.h"
using namespace std;

Building::Academic::Academic(Display *d, string name, string owner, const int pcost,
    bool mortgage=false, const int type, const int icost, vector<const int> *iv, int curinum):
    Building(d, name, owner, pcost, mortgage, type), icost{icost}, iv{iv}, curinum{curinum} {}


Building::Academic::~Academic() {delete iv;}


const int Building::Academic::getTuition() {
   return (*iv)[curinum];
}


void Building::Academic::addImprovement() {
   if (curinum >= 5) {    // could improve  
    d->invalidAddImprovement();}
   else { curinum ++; d->sAddImprovement();}
}


void Building::Academic::deleteImprovement() {
   if (curinum == 0) {
     d->invalidDeleteImprovement();}
   else { curinum --; d->sDeleteImprove();}
}


const int Building::Academic::getICost() {
  return icost;
}

int Building::Academic::getAsset() {
 return getPrice()+icost*curinum;
}

int Building::Academic::getCurinum() {
 return curinum;
}

void Building::Academic::changeImprovement(int i) {
 curinum = i;
}


