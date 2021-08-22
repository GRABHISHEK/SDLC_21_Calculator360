#include "Electronics.h"
#include<stdio.h>    
#include<stdlib.h>  
#define pi 3.142857
#include<math.h>
#include <string.h>
#include<conio.h>
const int m = 4, n = 4;
int Electronicsfun(){  
    int choose=0;
int a[10][10],r,c,i,j,k;
float dsst[4][4],Discretesine[4][4];


printf("enter the number of row=");    
scanf("%d",&r);    
printf("enter the number of column=");    
scanf("%d",&c);
if(r==c){
printf("enter the  matrix element=\n");    
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
scanf("%d",&a[i][j]);    
}    
}

printf("entered matrix is\n");    
   
//for printing result    
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
printf("%d",a[i][j]);    
}    
printf("\n");    
}    
printf("Choose the transformation amoung the following\n");
printf("1: Discrete cosine transform\n");
printf("2: Discrete sine transform\n");
printf("3: Hadmard transform\n");
printf("4: Discrete Fourier Transform\n");
printf("5: Runlength encoding compression\n");
scanf("%d",&choose);
if(choose==1)
{
       int i, j, k, l;
 

    float dct[m][n];
 
    float ci, cj, dct1, sum;
 
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
 
            
            if (i == 0)
                ci = 1 / sqrt(m);
            else
                ci = sqrt(2) / sqrt(m);
            if (j == 0)
                cj = 1 / sqrt(n);
            else
                cj = sqrt(2) / sqrt(n);
 
            
            sum = 0;
            for (k = 0; k < m; k++) {
                for (l = 0; l < n; l++) {
                    dct1 = a[k][l] *
                           cos((2 * k + 1) * i * pi / (2 * m)) *
                           cos((2 * l + 1) * j * pi / (2 * n));
                    sum = sum + dct1;
                }
            }
            dct[i][j] = ci * cj * sum;
        }
    }
 
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%f\t", dct[i][j]);
        }
        printf("\n");
    }

 
}
if(choose==2)
{
float dsst[4][4],Final[4][4];
float dst[4][4]={ { 0.372,0.602,0.602,0.372 },
                         { 0.602,0.372,-0.372,-0.602},
                         { 0.602,-0.372,-0.372,0.602},
                         { 0.372,-0.602,0.602,-0.372 }};
float dsstranspose[4][4]={{0.372,0.602,0.602,0.372},
                          {0.602,0.372,-0.372,-0.602},
                          {0.602,-0.372,-0.372,0.602},
                          {0.372,-0.602,0.602,-0.372}};                         
  
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
dsst[i][j]=0;    
for(k=0;k<c;k++)    
{    
dsst[i][j]+=dst[i][k]*a[k][j];    
}    
}    
}
printf("multiply of the matrix=\n");    
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
Final[i][j]=0;    
for(k=0;k<c;k++)    
{    
Final[i][j]+=dsst[i][k]*dsstranspose[k][j];    
}    
}    
}

//for printing result    
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
printf("%f\t",Final[i][j]);    
}    
printf("\n");    
}  
}
if(choose==3)
{
    int FinalA[4][4],FinalB[4][4];
int Hadmard[4][4]={{1,1,1,1},
                       {1,-1,1,-1},
                       {1,1,-1,-1},
                       {1,-1,-1,1}};
   int HadmardT[4][4]={{1,1,1,1},
                       {1,-1,1,-1},
                       {1,1,-1,-1},
                       {1,-1,-1,1}};
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
FinalA[i][j]=0;    
for(k=0;k<c;k++)    
{    
FinalA[i][j]+=Hadmard[i][k]*a[k][j];    
}    
}    
}    
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
FinalB[i][j]=0;    
for(k=0;k<c;k++)    
{    
FinalB[i][j]+=FinalA[i][k]*HadmardT[k][j];    
}    
}    
} 

//for printing result    
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
printf("%d\t",FinalB[i][j]);    
}    
printf("\n");    
} 
}
if(choose==4)
 {
   
    int len = 0;
    printf("Enter the length of "
           "the sequence: ");
    scanf("%d4", &len);
    
    int xn[len];
    float Xr[len];
    float Xi[len];
    int i, k, n, N = 0;
  
    for (i = 0; i < len; i++) {
  
        printf("Enter the value "
               "of x[%d]: ",
               i);
        scanf("%d", &xn[i]);
    }
  
    printf("Enter the number of "
           "points in the DFT: ");
    scanf("%d", &N);
    for (k = 0; k < N; k++) {
        Xr[k] = 0;
        Xi[k] = 0;
        for (n = 0; n < len; n++) {
            Xr[k]
                = (Xr[k]
                   + xn[n] * cos(2 * 3.141592 * k * n / N));
            Xi[k]
                = (Xi[k]
                   + xn[n] * sin(2 * 3.141592 * k * n / N));
        }
  
        printf("(%f) + j(%f)\n",
               Xr[k], Xi[k]);
    }
 
  

 }
}
 if(choose==5)
{
 int i,j,l,count[50]={0};
 char str[50];

 printf("enter the string:");
 scanf("%s",str);
 printf("\n\tOriginal strig is : %s",str);
 printf("\n\n\tEncoded string is : ");
 l=strlen(str);
 for(i=0;i<l;i++)
 {
     j=0;
     count[i] = 1;
     do{
         j++;
         if(str[i+j]==str[i])
         {
             count[i]++;
         }
         
        }while(str[i+j]==str[i]);
        if(count[i]==1)
        {
            printf("%c",str[i++]);
        }
        else
        {
            printf("$%d%c",count[i],str[i]);
            i+=count[i];
        }
 }getch();
 
}
    
  
return 0;  
}  



