#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){

double XValue;
double output;
printf("\nEnter the value for X:");
scanf("%lf",&XValue);
getchar();

//printf("\n%lf",XValue);

double mult1 = (XValue/sqrt(1+XValue*XValue));
double loopvalue = 0;
for (int k = 0; k < 501; k++)
{

loopvalue=loopvalue+((pow(-1,k)*pow(XValue,-1-2*k))/1+2*k);

 }
printf("\n%lf",M_PI/2);
printf("\n%lf",loopvalue);
output = (mult1 * loopvalue);

printf("\n%f",output);
printf("\n%lf", atan(XValue));
    
}