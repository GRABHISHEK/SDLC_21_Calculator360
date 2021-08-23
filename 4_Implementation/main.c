#include "electricalcalc.h"
#include "Electronics.h"
#include "calculator.h"
#include "fin.h"
#include "physicscalc.h"
int main()
{
printf("Choose your option \n1.Electrical \n2.Electronic \n3.Arithmetic \n4.Finance \n5. Physics \n6.");
   int choice;
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        electricalcalc();
        break;
    case 2:
        Electronicsfun();
        break;   
    case 3:
        mathcalc();
        break;
    case 4:
        financecal();
        break;
    case 5:
        physicscalc();
        break;
    case 6:
      break;
    default:
        printf("\nInvalid choice, please choose from 1 to 6");
    }
    return 0;
}
