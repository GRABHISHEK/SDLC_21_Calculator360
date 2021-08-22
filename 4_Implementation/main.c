#include "electricalcalc.h"
#include "Electronics.h"
int main()
{
    printf("Choose your option \n 1.Electrical \n 2.Electronic \n");
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

    }
    return 0;
}