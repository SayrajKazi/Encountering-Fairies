#include "EvilFairy.h"

EvilFairy::EvilFairy(string name):Fairy(name,10,50)
{
totalPoints=0;
}
int EvilFairy::executeFairy(){

cout<<"Hello, my name is "<<name<<"! ";
cout<<"What is your choice? Enter a number as follows: "<<endl<<"1) Ask for a wish 2) Offer to help me 3) say goodbye"<<endl;
  
  
while(true)
{
cin>>choice;
if(choice==1 )
{
  

totalPoints-=wishRejected();
}
else if(choice==2 )
{
totalPoints-=offerRejected();
  
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
