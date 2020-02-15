#include <iostream>
#include "Ticket_Menu.h"
#include "Miles.h"
#include "Temperature.h"
#include "Time.h"

using namespace std;
int main() {
    /*Ticket_Menu();*/
  /*  Miles obj;
    obj.Input();
    obj.Calculations();
    obj.Output();*/
   /* Temperature obj;
    obj.Input();
    obj.averageLow();
    obj.averageHigh();
    obj.indexHigh();
    obj.indexLow();*/

   Time obj;
   int choice = obj.Menu();
   if (choice == 1)
   {
       obj.internationalConversion();
   } else if (choice == 2)
   {
       obj.localConversion();
   } else{
       cout<<"Invalid Choice";
   }
   return 0;


}
