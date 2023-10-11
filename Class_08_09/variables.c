#include <stdio.h>

int main(void){
	int i; //diskrētā mainīgā deklarēšana - noteikta izmēra (atbilstoši datu tipam
		//int => 4 byte
		//sasaistīšana ar norādīto identifikatoru
		//NB! vērtība nav zināma
printf("i mainīgā izmērs baitos: %ld\n",sizeof(i));
printf("i mainīgā atrašanas vieta atmiņā (adrese jeb norāde): %p\n",&i);
printf("i mainīgā vērtība uzreiz bēc deklarēšanas (simbols): %c\n",i);
printf("i mainīgā vērtība uzreiz bēc deklarēšanas (dec): %d\n",i);
printf("i mainīgā vērtība uzreiz bēc deklarēšanas (oct): %#o\n",i);
printf("i mainīgā vērtība uzreiz bēc deklarēšanas (hex): %#x\n",i);
printf("i mainīgā vērtība uzreiz bēc deklarēšanas (real*): %f\n",i);
printf("i mainīgā vērtība uzreiz bēc deklarēšanas (real*): %e\n",i);
printf("/n");

// mainīgā "loma" ir mainīties un saglabāt kādu mūms noderīgu vērtību
i=25;	// visbiezāk mainīgā vērtības maiņai mēs pielietošim piešķiršanas operāciju
	// lielums (vērtība), kas tiek sarēķināta (sagatavota) pa labi
	// tiek ierakstīta atmiņas apgabalā, uiz kuru norāda identifikators pa kreisi

printf("i mainīgā izmērs baitos: %ld\n",sizeof(i));
printf("i mainīgā atrašanas vieta atmiņā (adrese jeb norāde): %p\n",&i);
printf("i mainīgā vērtība uzreiz bēc deklarēšanas (simbols*): %c\n",i);
printf("i mainīgā vērtība uzreiz bēc deklarēšanas (dec): %d\n",i);
printf("i mainīgā vērtība uzreiz bēc deklarēšanas (oct): %#o\n",i);
printf("i mainīgā vērtība uzreiz bēc deklarēšanas (hex): %#x\n",i);
printf("i mainīgā vērtība uzreiz bēc deklarēšanas (real*): %f\n",i);
printf("i mainīgā vērtība uzreiz bēc deklarēšanas (real*): %e\n",i);
printf("/n");

return 0;


}

