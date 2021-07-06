#include <iostream>
#include "baseF.h"
#ifndef EQUIVOCALFAIRY_H
#define EQUIVOCALFAIRY_H
class EquiVocalFairy: public Fairy{
    private:
            int choice;
            int noOfWishes;
            int noOfOffers;
            int totalPoints;
            int wishes;
            int offers;
    public:
            EquiVocalFairy(string name);

            int executeFairy();

};

#endif