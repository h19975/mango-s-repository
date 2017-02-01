#ifndef _BANKRUPT_H_
#define _BANKRUPT_H_

class Bankrupt {
   Display *d;
  public:
   Bankrupt(d);
   ~Bankrupt();
   void sellall(Player *p);
   void auction(Building *p, vector<Player *> v);
}
