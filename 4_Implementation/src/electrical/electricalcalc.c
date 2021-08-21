#include "electricalcalc.h"

int electricalcalc()
{
    printf("\n 1. Ohm's law \n 2. Voltage divider\n 3. Power factor\n 4. Electricity Bill Calculator\n 5.Star to Delta Conversion \n 6.Delta to Star Conversion\n 7.KW to Amps (Single phase)\n 8.KW to Amps (Three phase) \n 9.Battery Runtime \n 10.Battery Life \n 11.Real power (Single phase)\n 12.Real power(Three phase)\n");
    int choice;
    printf("\nEnter your choice : ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        ohmslaw();
        break;
    case 2:
        voltagedivider();
        break;
    case 3:
        powerfactor();
        break;
    case 4:
        EBbill();
        break;
    case 5:
    {
        starval svinput;
        stardeltaconversion(&svinput);
        deltaval dvoutput;
        startodeltaconversion(&svinput, &dvoutput);
        printf("Ra= %d ohms,Rb= %d ohms,Rc= %d ohms", dvoutput.ra, dvoutput.rb, dvoutput.rc);
        break;
    }
    case 6:
    {
        deltaval dvinput;
        deltastarconversion(&dvinput);
        starval svoutput;
        deltatostarconversion(&dvinput, &svoutput);
        printf("R1= %d ohms,R2= %d ohms,R3= %d ohms", svoutput.r1, svoutput.r2, svoutput.r3);
        break;
    }
    case 7:
    {
        int rmsvoltage;
        float powerfactor, realpower;
        kwtoamps1p(&realpower, &powerfactor, &rmsvoltage);
        float currentamps;
        currentamps = kwtoamps1pconversion(&realpower, &powerfactor, &rmsvoltage);
        printf("%.3f A", currentamps);
        break;
    }
    case 8:
    {
        int llrmsvoltage;
        float powerfactor, realpower;
        kwtoamps3p(&realpower, &powerfactor, &llrmsvoltage);
        float currentamps;
        currentamps = kwtoamps3pconversion(&realpower, &powerfactor, &llrmsvoltage);
        printf("%.3f A", currentamps);
        break;
    }

    case 9:
    {
        int batterycapacity, loadinwatts;
        batteryruntime(&batterycapacity, &loadinwatts);
        float hours;
        hours = batteryruntimecalc(&batterycapacity, &loadinwatts);
        printf("%.1f hours", hours);
        break;
    }

    case 10:
    {
        int batterycapacity;
        float consumptioninmA;
        batterylife(&batterycapacity, &consumptioninmA);
        float hours;
        hours = batterylifecalc(&batterycapacity, &consumptioninmA);
        printf("%.1f hours", hours);
        break;
    }
    case 11:
    {
        float powerfactor, voltage, current;
        singlephase(&voltage, &current, &powerfactor);
        float kilowatts;
        kilowatts = sprealpower(&voltage, &current, &powerfactor);
        printf("%f kW", kilowatts);
        break;
    }
    case 12:
    {
        float powerfactor, voltage, current;
        threephase(&voltage, &current, &powerfactor);
        float kilowatts;
        kilowatts = tprealpower(&voltage, &current, &powerfactor);
        printf("%f kW", kilowatts);
        break;
    }
    default:
        printf("\nWrong option");
        electricalcalc();
    }
}