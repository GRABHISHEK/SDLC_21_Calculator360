#include "electricalcalc.h"
#include "Electronics.h"
#include "calculator.h"
#include "fin.h"
#include "physicscalc.h"
int main()
{
    printf("Choose your option \n1.Electrical \n2.Electronic \n3.Arithmetic \n4. \n5.Finance \n6. \n");
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
        break;
    case 5:
        financecal();
        break;
    case 6:
        physicscalc();
        break;
    default:
        printf("\nInvalid choice, please choose from 1 to 6");
    }
    return 0;
}
