#include <stdio.h>
#include "physicscalc.h"

void mofoim() // main function declaration
{
  int k;
  float m,v,u,a,A,V,P,F,I,Pr,D; // variable declaration.
  printf("Enter the value of m");
  scanf("%f",&m);
  
  printf("Choose the required output 1.momentum 2.force 3.impulse"); // instruction for the user.
  scanf("%d", &k);
  if(k==1){
      printf("Enter the value of v");
      scanf("%f",&v);
      P=m*v; // momentum.
      printf("%f",P);
  }
  else if (k==2) {
      printf("Enter the value of a");
      scanf("%f",&a);
      F=m*a; // Force
      printf("%f", F);
  }
  else if(k==3){
      printf("Enter the value of v and u");
      scanf("%f %f",&v,&u);
      I=m*(v-u); // Impulse
      printf("%f",I);
  }
  else if(k==4){
      printf("Enter the values of F and A");
      scanf("%f %f",&F,&A);
      Pr=F/A; // Pressure
      printf("%f",Pr);
  }
  else if(k==5){
      printf("Enter the value of V");
      scanf("%f",&V);
      D= m/V; // Density
      printf("%f",D);
  }
  else{
      printf("No option selected");
  }
}