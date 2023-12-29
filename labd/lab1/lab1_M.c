#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){

double XValue;
double output;
printf("\nEnter the value for X between -1 and 1:");
scanf("%lf",&XValue);
getchar();

if (XValue < (-1) || XValue > (1)){
    printf("\nInvalid value");
    return 1;
}

//printf("\n%lf",XValue);
double valueS499, valueS500,valueA499, valueA500, valueS0, valueA0;
double mult1 = (XValue/sqrt(1+XValue*XValue));
double loopvalue = XValue;
//MACLAURIN/TAYLOR SERIES
for (int k = 1; k < 501; k++)
{
//loopvalue=loopvalue+(pow(-1,k)*pow(XValue,(2*k+1))/((2*k+1)*XValue));
loopvalue=loopvalue+(pow(-1,k)*pow(XValue,(2*k+1))/((2*k+1)));
//printf("%lf\n",(pow(-1,k)*pow(XValue,(2*k+1))/((2*k+1)*XValue)));
if (k == 0){valueS0 = loopvalue;valueA0=(pow(-1,k)*pow(XValue,(2*k+1))/((2*k+1)));}
if (k == 499){valueS499=loopvalue;valueA499=(pow(-1,k)*pow(XValue,(2*k+1))/((2*k+1)));};
if (k == 500){valueS500=loopvalue;valueA500=(pow(-1,k)*pow(XValue,(2*k+1))/((2*k+1)));};
}


//output = mult1 * loopvalue;
output=loopvalue;
printf("\nC atan(%lf) = %lf",XValue, atan(XValue));
printf("\na0 = %lf      \tS0 = %lf",XValue, XValue);
printf("\na499 = %lf    \tS499 = %lf",valueA499, valueS499);
printf("\na500 = %lf    \tS500 = %lf",valueA500, valueS500);
printf("\nTaylor atan(%lf) = %f\n\n",XValue,output);

printf(
"           500                                           \n"
"          -----                                          \n"
"          \\                k     -1-2k                  \n"
"           \\          (-1)  * x                         \n"
"atan(%lf) = >   _______________                          \n"
"           /             1+2k                            \n"
"          /                                              \n"
"          -----                                          \n"
"           k=0                                           \n"
"                                                         \n"
"                                                         \n"
"                  k    -1-2k                             \n"
"              (-1) * x                                   \n"
" recurrent: ______________                               \n"
"               1+2k                                      \n"
"                                                         \n"
"                                                         \n",XValue
);
}
