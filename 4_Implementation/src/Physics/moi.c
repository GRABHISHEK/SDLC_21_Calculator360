#include <stdio.h>
#include "physicscalc.h"

void moi() // main function declaration
{
  int k;
  float m,r,l,mi; // variable declaration.
  printf("Enter the value of m and r");
  scanf("%f %f",&m,&r);

  printf("Choose the required output 1.disk 2.thin rod 3.solid sphere 4.solid shell"); // instruction for the user.
  scanf("%d", &k);
  if(k==1){
      mi=(m*r*r)/2; // disk
      printf("%f",mi);
  }
  else if (k==2) {
      printf("Enter the value of l");
      scanf("%f",&l);
      mi=(m*l*l)/12; // thin rod
      printf("%f", mi);
  }
  else if(k==3){
       mi=(2*m*r*r)/5; // solid sphere
      printf("%f",mi);
  }
  else if(k==4){
       mi=(2*m*r*r)/3; // solid shell
      printf("%f",mi);
  }
  else{
      printf("No option selected");
  }
}