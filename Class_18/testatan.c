#include<stdio.h>
#include<math.h>

int main(){
double a=-0.5,b=0.9,x,delta_x=1.e-3/*0.001*/,funkca,funkcb,funkcx;
int k=0;

funkca=atan(a);funkcb=atan(b);
if(funkca*funkcb>0){
printf("Intervaalaa[%.2f;%.2f]atan(x)funkcijai",a,b);
printf("saknju nav (vai taajaa ir paaru saknju skaits)\n");
return 1;}

printf("atan(%7.3f)=%7.3f\t\t\t\t",a,atan(a));
printf("atan(%7.3f)=%7.3f\n",b,atan(b));

while((b-a)>delta_x){
k++;//k=k+1;//k+=1;
x=(a+b)/2.;
if(funkca*atan(x)>0)//piea=0−>funkca=0−>reizinaajumsirpreciizi0
//visulaiku->visulaika"straadaa"b=x
a=x;
else
b=x;
printf("%2d. iteraacija:atan(%7.3f)=%7.3f\t",k,a,atan(a));
printf("atan(%7.3f)=%7.3f\t",x,atan(x));
printf("atan(%7.3f)=%7.3f\n",b,atan(b));}

printf("Saakne atrodas piex=%.3f,jo atan(x)ir%.3f\n",x,atan(x));

return 0;}