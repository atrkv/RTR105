#include<stdio.h>
#include<math.h>

float a,x,delta_x,b,y,A;

float modified_atan(floatx,floatA){
return atan(x)-A;}

void main(){
//float a,x,delta_x,b,y,A;
a=-0.5;
b=0.7;

printf("Cien.liet.,luudzu,ievadi A veertiibu sekojoshamv ienaadojumam: " "atan(x)=A\n");
scanf("%f",&A);
x=a;
delta_x=0.1;
printf("\tx\ty\n");
while(x<b)
{
printf("%10.1f%10.1f\n",x,modified_atan(x,A));

x+=delta_x;
};
}