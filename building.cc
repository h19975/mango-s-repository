#include "building.h"
#include "display.h"
#include <string>
#include <iostream>
using namespace std;

Square::Building::Building(string name, string owner, const int pocost,
  bool mortgage,const int type, Display *d): Square(d), name{name}, owner{owner}, 
   pcost{pcost},  mortgage{mortgage}, type{type} {}

string Square::Building::getName() {
  return name;}


string Square::Building::getOwner() {
  return owner;
}


const int Square::Building::getPrice() {
  return pcost;
}


const int Square::Building::getType() {
  return type;
}


void  Square::Building::changeOwner(string s) {
   owner = s;
}



void Square::Building::changeMortgage() {
   mortgage = !mortgage;
}


bool Square::Building::getMortgage() {
  return mortgage;
}

