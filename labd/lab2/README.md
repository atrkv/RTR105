# Laboratorijas darbs 2: Roots

![test](https://github.com/atrkv/RTR105/blob/main/labd/lab2/atan-05.png)
```y = atan(x) - 0.5``` funkcijas grafiks ar atzīmētu y = 0
## lab2.c
Šī kods ļauj atrast vertikāli nobīdītās atan(x) funkcijas y=0 punkta x koordinātu.

Kompilējot un palaižot kodu, lietotājam ir dota iespēja ievadīt ```a```,```b``` un ```c``` vērtības.

```a``` ir funkcijas kreisā robeža,
```b``` ir funkcijas labā robeža,
```c``` ir funkcijas vertikālā nobīde.

Pēc datu ievadīšanas kods pārbaudīs, vai ```y = 0``` var eksistēt starp ```a``` un ```b``` robežām, aprēķinot un pārbaudot, vai ```atan(a)+c``` un ```atan(b)+c``` ir vienādās zīmes. Ja ```(atan(a)+c) * (atan(b)+c) > 0``` tad abas vērtības atrodas vai nu zem vai nu virs "nulles", kas nozīmē, ka ```y = 0``` starp tiem neeksistē.
