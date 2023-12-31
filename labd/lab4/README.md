# Laboratorijas darbs 4: Integral
## lab4_1.c

Šī kods ļauj aprēķināt platumu zem ```atan(x)``` funkcijas, no ```a``` līdz ```b``` koordinātas.

Kompilējot un palaižot šo kodu, lietotājam dota iespēja ievadīt ```a``` un ```b``` vērtības, kā arī vēlamo atbildes precizitāti.  
```a``` ir aprēķinu kreisā robeža,  
```b``` ir aprēķinu labā robeža,  
atbildes precizitāte ir ciparu skaits pēc "." atbildē.  

Pēc datu ievadīšanas, kods aprēķinās platumu zem ```atan(x)``` funkcijas izmantojot trīs dažādas metodes: Taisnstūru, Trapeciju un Simpsona metodi.  
Šī metodes sadala intervālu no ```a``` līdz ```b``` uz ```n``` daļām. Jo lielāks ir daļu (```n```) skaits, jo precizāka ir atbilde.īd
Kods atkārto apreķinus palielinot ```n``` skaitu, pēc katras iterācijas salīdzinot iegūto rezultātu ar iepriekšejo. Kods turpina iterēt un meklēt precīzāku atbildi līdz tam brīdim, ka starpība starp rezultātu un iepriekšējo rezultātu apmierina lietotāja vēlamo atbildes precizitāti.

Piemērs:  
```a = 0```,  
```b = 10```,  
```precizitāte = 3```.

Taisnstūru metode:  
``` c
    integr2 = (b - a) * (atan(a) + atan(b)) / n; 
    n = 1;
    while (fabs(integr2 - integr1) > eps)
    {
        n *= 2;
        h = (b - a) / n;
        integr1 = integr2;
        integr2 = 0.;
        for (k = 0; k < n; k++)
        {
            integr2 += h * atan(a + (k + 0.5) * h);
         
        }
    }

     printf("\nIntegraalja (Taisnstuura) veertiba: %.2f\n", integr2);
```

Trapeces metode:  
``` c
n=2;
loopvalue=0;
integr2 = ((b - a)/4) * (atan(a) + atan(b));
n = 1;
 while (fabs(integr2 - integr1) > eps)
    {
        n *= 2;
        h = (b - a) / n;
        integr1 = integr2;
        integr2 = 0.;
        loopvalue=0;
        for (k = 1; k < n; k++)
        {
           loopvalue=loopvalue+(2*atan(a+(k*h)));
        }

integr2=(h/2)*(atan(a)+loopvalue+atan(b));
    }
printf("\nIntegraalja (trapece) veertiba: %.2f\n", integr2);
```

Simpsona metode:
``` c
n=2;
loopvalue=0;
integr2 = ((b - a)/6) * (atan(a) + atan(b));
n = 1;
while (fabs(integr2 - integr1) > eps)
    {
        n *= 2;
        h = (b - a) / n;
        integr1 = integr2;
        integr2 = 0.;
        loopvalue=0;
        for (k = 1; k < n; k++)
        {
            if(k%2==0){
           loopvalue=loopvalue+(4*atan(a+(k*h)));     
            }
            else{
           loopvalue=loopvalue+(2*atan(a+(k*h)));
            }
        }

integr2=(h/3)*(atan(a)+loopvalue+atan(b));
    }

    printf("\nIntegraalja (Simpson) veertiba: %.2f\n", integr2);
```

Koda izeja:
```
Integraalja (Taisnstuura) veertiba: 12.40

Integraalja (trapece) veertiba: 12.40

Integraalja (Simpson) veertiba: 12.40
```

