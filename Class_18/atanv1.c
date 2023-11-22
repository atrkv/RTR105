#include<stdio.h>
#include<math.h>
//delta_x=1.e-3
int main(){
double a,b,x,c,delta_x=0.1/*0.001*/,funkca,funkcb,funkcx;
int k=0;
int precizitate;
printf("\nIevadiet vērtību a:");
scanf("%lf",&a);
getchar();

//printf("%lf",(1/(10^precizitate)));

printf("\nIevadiet vērtību b:");
scanf("%lf",&b);
getchar();

printf("\nRezultāta precizitāte? (Cip. pēc . skaits):");
scanf("%d",&precizitate);
getchar();
//printf("%lf",(1/(pow(10,precizitate))));
printf("\n");

delta_x = (1/pow(10,precizitate));

funkca=atan(a);funkcb=atan(b);
if(funkca*funkcb>0){
printf("Intervālā[%.2f;%.2f]atan(x)funkcijai",a,b);
printf("sakņu nav (vai tajā ir pāru sakņu skaits)\n");
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
printf("%2d. iterācija:atan(%7.3f)=%7.3f\t",k,a,atan(a));
printf("atan(%7.3f)=%7.3f\t",x,atan(x));
printf("atan(%7.3f)=%7.3f\n",b,atan(b));}

printf("Sakne atrodas pie x=%.3f,jo atan(x)ir%.3f\n",x,atan(x));
return 0;}