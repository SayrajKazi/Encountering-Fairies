#include "goodfairy.h"


GoodFairy::GoodFairy(string name):Fairy(name,10,50,5,1)
{
wishes=0;
offers=0;
totalPoints=0;
}
int GoodFairy::executeFairy(){

cout<<"Hello, my name is "<<name<<"! ";
cout<<"What is your choice? Enter a number as follows: "<<endl<<"1) Ask for a wish 2) Offer to help me 3) say goodbye"<<endl;
  
  
while(true)
{
  
cin>>choice;
if(choice==1 )
{
wishes++;
totalPoints+=wishGranted(wishes);
}
else if(choice==2 )
{

  
offers++;
totalPoints+=offerAccepted(offers);

}
else if(choice==3)
{
cout<<" goodbye to you too!"<<endl;
break;
}
else
{
cout<<" please select valid option! "<<endl;
}
}
return totalPoints;
}
