#include <stdio.h>
#include "physicscalc.h"

void workEnergypower() // main function declaration
{
  int k;
  float F,D,W,m,PE,KE,h,v,P,R,V; // variable declaration
  printf("Enter the value of m");
  scanf("%f",&m);
  printf("Choose the required output 1.Work 2.Energy 3.Power"); // instruction for the user.
  scanf("%d", &k);
  if(k==1){
      printf("Enter the value of F and then D"); // instruction for the user.
      scanf("%f %f",&F,&D);
      W=F*D; // Work
      printf("%f",W);
  }
  else if (k==2) {
      printf("Enter the value of h and then v"); // instruction for the user.
      scanf("%f %f",&h,&v);
      PE=m*g*h; // potential energy
      KE=0.5*(m*v*v);// kinetic energy
      printf("%f %f", PE,KE);
  }
  else if(k==3){
      printf("Enter the value of V and R"); // instruction for the user.
      scanf("%f %f", &V,&R);
      P=(V*V)/R; // Power
      printf("%f",P);
  }
  else{
      printf("No option selected");
  }
}
