#include "baseF.h"
#include <iostream>

using namespace std;


Fairy::Fairy(string name,int wishPoint,int offerPoint,int totalWishes,int totalOffers)
{
this->name=name;
this->wishPoint=wishPoint;
this->offerPoint=offerPoint;
this->totalWishes=totalWishes;
this->totalOffers=totalOffers;
}
  
Fairy::Fairy(string name,int wishPoint,int offerPoint)
{
this->name=name;
this->wishPoint=wishPoint;
this->offerPoint=offerPoint;
}

string Fairy::getName(){
return name;
}

 int Fairy::executeFairy(){
    cout<<"this us base class";
    return 0;
}


int Fairy::wishGranted(int wishNo){
    if(wishNo<=totalWishes)
    {
        cout<<" You have asked for a wish. How wonderful!"<<"You earn"<<wishPoint<<"points"<<endl;
        return wishPoint;
    }
    else{
        cout  << "can't grant any more wishes for you"<<endl;
        return 0;
        }
}

int Fairy:: wishRejected(){
    cout<<"Can't grant you wish"<< " You loss" << wishPoint <<" points"<<endl;
    return wishPoint;

}

int Fairy::offerAccepted(int offerNo)
{
    if(offerNo<=totalOffers)
    {
        cout<<"You have Offer to Help me.How wonderFull!" <<" You earn "<<offerPoint<<" points"<<endl;
        return offerPoint;
    }
    else
    {
        cout<<"no More Offer to Help"<<endl;
        return 0;
    }
}
  
int Fairy::offerRejected(){
cout<<"Can't accept you Offer to Help me." <<" You loss "<<offerPoint<<" points"<<endl;
return offerPoint;
}

