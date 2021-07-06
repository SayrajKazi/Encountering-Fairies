#include <iostream>
#include "baseF.h"
#ifndef GOODFAIRY_H
#define GOODFAIRY_H
using namespace std;

class GoodFairy: public Fairy{
private:
int choice;
int noOfWishes;
int noOfOffers;
int totalPoints;
int wishes;
int offers;
public:
GoodFairy(string name);
int executeFairy();

};

#endif