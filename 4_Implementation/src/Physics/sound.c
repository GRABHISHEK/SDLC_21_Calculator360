#include<stdio.h>
void SoundFormulas()
{
int n;
while(1)
{
printf("Welcome to Sound Formulae\nchoose one:\n1.speed of sound\n2.Doppler effect in sound\n3.Intensity of sound\n4.Wave length of sound\n0.Quit\n");
scanf("%d",&n);
if (n==0 || n>4)
{
if (n==0)
{
printf("Thank You");
break;			
}
else
{
printf("Wrong Input");
break;
}
}
else if(n==1)
{
printf("Enter the Frequency and Wavelength\n");
int f,w;
scanf("%d%d",&f,&w);
printf("Speed of Sound is:%d\n",f*w);
}
else if(n==2)
{
int v,u,w,f,ans;
printf("Enter the speed of sound waves\n");
scanf("%d",&v);
printf("Enter the observer velocity\n");
scanf("%d",&u);
printf("Enter the source velocity\n");
scanf("%d",&w);
printf("Enter the actual frequency of sound waves\n");
scanf("%d",&f);
ans=(v+u)/(v+w);
ans=ans*f;
printf("observer frequency of sound:%d\n",ans);
}
else if(n==4)
{
printf("Enter the Frequency and speed of sound\n");
int f,w;
scanf("%d%d",&f,&w);
printf("Wavelength is:%d\n",w/f);
}
else if(n==3)
{
int f,a,d,s;
float ans;
printf("Enter the frequency of sound\n");
scanf("%d",&f);
printf("Enter the amplitude of the sound wave\n");
scanf("%d",&a);
printf("Enter the density of medium in which sound is traveling\n");
scanf("%d",&d);
printf("Enter the speed of sound\n");
scanf("%d",&s);
float pi=3.14;
ans=2*(pi*pi)*(f*f)*(a*a)*d*s;
printf("Intensity of sound is:%f\n",ans);
}
}
}