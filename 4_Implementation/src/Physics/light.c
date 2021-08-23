#include<stdio.h>
#include "physicscalc.h"
void LightFormulas()
{
while(1)
{
printf("Welecome to Light Formulae\nchoose one:\n");
printf("1.Incident and Reflection Angles\n2.Refractive Index and Snells Law\n3.Lens Equaction\n0.Quit\n");
int t;
scanf("%d",&t);
		if(t==0)
		{
			printf("Thank you");
			break; 
		}
		else if(t==1)
		{
			printf("Enter the Angle of Incedence\n");
			int angle;
			scanf("%d",&angle);
			if(angle<=45)
			{
				int reflection=90-angle;
				printf("Reflection angle is:%d\n",reflection);
			}
			else
			{
				printf("Reflection angle is:%d\n",2*angle);
			}
		}
		else if(t==2)
		{
			printf("Please Enter the speed value in terms of 10^8\n");
			printf("Enter the Speed of light in medium\n");
			float speed;
			scanf("%f",&speed);
			float index;
			index=3/speed;
			printf("Refractive Index:%f\n",index);
		}
		else if(t==3)
		{
			int r,u,v;
			printf("Enter Image distance\n");
			scanf("%d",&u);
			printf("Enter object distance\n");
			scanf("%d",&v);
			r=(u*v)/(u+v);
			printf("Focal Length is:%d\n",r);
		}
		else
		{
			printf("Wrong Input");
			break;
		}
   }
}
