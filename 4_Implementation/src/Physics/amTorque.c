#include <stdio.h>
#include "physicscalc.h"

void AmTorque()
{
  int k;
  float r,p,f,J,T; // variable declaration.
  
  printf("Choose the required output 1.angular momentum 2.torque"); // instruction for the user.
  scanf("%d", &k);
  if(k==1){
      printf("Enter the value of r and then p");
      scanf("%f %f ",&r,&p); // input statement which take the value.
      J=r*p; // angular momentum
      printf("%f",J);
  }
  else if (k==2) {
      printf("Enter the value of r and then f");
      scanf("%f %f ",&r,&f); // input statement which take the value.
      T=r*f; // Torque
      printf("%f", T);
  }
  else{
      printf("No option selected");
  }
}