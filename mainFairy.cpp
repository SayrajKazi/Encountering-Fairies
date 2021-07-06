
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;


#include "baseF.h"
#include "goodfairy.h"
#include "EquiVocalFairy.h"
#include "EvilFairy.h"


int main( int argc, char * argv[] )
{
int finalPoints=0;
Fairy *f;
GoodFairy goodFairy("billy");
EvilFairy evilFairy("Emmly");
EquiVocalFairy equiVocalFairy("Henry");
  
GoodFairy fairy2("elexa");

f=&goodFairy;
finalPoints+=f->executeFairy();
  
f=&evilFairy;
finalPoints+=f->executeFairy();
  
f=&equiVocalFairy;
finalPoints+=f->executeFairy();
  
f=&fairy2;
finalPoints+=f->executeFairy();
cout<<"Game Over: Total points are : "<<finalPoints;

return 0;
}