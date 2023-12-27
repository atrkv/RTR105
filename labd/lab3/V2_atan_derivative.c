#undef  _STRICT_ANSI_

#include<stdio.h>
#include<math.h>

void main(){
float a=0.,b=2*M_PI,x,delta_x=1.e-2;

float xarr[1000],atanx[1000],atandx[1000],atanddxx[1000],atandxa[1000],atanddxxa[1000];//declare arrays
//float y;
printf("\tx\t\tatan(x)\tatan\'(x)\tatan\'\'(x)\tatan\'(x)a\tatan\'\'(x)a\n");
x=a;
int n=1;
while(x<b){
    //fill arrays
xarr[n] = x;
atanx[n] = atan(xarr[n]);
atandx[n] = ((atanx[n]-atanx[n-1])/(xarr[n]-xarr[n-1]));
atanddxx[n] = (((atanx[n]-atanx[n-1])-(atanx[n-1]-atanx[n-2]))/(xarr[n]-xarr[n-1]))/(xarr[n]-xarr[n-1]);
atandxa[n] = (1/(xarr[n]*xarr[n]+1));
atanddxxa[n] = (-2*xarr[n]/((xarr[n]*xarr[n]+1)*(xarr[n]*xarr[n]+1)));

printf("\n%10.2f\t%10.2f\t%10.2f\t%10.2f\t%10.2f\t%10.2f",xarr[n],atanx[n],atandx[n],atanddxx[n],atandxa[n],atanddxxa[n]);
x+=delta_x;
n++;
}
}
