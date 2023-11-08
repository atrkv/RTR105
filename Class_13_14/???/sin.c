#include <stdio.h>
#include <math.h>
void main(){
double x=2.05,y,a0,a1,a2,a3,S0,S1,S2,S3;

y=sin(x);

printf("y=sin(%.2f)=%.2f\n",x,y);

a0 = pow(-1,0)*pow(x,2*0+1)/(1.);
S0 = a0;
printf("%.2f\t%8.2f\t%8.2f\n",x,a0,S0);

}
