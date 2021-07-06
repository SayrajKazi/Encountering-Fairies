#include <iostream>
#include "baseF.h"
#ifndef EVILFAIRY_H
#define EVILFAIRY_H
class EvilFairy: public Fairy{
private:
int choice;
int totalPoints;
public:
EvilFairy(string name);
int executeFairy();
int offerAccepted(int offerNo);

};
#endif 