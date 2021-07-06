#include "EquiVocalFairy.h"

EquiVocalFairy::EquiVocalFairy(string name):Fairy(name,10,50,3,0)
{
wishes=0;
offers=0;
totalPoints=0;
}
int EquiVocalFairy::executeFairy(){

cout<<"Hello, my name is "<<name<<"! ";
cout<<"What is your choice? Enter a number as follows: "<<endl<<"1) Ask for a wish 2) Offer to help me 3) say goodbye"<<endl;
  
  
while(true)
{
  
cin>>choice;
if(choice==1 )
{
int grantwish=rand()%2; //even mean grant wish odd mean reject wish
if(grantwish==0)
{
wishes++;
totalPoints+=wishGranted(wishes);
}
else
{
totalPoints-=wishRejected();
}
}
else if(choice==2 )
{

  
cout<<"I'll think about it"<<endl;

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