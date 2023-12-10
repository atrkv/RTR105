# Laboratorijas darbs 3: Derivative

![test](https://github.com/atrkv/RTR105/blob/main/labd/lab3/derivative.png)

## atan_derivative.c
Izmantojot sekojošās formulas, uzrakstījām kodu, kurš izraksta x, atan(x), atan(x)', un atan(x)'' vērtības izmantojot divas atvasināšanas metodes:

![test1](https://github.com/atrkv/RTR105/blob/main/labd/lab3/junk/1.PNG)

```c
while(x<b){
printf("%10.2f\t%10.2f\t%10.2f\t",x,atan(x),(atan(x+delta_x)-atan(x))/delta_x);
printf("%10.2f\t",((atan(x+delta_x+delta_x)-atan(x+delta_x)-(atan(x+delta_x)-atan(x)))/delta_x)/delta_x);
printf("%10.2f\t%10.2f\n",1/(x*x+1),-2*x/((x*x+1)*(x*x+1)));
x+=delta_x;
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
derivative.gp ir gnuplot kods, kurš attēlo atan(x) funkcijas kā arī punktus ierakstītus derivative.dat failā lai izpildīto darbu varētu pārbaudīt. Redzot, ka atan(x) funkcija un tās dažādas atvasināšanas pārklājas, var secināt, ka darbs ir izpildīts.   
