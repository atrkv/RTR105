#include<stdio.h>
#include<math.h>

float a,x,delta_x,b,y,A;

float modified_sin(floatx,floatA){
return sin(x)-A;}

void main(){
//float a,x,delta_x,b,y,A;
a=0;
b=2*M_PI;

printf("Cien.liet.,luudzu,ievadiAveertiibusekojoshamvienaadojumam: " "sin(x)=A\n");
scanf("%f",&A);
x=a;
delta_x=0.1;
printf("\tx\ty\n");
while(x<b)
{
printf("%10.1f%10.1f\n",x,modified_sin(x,A));

x+=delta_x;
};
}