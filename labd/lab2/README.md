# Laboratorijas darbs 2: Roots

![test](https://github.com/atrkv/RTR105/blob/main/labd/lab2/atan-05.png)
```y = atan(x) - 0.5``` funkcijas grafiks ar atzīmētu y = 0
## lab2.c
Šī kods ļauj atrast vertikāli nobīdītās atan(x) funkcijas y=0 punkta x koordinātu.

Kompilējot un palaižot kodu, lietotājam ir dota iespēja ievadīt ```a```,```b``` un ```c``` vērtības, kā arī vēlāmo atbildes precizitāti.

```a``` ir funkcijas kreisā robeža,  
```b``` ir funkcijas labā robeža,  
```c``` ir funkcijas vertikālā nobīde,  
atbildes precizitāte ir ciparu skaits pēc "." atbildē.  

Pēc datu ievadīšanas kods pārbaudīs, vai ```y = 0``` var eksistēt starp ```a``` un ```b``` robežām, aprēķinot un pārbaudot, vai ```atan(a)+c``` un ```atan(b)+c``` ir vienādās zīmes. Ja ```(atan(a)+c) * (atan(b)+c) > 0``` tad abas vērtības atrodas vai nu zem vai nu virs "nulles", kas nozīmē, ka ```y = 0``` starp tiem neeksistē.

``` c
if(funkca*funkcb>0){
printf("Intervala[%.2f;%.2f]atan(x)funkcijai",a,b);
printf("saknu nav (vai tajaa ir paru saknu skaits)\n");
return 1;}
```

Ja ar vērtībām nav problēmu, kods atradīs ```x``` koordinātu pa vidu starp ```a``` un ```b```, aprēķinās ```atan(x)+c``` vērtību, un atkarībā no vērtības zīmes, nobīdīs ```a``` vai ```b``` vērtību tuvāk nullei, pēc kā tas atkārtos šī darbību līdz ```a``` un ```b``` būs pietiekoši tuvi viens otram un ```x``` vērtība būtu pietiekoši precīza (kā to pieprasīja lietotājs).

``` c
while((b-a)>delta_x){
k++;
x=(a+b)/2.;
if(funkca*(atan(x)-c)>0)
a=x;
else
b=x;
}
```
Piemēram, atradīsim "nulles" vērtību funkcijai ```y = atan(x) - 0.5```.

```a = -3```,  
```b = 3```,  
```c = -0.5```,  
Precizitāte = ```3```;  

Koda izeja:  
```
Sakne atrodas pie x=0.546,jo atan(x)+-0.500000 ir 0.000

Rezultaats ieguuts 13 iteraacijaas
```
Salīdzinot aprēķināto ```x``` vērtību ar grafiku, var secināt ka atbilde ir pareiza.
