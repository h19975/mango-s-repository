#ifndef _ACADEMIC_H_
#define _ACADEMIC_H_
#include "building.h"
#include <vector>


class Academic() {
   const int icost;
   vector<int> iv;
   int curinum;
  public:
   Academic(Display *d, string name, string owner, const int pcost, bool mortgage, 
     const int type, const int icost, vector<const int> iv, int curinum);
   ~Academic();
   const int getTuition();
   void addImprovement();
   void deleteImprovement();
   const int getCost();
   int getAsset() override;
   int getCurinum();}

#endif
    
