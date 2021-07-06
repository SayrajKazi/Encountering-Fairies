#include <iostream>
#include <string>


#ifndef BASEF_H
#define BASEF_H
using namespace std;

class Fairy{
    protected:

            string name;
            int choice;
            int wishPoint;
            int offerPoint;
            int totalWishes;
            int totalOffers;
    public: //will stop the instantiation of base class Fairy
                Fairy(string name,int wishPoint,int offerPoint,int totalWishes,int totalOffers);
                
                Fairy(string name,int wishPoint,int offerPoint);

                string getName();

                virtual int executeFairy();

                int wishGranted(int wishNo);

                int wishRejected();
                int offerAccepted(int offerNo);

                int offerRejected();



};
#endif                
  