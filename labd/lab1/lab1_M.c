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
double valueS499, valueS500,valueA499, valueA500, valueS0, valueA0;
double mult1 = (XValue/sqrt(1+XValue*XValue));
double loopvalue = XValue;
//MACLAURIN/TAYLOR SERIES
for (int k = 1; k < 501; k++)
{
loopvalue=loopvalue+(pow(-1,k)*pow(XValue,(2*k+1))/((2*k+1)*XValue));
//printf("%lf\n",(pow(-1,k)*pow(XValue,(2*k+1))/((2*k+1)*XValue)));
if (k == 0){valueS0 = loopvalue;valueA0=(pow(-1,k)*pow(XValue,(2*k+1))/((2*k+1)*XValue));}
if (k == 499){valueS499=loopvalue;valueA499=(pow(-1,k)*pow(XValue,(2*k+1))/((2*k+1)*XValue));};
if (k == 500){valueS500=loopvalue;valueA500=(pow(-1,k)*pow(XValue,(2*k+1))/((2*k+1)*XValue));};
}


//output = mult1 * loopvalue;
output=loopvalue;
printf("\nC atan(%lf) = %lf",XValue, atan(XValue));
printf("\na0 = %lf S0 = %lf",XValue, XValue);
printf("\na499 = %lf S499 = %lf",valueA499, valueS499);
printf("\na500 = %lf S500 = %lf",valueA500, valueS500);
printf("\nTaylor atan(%lf) = %f\n",XValue,output);

printf(
"           500                                           \n"
"          -----                                          \n"
"          \\                k     2*k+1                  \n"
"           \\          (-1)  * x                         \n"
"atan(%lf) = >   _______________                          \n"
"           /             (2*k+1)!                        \n"
"          /                                              \n"
"          -----                                          \n"
"           k=0                                           \n"
"                                                         \n"
"                                                         \n"
"                      2                                  \n"
"              (-1) * x                                   \n"
" recurrent: ______________                               \n"
"               (k*k+1)!                                  \n"
"                                                         \n"
"                                                         \n",XValue
);
}