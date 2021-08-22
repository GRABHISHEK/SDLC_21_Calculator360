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
//function 17
int financecal()
{
	int input;
	double a1,a2,a3,b1,b2,b3,c1,c2,c3,d1,d2,d3,e1,e2,f1,f2,g1,g2,h1,h2,i1,i2,i11,i12,k1,k2,l1,l2,m1,m2,n1,n2,o1,o2;
	long p1,p2;

	while(1)
	{
    	printf("**************************************************************\n");
    	printf("*                                                            *\n");
    	printf("*                     Financial Calculator                   *\n");
    	printf("* Used for Simple Interest,Profit & Loss and Stocks & Shares *\n");
    	printf("*                                                            *\n");
    	printf("**************************************************************\n");
    	printf("\n");
    	printf("*******************\n");
    	printf("| SIMPLE INTEREST |\n");
    	printf("*******************\n");
    	printf("1. Simple Interest\n2. Principal\n3. Rate of interest\n4. Time\n");
    	printf("*****************\n");
    	printf("| PROFIT & LOSS |\n");
    	printf("*****************\n");
    	printf("5. Gain\n6. Loss\n7. Gain Percentage\n8. Loss Percentage\n9. Selling Price(with Gain)\n10. Selling Price(with Loss)\n11. Cost Price(with Gain)\n12. Cost Price(with Loss)\n13. Gain(from false weights)\n");
    	printf("*******************\n");
		printf("| STOCKS & SHARES |\n");
		printf("*******************\n");
    	printf("14. Premium of share\n15. Discount of share\n16. No. of Shares\n");
    	printf("\nEnter your choice: ");
    	scanf("%d",&input);
    	switch(input)
    	{
        	case 1:
        		printf("Enter the principal amount:");
        		scanf("%lf",&a1);
        		printf("Enter the rate of interest(per annum in percentage):");
        		scanf("%lf",&a2);
        		printf("Enter the time(in years):");
        		scanf("%lf",&a3);
        		//SI=(pr*ra*ti)/100;
        		printf("\nSimple Interest : %lf",simpleinterest(a1,a2,a3));
        		break;
        	
        	case 2:
        		printf("Enter the simple interest:");
        		scanf("%lf",&b1);
        		printf("Enter the rate of interest(per annum in percentage):");
        		scanf("%lf",&b2);
        		printf("Enter the time(in years):");
        		scanf("%lf",&b3);
        		//PR=(100*si)/(ra*ti);
        		printf("\nPrincipal : %lf",principal(b1,b2,b3));
        		break;

        	case 3:
        		printf("Enter the simple interest:");
        		scanf("%lf",&c1);
        		printf("Enter the principal amount:");
        		scanf("%lf",&c2);
        		printf("Enter the time(in years):");
        		scanf("%lf",&c3);
        		//RA=(100*si)/(pr*ti);
        		printf("\nRate of interest(per annum in percentage) : %lf",rate(c1,c2,c3));
        		break;

        	case 4:
        		printf("Enter the simple interest:");
        		scanf("%lf",&d1);
        		printf("Enter the principal amount:");
        		scanf("%lf",&d2);
        		printf("Enter the rate of interest(per annum in percentage):");
        		scanf("%lf",&d3);
        		//TI=(100*si)/(pr*ra);
        		printf("\nTime(in years) : %lf",time(d1,d2,d3));
        		break;
        	
        	case 5:
        		printf("Enter the Selling Price(SP):");
        		scanf("%lf",&e1);
        		printf("Enter the Cost Price(CP):");
        		scanf("%lf",&e2);
        		//G=sp-cp;
        		if(e1>e2)
				{
					printf("\nGain : %lf",gain(e1,e2));
				}
				else
				printf("\nSelling price should be more than the cost price to get 'Gain'");
        		break;
        		
        	case 6:
        		printf("Enter the Selling Price(SP):");
        		scanf("%lf",&f1);
        		printf("Enter the Cost Price(CP):");
        		scanf("%lf",&f2);
        		//L=cp-sp;
        		if(f1<f2)
				{
					printf("\nLoss : %lf",loss(f1,f2));
				}
				else
				printf("\nSelling price should be less than the cost price to get 'Loss'");
        		break;	
        		
        	case 7:
        		printf("Enter the Gain:");
        		scanf("%lf",&g1);
        		printf("Enter the Cost Price(CP):");
        		scanf("%lf",&g2);
        		//GP=(G*100)/cp;
        		printf("\nGain(in percentage) : %lf",gainp(g1,g2));
        		break;
			
			case 8:
        		printf("Enter the Loss:");
        		scanf("%lf",&h1);
        		printf("Enter the Cost Price(CP):");
        		scanf("%lf",&h2);
        		//LP=(L*100)/cp;
        		printf("\nLoss(in percentage) : %lf",lossp(h1,h2));
        		break;	
        		
        	case 9:
        		printf("Enter the Gain(in percentage):");
        		scanf("%lf",&i1);
        		printf("Enter the Cost Price(CP):");
        		scanf("%lf",&i2);
        		//sp=((100+GP)/100)*cp;
        		printf("\nSelling Price(from Gain(in percentage)) : %lf",spgain(i1,i2));
        		break;
        		
        	case 10:
        		printf("Enter the Loss(in percentage):");
        		scanf("%lf",&i11);
        		printf("Enter the Cost Price(CP):");
        		scanf("%lf",&i12);
        		//sp=((100-LP)/100)*cp;
        		printf("\nSelling Price(from Loss(in percentage)) : %lf",sploss(i11,i12));
        		break;
			
			case 11:
				printf("Enter the Gain(in percentage):");
        		scanf("%lf",&k1);
        		printf("Enter the Selling Price(SP):");
        		scanf("%lf",&k2);
        		//cp=(100/(100+GP))*sp;
        		printf("\nCost Price(from Gain(in percentage)) : %lf",cpgain(k1,k2));
        		break;
			
			case 12:
				printf("Enter the Loss(in percentage):");
        		scanf("%lf",&l1);
        		printf("Enter the Selling Price(SP):");
        		scanf("%lf",&l2);
        		//cp=(100/(100-LP))*sp;
        		printf("\nCost Price(from Loss(in percentage)) : %lf",cploss(l1,l2));
        		break;
        		
        	case 13:
        		printf("If a trader professes to sell his goods at cost price, but uses false weights, then:\n");
        		printf("Enter the Error value:");
        		scanf("%lf",&m1);
        		printf("Enter the True value:");
        		scanf("%lf",&m2);
        		//GP=(ev/(tv-ev))*100;
        		if(m2>m1)
        		{
        			printf("\nGain(from false weights in percentage) : %lf",gainfw(m1,m2));
				}
        		else
				printf("\nTrue value should be more than the error value to get 'Gain'");
        		break;
        	
			case 14:
				printf("Enter the market value of share:");
				scanf("%lf",&n1);
				printf("Enter the face value of share:");
				scanf("%lf",&n2);
				//P=mv-fv;
				if(n1>n2)
				{
					printf("\nPremium of share : %lf",premium(n1,n2));
				}
				else
				printf("\nMarket value should be more than the face value to get 'Premium'");
				break;
				
			case 15:
				printf("Enter the market value of share:");
				scanf("%lf",&o1);
				printf("Enter the face value of share:");
				scanf("%lf",&o2);
				//D=fv-mv;
				if(o1<o2)
				{
					printf("\nDiscount of share : %lf",discount(o1,o2));
				}
				else
				printf("\nMarket value should be less than the face value to get 'Discount'");
				break;
				
			case 16:
				printf("Enter the total investment in shares:");
				scanf("%ld",&p1);
				printf("Enter the investment in one share:");
				scanf("%ld",&p2);
				//n=tis/is;
				if(p1%p2==0)
				{
					printf("\nTotal No. of shares : %ld",no_of_shares(p1,p2));
				}
				else
				printf("\nInvalid Inputs");
				break;
				
        	default:
        	printf("\nInvalid choice, please choose from 1 to 16");
    	}
    	printf("\n----------------------------------------------\n");
    	printf("\n");
    }  
    return 0;
}