#include "bankrupt.h"
#include "player.h"
#include "building.h"
#include <vector>
#include <string>
using namespace std;


Bankrupt::Bankrupt(Display *d): d{d} {}

Bankrupt::~Bankrupt() {}


void Bankrupt::sellall(Player *p) {
  vector<vector<Building *>> v = p->getAllProperty();
  int i = 0; int j = 0;
  int sum = 0;
  while (i < v.size()) {
    j = 0;
    while (j < v[i].size()) {
     sum += (v[i][j]->getAsset())*0.5;
     int n = 0;
     while (n < v[i][j]->getCurinum()) {
      v[i][j]->deleteImprovement();
      n++;}
     v[i][j]->changeMortgage();
     j++;}
    i++;}
   p->getMoney(sum);
}


void Bankrupt::auction(Building *b, vector<Player *> v) {
     // the owner already bankrupt; not in the vector
   d->startAuction(b->getName());
   int i = 0;
   int curprice; int max;
   while (i< v.size()) { 
     d->wantedPrice();
     if (!(cin>>curprice)) {d->invalidInput();cin.clear(); cin.ignore();}
     else {
     if (v.size()==1 && curprice != 0) 
       {if (v[0]->getCash() < curprice) { d->notEnoughCash(); d->failedAuction(); d->changeOwner("BANK");exit;}
        else  { d->sAuction(v[0]->getName()); v[0]->payMoney(curprice); v[0]->addBuilding(b);exit;}}
     else if (v.size() == 1 && curprice == 0) {d->failedAuction();b->changeOwner("BANK");exit;}
     else if (curprice == 0) {d->playerQuit(v[i]->getName()); v.erase(v.begin()+i);}
     else if (curprice <= max) {d->priceIsLow(); d->playerQuit(v[i]->getName(); v.erase(v.begin()+i);}
     else if (curprice > v[i]->getCash()) { d->notEnoughCash(); v.erase(v.begin()+i);}
            else { d->playerAuction(v[i]->getName(), curprice); max = curprice; 
                   if (i+1 == v.size()) {i = 0;}; i++;}}}
}


