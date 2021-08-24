#include <stdio.h>
#include "physicscalc.h"

float workEnergypower(int k,float m,float F,float D,float h,float v,float V,float R) // main function declaration
{
  
  float W,PE,KE,P;
  float g=9.8;
  if(k==1){
      W=F*D; // Work
      printf("%f",W);
      return W;
  }
  else if (k==2) {
      PE=m*g*h; // potential energy
      KE=0.5*(m*v*v);// kinetic energy
      printf("%f %f", PE,KE);
      return PE;
  }
  else if(k==3){
      P=(V*V)/R; // Power
      printf("%f",P);
      return P;
  }
  else{
      printf("No option selected");
      return 0;
  }
}
