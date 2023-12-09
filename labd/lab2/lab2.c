#include<stdio.h>
#include<math.h>
//delta_x=1.e-3
int main(){
double a,b,x,c,delta_x/*0.001*/,funkca,funkcb,funkcx;
int k=0;
float precizitate;
printf("\nIevadiet veertiibu a:");
scanf("%lf",&a);
getchar();

//printf("%lf",(1/(10^precizitate)));

printf("\nIevadiet veertiibu b:");
scanf("%lf",&b);
getchar();

printf("\nIevadiet veertiibu c:");
scanf("%lf",&c);
getchar();

printf("\nRezultaata precizitaate? (Cip. peec . skaits):");
scanf("%f",&precizitate);
getchar();
//printf("%lf",(1/(pow(10,precizitate))));
printf("\n");

delta_x = (1/pow(10,precizitate));

funkca=atan(a)-c;funkcb=atan(b)-c;
if(funkca*funkcb>0){
printf("Intervala[%.2f;%.2f]atan(x)funkcijai",a,b);
printf("sakņu nav (vai tajaa ir pāru sakņu skaits)\n");
return 1;}

printf("atan(%7.3f)+%f=%7.3f\t\t\t\t",a,c,atan(a)-c);
printf("atan(%7.3f)+%f=%7.3f\n",b,atan(b)-c);

while((b-a)>delta_x){
k++;//k=k+1;//k+=1;
x=(a+b)/2.;
if(funkca*(atan(x)-c)>0)//piea=0−>funkca=0−>reizinaajumsirpreciizi0
//visulaiku->visulaika"straadaa"b=x
a=x;
else
b=x;
printf("%2d. iteraacija:atan(%7.3f)+%f=%7.3f\t",k,a,c,atan(a)-c);
printf("atan(%7.3f)+%f=%7.3f\t",x,c,atan(x)-c);
printf("atan(%7.3f)+%f=%7.3f\n",b,c,atan(b)-c);}

printf("Sakne atrodas pie x=%.3f,jo atan(x)+%fir%.3f\n",x*-1,c,atan(x)-c);
printf("\nRezultaats ieguuts %d iteraacijaas\n",k);

return 0;}