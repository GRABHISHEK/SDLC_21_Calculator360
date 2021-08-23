#include <stdio.h>
#include "physicscalc.h"

void circularMotion()
{
  int k;
  float m,v,r,fc,ca; // variable declaration.
  printf("Enter the values of m, v and then r");
  scanf("%f %f %f",&m,&v,&r);

  printf("Choose the required output 1.centripetal force 2.centripetal acceleration"); // instruction for the user.
  scanf("%d", &k);
  if(k==1){
      fc=(m*v*v)/r; // centripetal force
      printf("%f",fc);
  }
  else if (k==2) {
      ca=(v*v)/r; // centripetal acceleration
      printf("%f", ca);
  }
  else{
      printf("No option selected");
  }
}
