#include "electricalcalc.h"

int main()
{
    printf("Choose your option \n 1.Electrical \n");
    int choice;
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        electricalcalc();
        break;
    }
    return 0;
}