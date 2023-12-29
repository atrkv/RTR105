# Laboratorijas darbs 3: Derivative

![test](https://github.com/atrkv/RTR105/blob/main/labd/lab3/derivative.png)

## atan_derivative.c
Izmantojot sekojošās formulas, uzrakstījām kodu, kurš izraksta ```x```, ```atan(x)```, ```atan(x)'```, un ```atan(x)''``` vērtības izmantojot divas atvasināšanas metodes:

![test1](https://github.com/atrkv/RTR105/blob/main/labd/lab3/junk/1.PNG)

```c
while(x<b){
printf("%10.2f\t%10.2f\t%10.2f\t",x,atan(x),(atan(x+delta_x)-atan(x))/delta_x);
printf("%10.2f\t",((atan(x+delta_x+delta_x)-atan(x+delta_x)-(atan(x+delta_x)-atan(x)))/delta_x)/delta_x);
printf("%10.2f\t%10.2f\n",1/(x*x+1),-2*x/((x*x+1)*(x*x+1)));
x+=delta_x;
}
```
Vēlāk kods tika izmainīts (V2), šoreiz saglabājot datus massīvos, nevis parasti izrakstot tos terminālā, kā arī masīvi izmantoja datus iepriekš ierakstītus citos masīvos. Piemēram, aprēķinos vairs nav izmantots ```delta_x```, bet tas tiek aprēķināts no ```x``` un iepriekšējās ```x``` vērtības.

```c
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
```

## derivative.dat
Izmantojot ```>>``` operatoru linux sistēmā, ierakstījām atan_derivative.c izejas datus failā derivative.dat:

```
      0.00	      0.00	      1.00	     -0.02	      1.00	     -0.00
      0.01	      0.01	      1.00	     -0.04	      1.00	     -0.02
      0.02	      0.02	      1.00	     -0.06	      1.00	     -0.04
      0.03	      0.03	      1.00	     -0.08	      1.00	     -0.06
      0.04	      0.04	      1.00	     -0.10	      1.00	     -0.08
      0.05	      0.05	      1.00	     -0.12	      1.00	     -0.10
      0.06	      0.06	      1.00	     -0.14	      1.00	     -0.12
      0.07	      0.07	      0.99	     -0.16	      1.00	     -0.14
      0.08	      0.08	      0.99	     -0.18	      0.99	     -0.16
...
```
## derivative.gp
derivative.gp ir gnuplot kods, kurš attēlo ```atan(x)``` funkcijas kā arī punktus ierakstītus derivative.dat failā lai izpildīto darbu varētu pārbaudīt. Redzot, ka ```atan(x)``` funkcija un tās dažādas atvasināšanas pārklājas, var secināt, ka darbs ir izpildīts.   

```gnuplot
plot [0:2*pi] (1/(x*x+1)),\
              atan(x),\
              "derivative.dat" every ::1 using 1:2 with lines title "atan(x)", \
              "derivative.dat" every ::1 using 1:3 with lines title "atan'(x) (finite difference)",\
              "derivative.dat" every ::1 using 1:3 with lines title "atan''(x) (finite difference)",\
              "derivative.dat" every ::1 using 1:4 with lines title "atan'(x) (quotient)",\
              "derivative.dat" every ::1 using 1:5 with lines title "atan''(x) (quotient)"
```
