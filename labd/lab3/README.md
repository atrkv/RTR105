# Laboratorijas darbs 3: Derivative

![test](https://github.com/atrkv/RTR105/blob/main/labd/lab3/derivative.png)

## C kods
Izmantojot sekojošās formulas, uzrakstījām kodu, kurš izraksta x, atan(x), atan(x)', un atan(x)'' vērtības (izmantojot divas atvasināšanas metodes):

![test1](https://github.com/atrkv/RTR105/blob/main/labd/lab3/junk/1.PNG)

```c
while(x<b){
printf("%10.2f\t%10.2f\t%10.2f\t",x,atan(x),(atan(x+delta_x)-atan(x))/delta_x);
printf("%10.2f\t",((atan(x+delta_x+delta_x)-atan(x+delta_x)-(atan(x+delta_x)-atan(x)))/delta_x)/delta_x);
printf("%10.2f\t%10.2f\n",1/(x*x+1),-2*x/((x*x+1)*(x*x+1)));
x+=delta_x;
}
```
