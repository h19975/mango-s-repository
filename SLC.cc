#include <string>
#include <cstdlib>
#include "nonproperty.h"
#include "display.h"
#include "SLC.h"
#include "time.h"
using namespace std;


NonProperty:: SLC:: SLC (Display * d, string name, int position): NonProperty{d, name, position} {}

void NonProperty:: SLC:: goTo(Player *p) {
d->arriveSLC();
srand(time(0));
int temp = rand()%100;
if (NonProperty.cupnum < 4 && temp == 0) {
d->gotACup();
NonProperty.cupnum++;
p->addSelfRollUp();
}
else {
int temp = rand ()%24;
if (temp == 0) {
p->setLocation(0);
//p->getMoney(200);
//d->OSAPCollection();
}
else if (temp == 1) {
p->setLocation(30);
//d->goToTims();
}
else if (2 <= temp <= 5) {
p->setLocation(p->getLocation() + 3);
d->goForward(3);
}
else if ( 6 <= temp <= 9) {
p->setLocation(p->getLocation() + 2);
d->goForward(2);
}
else if (10 <= temp <= 12) {
p->setLocation(p->getLocation() + 1);
d->goForward(1);
}
else if (13 <= temp <= 16) {
p->setLocation (p->getLocation() - 1);
d->goBack(1);
}
else if (17 <= temp <= 20) {
p->setLocation (p->getLocation() - 2);
d->goBack(2);

}
else {
int i = p->getLocation() - 3;
if (i < 0) {
p->setLocation (39);
}
else {
p->setLocation(i);
}
d->goBack(3);
}

} 

}


~ NonProperty:: SLC:: SLC () {};

