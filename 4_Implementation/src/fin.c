#include<math.h>
#include<stdlib.h>
#include<stdio.h>
#include"fin.h"

double simpleinterest(double pr,double ra,double ti)
{
	double SI=0;
	SI=(pr*ra*ti)/100;
	return SI;
}
//function 2
double principal(double si,double ra,double ti)
{
	double PR=0;
	PR=(100*si)/(ra*ti);
	return PR;
}
//function 3
double rate(double si,double pr,double ti)
{
	double RA=0;
	RA=(100*si)/(pr*ti);
	return RA;
}
//function 4
double time(double si,double pr,double ra)
{
	double TI=0;
	TI=(100*si)/(pr*ra);
	return TI;
}
//function 5
double gain(double sp,double cp)
{
	double G=0;
	G=sp-cp;
	return G;	
}
//function 6
double loss(double sp,double cp)
{
	double L=0;
	L=cp-sp;
	return L;
}
//function 7
double gainp(double G,double cp)
{
	double GP=0;
	GP=(G*100)/cp;
	return GP;
}
//function 8
double lossp(double L,double cp)
{
	double LP=0;
	LP=(L*100)/cp;
	return LP;
}
//function 9
double spgain(double GP,double cp)
{
	double spg=0;
	spg=((100+GP)/100)*cp;
	return spg;
}
//function 10
double sploss(double LP,double cp)
{
	double spl=0;
	spl=((100-LP)/100)*cp;
	return spl;
}
//function 11
double cpgain(double GP,double sp)
{
	double cp=0;
	cp=(100/(100+GP))*sp;
	return cp;
}
//function 12
double cploss(double LP,double sp)
{
	double cp=0;
	cp=(100/(100-LP))*sp;
	return cp;
}
//function 13
double gainfw(double ev,double tv)
{
	double GP=0;
	GP=(ev/(tv-ev))*100;
	return GP;
}
//function 14
double premium(double mv,double fv)
{
	double P=0;
	P=mv-fv;
	return P;
}
//function 15
double discount(double mv,double fv)
{
	double D=0;
	D=fv-mv;
	return D;
}
//function 16
long no_of_shares(long tis,long is)
{
	long n=0;
	n=tis/is;
	return n;
}