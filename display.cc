#include <string>
#include "display.h"
#include <iostream>
using namespace std;

void Display:: invalideTrade () {cout << "Trade cannot be made, either the building does not exist or you have no onwership over the building." << endl; }

void Display:: wantBankrupt ()
 {cout << " You are facing Bankruptcy, do you want to declear Bankrupt? If so please enter Y, else enter N to sell all improvements and mortgage all properties to raise money" << endl; }

void Display:: askTrade (string name) {cout << name << " do you want to trade? If so enter Y, else enter anything else" << endl;}

void Display:: gooseAttack () {cout << "ATTACKED BY A GOOSE" << endl; }

void Display:: invalidAddImprovement () {cout << "Cannot have make more than five Improvement ona single building." << endl;}

void Display:: invalidInput() {cout<< "INVALID INPUT" << endl;}

void Display:: sAddImprovement () {cout << "Improvement has been successfully made" << endl;}

void Display:: payCoopFee () {cout << "Arrive on Coop Fee, must pay $50 COOP Fee" << endl;}

void Display:: sDeleteImprovement () {cout << "Improvement has been successfully removed" << endl;}

void Display:: goToTims () {cout << "Arrived at To Go Tims. Transfering to DC Tims line (must roll double or use Roll Up Cups on next turn in order to leave)" << endl;}

void Display:: invalidaplayer () {cout << "Player does not exist." << endl;}

void Display:: printAsset (int n, string name) {cout << name << " owns $" << n << endl;}

void Display:: notOwned (string s) {cout << "You do not own " << s << " Improvement cannot be made." << endl;}

void Display:: cannotImprove (string s) {cout << "Cannot make Imrpovement on " << s << ". Must collect all monopoly first." << endl;  }

void Display:: OSAPCollection () {cout << "Passed over OSAP Collectionin, c ollect $200 of OSAP money." << endl;} 

void Display:: howToPayTuition () {cout << "Arrive at Pay Tuition." << endl; cout<< " How would you want to pay. Enter 300 or 10%. " <<endl; }

void Display:: sellFirst () {cout << "You must sell all Improvement first before trying to mortage." << endl; }

void Display:: alreadyMortgage () {cout << "Cannot mortage this building, it is already mortgaged." << endl;}

void Display:: gotACup () {cout << "Congratulation!! You recieved a Roll Up Cup!!!!!!" << endl;}

void Display:: gotMoney (int i) {cout << "Congratulation!! You hace reeived $" << i << " in NeedelsHall!!!" << endl; }

void Display:: lostMoney (int i) {cout << "You lost $" << i << " in NeedlesHall." << endl;}

void Display:: arriveSLC () {cout << "You have arrived at SLC." << endl;}

void Display:: arriveNeedles() {cout << "You have arrived at NeedlesHall." << endl;}

void Display:: goForward(int i) {cout << "You moved forward " << i << " steps." << endl; }

void Display:: goBack (int i) {cout << "You moved back " << i << " steps." << endl;}

void Display:: outOfTimsLine() {cout << "congratulation!!! You just got out of DC Tims Line. " << endl;}

void Display:: rollDouble () {cout << "WOW, rolled a Double." << endl;}

void Display:: notEnoughCash () {cout << "Sorry, you do not have enough cash." << endl;}

void Display:: failedAuction () {cout << "Auction failed! Building is back to the open market." << endl;}

void Display:: sAuction (string name) {cout <<"Congratulations!!!! " <<  s << " win the Auction." << endl; }

void Display:: startAuction (string name) {cout << name << "will be Auctioned." << endl; }

void Display:: wantedPrice () {cout << "Please enter the price you want to pay for the building." << " Enter 0 if you do not want the building." <<endl;}

void Display:: playerQuit (string name) {cout << name << " is out of the Auction." <<endl;}

void Display:: priceIsLow () {cout << "Sorry, you price is lower than the highest price so far." << endl;}

void Display:: playerAuction (string name, int price) {cout << name << "'s bidding price is $" << price << endl;}

void Display:: mustPay50 () {cout << "Your third time in DC Tims Line, and you don't have a cup so you must pay $50." << endl; }

void Display:: howToGetOutMust () {cout << "Your third time in DC Tims Line, enter cup if you to use your Roll Up Cups, or $50 will be automatically deducted" << endl;  } 

void Display:: hotToGetOut () {cout << "If want to use you Roll Up cups, please enter cup:" << endl;
                               cout << "If want to pay $50, enter pay:" << endl;
                               cout << "(any other input will leave in DC Tims Line)" << endl; }

void Display:: usedCup () {cout <<"You used a Roll Up Cup." << endl;}

void Display:: noCups () {cout << "You have no Roll Up Cups." << endl;}

void Display:: doYouWannaPay50() {cout << "Do You want to pay $50 to get out of DC Tims Line? Enter yes if you want to." << endl;}

void Display:: stillInLine () {cout << "You remained in DC Tims Line." << endl; }


void Display: enterNumPlayer () {cout << "Please enter the number of players." << endl;}

void Display: tooMuchPlayer () {cout << "Cannot have a game with more than 8 people." << endl; }

void Display:: tooLessPlayer () {cout << "Cannot have a game with less then 6 people." << endl;}

void Display:: playerExist () {cout << " Player Name already exist please enter another name" << endl;}

void Display:: gameStart () {cout << "Game Starts!!!" << endl;}

void Display:: whoTurn (string name) {cout << name << "'s turn, please enter command: " << endl;}

void Display:: youWin() {cout << "You won!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;}

void Display:: alreadyRolled () {cout << "You have already rolled for this turn, please enter another command: " << endl;}

void Display:: cannotCheckAsset () {cout << "You have to pay Tuition, cannot check your asset." << endl;}

void Display:: arriveAt (string s) {cout << "You have arrived at " << s << endl;}

void Display:: wannaBuy (int i, string name) {cout << " Do You want to buy " << name << "for $" << i << "? Enter Y if you want to buy." << endl;}

void Display:: payRent (int i) {cout << "You need to pay $" << i << "as rent." << endl;}

void Display:: buildingDoesNotExist () {cout << "Building does not exist." << endl;}

void Display:: nextTime () { cout << " Game saved for next time." << endl;}

