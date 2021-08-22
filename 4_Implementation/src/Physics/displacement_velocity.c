#include <stdio.h>
#include "physicscalc.h"

void disVelocity() // main function declaration
{
  int k;
  float u,a,t,s,v,va; // variable declaration
  printf("Enter the value of u");
  scanf("%f",&u);
  printf("Choose the required output 1.displacement 2.final velocity 3.average velocity"); // instruction for the user.
  scanf("%d", &k);
  if(k==1){
      printf("Enter the value of a and then t"); // instruction for the user.
      scanf("%f %f",&a,&t);
      s=(u*t)+((a*t*t)/2); // conclude the s.
      printf("%f",s);
  }
  else if (k==2) {
      printf("Enter the value of a and then t"); // instruction for the user.
      scanf("%f %f",&a,&t);
      v=u+(a*t); // final velocity
      printf("%f", v);
  }
  else if(k==3){
      printf("Enter the value of v"); // instruction for the user.
      scanf("%f", &v);
      va=0.5*(v+u); // average velocity
      printf("%f",va);
  }
  else{
      printf("No option selected");
  }
}
