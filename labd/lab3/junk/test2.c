#undef  _STRICT_ANSI_

#include<stdio.h>
#include<math.h>

void main(){
FILE * pFile;

float a=0.,b=2*M_PI,x,delta_x=1.e-2;
//float y;
//printf("\tx\t\tatan(x)\tatan\'(x)\tatan\'\'(x)\tatan\'(x)a\tatan\'\'(x)a\n");
x=a;
while(x<b){
//y=sin(x);
printf("%10.2f\t%10.2f\t%10.2f\t",x,atan(x),(atan(x+delta_x)-atan(x))/delta_x);//atan + skaitliskais atan'
printf("%10.2f\t",((atan(x+delta_x+delta_x)-atan(x+delta_x)-(atan(x+delta_x)-atan(x)))/delta_x)/delta_x);//skaitlidskais atan''
printf("%10.2f\t%10.2f\n",1/(x*x+1),-2*x/((x*x+1)*(x*x+1)));//+wolfram alpha
x+=delta_x;//x=x+delta_x;
}
}