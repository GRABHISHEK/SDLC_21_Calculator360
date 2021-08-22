#include<math.h>
#include<stdlib.h>
#include<stdio.h>
#include"fin.h"

long no_of_shares(long tis,long is)
{
	long n=0;
	n=tis/is;
	return n;
}