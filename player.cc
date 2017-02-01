#include <iostream>
#include <string>
#include <vector>
#include "player.h"
#include "display.h"
#include "Bankrupt.h"
#include "Building.h"
using namespace std;


Player:: Player (string name, int cash, int numInLine, int sellRollUp, int location, bool inLine, vector <vector <Building *>>myBuilding, bool bankrupt): name {name},
         cash {cash}, numInLine {numInLine}, selfRollUp {selfRollUp}, inLine {inLine}, myBuilding {myBuilding}, bankrupt {bankrupt}, 
           {
               new Bankrupt *myBank;
               new Display *d;
                             
           }

//*****************************************************************************
int Player:: getLocation () {
  return this.location;
}

//*****************************************************************************

string Player:: getName () {
  return this.name;
}

//*****************************************************************************

void Player:: setLocation (int i) {
  int temp = location + i;
  if (temp > 39) {
   location = temp - 40;
  }
  else {
   location = temp;
  }

}

//*****************************************************************************

void Player:: getMoney (int i) {
  this.cash += i;

}

//*****************************************************************************

void Player:: payMoney (int i) {

  if (i > cash) { //might bankrupt
   d->wantBankrupt();
   string answer;
   while (cin >> answer) {
   if (answer == "Y" || answer == "y") { 
      this.bankrupt = true; // want to banktrupt without selling improvements
      break;
      }
   else if (answer == "N" || answer == "n") {
      myBank->sellAll(* this); // selling all improvments 
      if (i > cash) {
      this.bankrupt = true; // tried raising money, but didnt work, bankrupt
      }
      else {
      this.cash -= i; //else sub amount
      }
      break;
      } 
   else {
     d->invalidInput(); //invalid input
     d->wantBankrupt();
    }   

  }
  }
  else {
    this.cash -= i;
  }

}

//******************************************************************************

void  Player:: getAsset () {
  int total = 0;
  
  for (int = 0; i < 10; i ++) {
    int len = myBuilding[i].size();
    for (int j = 0; j <len; j++) {
     total += myBuilding[i][j]->getTotalWorth();
    }

  }
 total += cash; 
 d->printAsset(cash, name);
}

//*****************************************************************************

void Player:: addBuilding(Building * b) {
   for (int i = 0; i < 10; i++){
   if (b->getType() == i ) {
     myBuilding[i]->emplace_back(b);
     b->changeOwner (name);
    }
  }
}

//****************************************************************************

vector <vector <Building *>> Player:: gellAllProperty () {
return myBuilding;

} 

//***************************************************************************

void Player:: makeImprovement(Building * b) {
  if (haveBuilding(b) == false) {
    d->notOwned(b->getName());
  }
  int i = b->getType();
  int len = myBuilding[i].size();
  if (max[i] != len) {
   d->cannotImprove(b->getName());
  }
  else {
   b->addImprovement(* this);
  }
  
}

//*****************************************************************************

void Player:: deleteImprovement (Building * b) {
   if (haveBuilding(b) == false) {
      d->notOwned (b->getName());
    }
   int i = b->getType();
   int len = myBuilding[i].size();
   for (int j = 0; j < i; j++) {
     if (b == myBuilding[i][j]) {
     myBuilding.erase(myBuilding[i][j]);
     }
   }

  }

//*****************************************************************************

void Player:: sellImprovement (Building * b) {
  if (haveBuilding(b) == false) {
    d->notOwned (b->getName());
  }
  else {
    b->deleteImprovement();
  }

  }

//***************************************************************************

bool Player:: haveBuilding (string s) {
   for (int i = 0; i < 10; i++) {
     int len = myBuilding[i];
   for (int j = 0; j < len; j++) {
     if (s == myBuilding[i][j]->getName()) {
        return true;
     }
   }

   } 
    return false;

}

//***************************************************************************


int Player:: getCash () {
 return cash;

 }

//*****************************************************************************


Player:: ~Player () {
 delete d;
 delete myBank;
 for (int i = 0; i < 10; i++) {
  int len = myBuilding[i];
  for (int j = 0; j < len; j++) {
   myBuilding[i].pop_back();
  }
 
  } 

}


//*****************************************************************************


int Player:: getResNum () {
return myBuilding[8].size();

}

//****************************************************************************

int Player:: getGymNum () {
return myBuilding[9].size();

}

//***************************************************************************

void Player:: addSelfRollUp () {
selfRollUp++;
}

//***************************************************************************

void Player:: removeSelfRollUp () {
selfRollUp++;
}

}

//**************************************************************************

void Player:: changeInLine () {
if (inLine) {

inLine = false;
}
else {
inLine = true;
}
}
//************************************************************************

bool  Player:: isInLine () {
return inLine;
}

//************************************************************************

bool Player:: getBankrupt() {
return bankrupt;
}

//***********************************************************************


void setNumInLine (int n) {
numInLine = n;

}


//****************************************************************

int getNumInLine(){
return numInLine;
}

//***********************************************************************

int getSelfRollUp () {
return selfRollUp;
}  
