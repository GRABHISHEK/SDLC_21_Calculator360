#include "time.h"
int timecalc()
{
    unsigned long long v;
    char x,y;
    printf("enter a number for conversion \n");
    scanf("%llu",&v);
    printf("enter the unit of number\n");
    printf("for year press a \n");
    printf("for month press b \n");
    printf("for day  press c \n");
    printf("for hour press d \n ");
    printf("for minute press e \n ");
    printf("for second press f\n");
    scanf(" %c",&x);
    printf(" in which field you have to convert\n for year press a \n for month press b \n for day press c \n for hour press d \n for minute press e \n for second press f \n");
    scanf(" %c",&y);
    switch(x)
    {
        case 'a':
            if( y == 'a' )
            {
                printf("your converted value is %llu year \n",v);

            }
            else if(y=='b')
            {
                printf("your converted value is %llu months \n",v);
            }
            else if(y=='c')
            {
                printf("your converted value is %llu days \n",v*12*30);
            }
            else if(y=='d')
            {
                printf("your converted value is %llu months \n",v*12*30*24);
            }
            else if(y=='e')
            {
                printf("your converted value is %llu",v*12*30*24*60);

            }
            else if(y=='f')
            {
                printf("your converted value is %llu",v*12*30*24*60*60);
            }
            break;
        case 'b':
            if( y == 'a' )
            {
                printf("your converted value is %llu year \n",v);

            }
            else if(y=='b')
            {
                printf("your converted value is %llu months \n",v);
            }
            else if(y=='c')
            {
                printf("your converted value is %llu days \n",v*30);
            }
            else if(y=='d')
            {
                printf("your converted value is %llu months \n",v*30*24);
            }
            else if(y=='e')
            {
                printf("your converted value is %llu",v*30*24*60);

            }
            else if(y=='f')
            {
                printf("your converted value is %llu",v*30*24*60*60);
            }
            break;
        case 'c':
            if( y == 'a' )
            {
                printf("your converted value is %llu year \n",v/12);
            }
            else if(y=='b')
            {
                printf("your converted value is %llu months \n",v/30);
            }
            else if(y=='c')
            {
                printf("your converted value is %llu days \n",v);
            }
            else if(y=='d')
            {
                printf("your converted value is %llu hours \n",v*24);
            }
            else if(y=='e')
            {
                printf("your converted value is %llu",v*24*60);

            }
            else if(y=='f')
            {
                printf("your converted value is %llu",v*24*60*60);
            }
            break;
        case 'd':
            if( y == 'a' )
            {
                printf("your converted value is %llu year \n",v/8760);
            }
            else if(y=='b')
            {
                printf("your converted value is %llu months \n",v/730);
            }
            else if(y=='c')
            {
                printf("your converted value is %llu days \n",v/24);
            }
            else if(y=='d')
            {
                printf("your converted value is %llu hours \n",v);
            }
            else if(y=='e')
            {
                printf("your converted value is %llu",v*60);

            }
            else if(y=='f')
            {
                printf("your converted value is %llu",v*60*60);
            }
            break;
        case 'e':
            if( y == 'a' )
            {
                printf("your converted value is %llu year \n",v/525600);
            }
            else if(y=='b')
            {
                printf("your converted value is %llu months \n",v/43800);
            }
            else if(y=='c')
            {
                printf("your converted value is %llu days \n",v/1440);
            }
            else if(y=='d')
            {
                printf("your converted value is %llu hours \n",v/60);
            }
            else if(y=='e')
            {
                printf("your converted value is %llu",v);

            }
            else if(y=='f')
            {
                printf("your converted value is %llu",v*60);
            }
            break;    
        case 'f':
            if( y == 'a' )
            {
                printf("your converted value is %llu year \n",v/31536000);
            }
            else if(y=='b')
            {
                printf("your converted value is %llu months \n",v/2592000);
            }
            else if(y=='c')
            {
                printf("your converted value is %llu days \n",v/86400);
            }
            else if(y=='d')
            {
                printf("your converted value is %llu hours \n",v/3600);
            }
            else if(y=='e')
            {
                printf("your converted value is %llu",v*60);

            }
            else if(y=='f')
            {
                printf("your converted value is %llu",v);
            }
            break;
            
            
      
    }
}
