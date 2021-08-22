#ifndef __FIN_H__
#define __FIN_H__

#include<math.h>
#include<stdlib.h>
#include<stdio.h>

//int input;
int financecal();
double simpleinterest(double pr,double ra,double ti);
double principal(double si,double ra,double ti);
double rate(double si,double pr,double ti);
double time(double si,double pr,double ra);
double gain(double sp,double cp);
double loss(double sp,double cp);
double gainp(double G,double cp);
double lossp(double L,double cp);
double spgain(double GP,double cp);
double sploss(double LP,double cp);
double cpgain(double GP,double sp);
double cploss(double LP,double sp);
double gainfw(double ev,double tv);
double premium(double mv,double fv);
double discount(double mv,double fv);
long no_of_shares(long tis,long is);

#endif