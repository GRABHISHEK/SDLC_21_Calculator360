#include "physicscalc.h"

int physicscalc()
{
    printf("\n 1. Newtonian Gravity\n 2. Newtons\n 3. amTorque\n 4. circularMotion\n 5.display_velocity\n 6. friction\n 7. light\n 8. mfi\n 9. moi\n 10. reducedMass\n 11. sound\n 12. work_energy\n 13.heightOfProjectile\n 14. conicalPendulum\n 15. simplePendulum\n 16.lenslaw\n");
    int c;
    printf("\nEnter your choice : ");
    scanf("%d", &c);
    switch (c)
    {
    case 1:
        float F,m1,m2,r;
        printf("Enter the values of m1, m2 and r");
        scanf("%f %f %f",&m1,&m2,&r);
        force();
        printf("%f",force(m1,m2,r));
        break;
    /*case 2:
        Newtons();
        break;
    case 3:
        AmTorque();
        break;
    case 4:
        circularMotion();
        break;
    case 5:
        disVelocity();
        break;
    case 6:
        friction();
        break;
    case 7:
    {
        LightFormulas();
        break;
    }
    case 8:
    {
        mofoim();
        break;
    }
    case 9:
        moi();
        break;

    case 10:
        reduceMass();
        break;
    case 11:
        SoundFormulas();
        break;
    case 12:
        workEnergypower();
        break;
    case 13:
        heightOfProjectile();
        break;
    case 14:
        conicalPendulum();
        break;
    case 15:
        simplePendulum();
        break;
    case 16:
        lenslaw();
        break;*/
    default:
        printf("\nWrong option");
        physicscalc();
    }
}
