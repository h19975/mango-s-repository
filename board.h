#ifndef _BOARD_H_
#define _BOARD_H_
#include <vector>
#include <fstream>
#include <string>

class Square;
class Player;

class Board {
  vector<Square *> squares;
  Display *d;
  Bankrupt *bank;
  Player *players;
 public:
  Board(Display *d, Bankrupt *bank);
  ~Board();
  void trade(Player *p1, Player *p2, std::string give, std::string receive); 
  void setBoard(std::string filename) // main need to open file and save it in f
  void loadBoard(std::string filename);
  void all();
  void attachPlayer(Player *p);
  void detachPlayer(Player *p);
  void mortgage(Player *p, Building *b);
  void unmortgage(Player *p, Building *b);
  void acution(vector <vector<Building *>> vb);
  Building *getBuilding(std::string);
  bool getAnswer();
  void setLocation(Player *p, int d1, int d2);
  void addIm(Player *p, Building *b);
  void deleteIm(Player *p, Building *b);
  void asset(Player *p);
  int numPlayer();
  void letPay(Player *p);
  void transfer(vector<vector<Building *>> vb,Player *p);
}

#endif
  
