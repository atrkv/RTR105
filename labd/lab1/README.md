# Laboratorijas darbs 1: series

## lab1_M.c

Šī kods izmanto Tailora/Maklaurena rindu lai aptuveni aprēķinātu funkcijas ```y = atan(x)``` vērtību kādā ```x``` punktā.  

Kompilējot un palaižot kodu, lietotājam ir prasīts ievadīt ```x``` vērtību starp ```-1``` un ```1```, pēc kā ievadītā ```x``` vērtība tiek izmantota aprēķinos.  

Izmantotā formula: 
```c
"           500                                           "
"          -----                                          "
"          \\                k     -1-2k                  "
"           \\          (-1)  * x                         "
"atan(x) = >   _______________                            "
"           /             1+2k                            "
"          /                                              "
"          -----                                          "
"           k=0                                           "
"                                                         "
```

Šī formula ir izmantota ciklā, kurš atkārtojās 500 reizes, lai iegūtu apmierinoši precīzu rezultātu.

``` c
double loopvalue = XValue;
//MACLAURIN/TAYLOR SERIES
for (int k = 1; k < 501; k++)
{
loopvalue = loopvalue+(pow(-1,k)*pow(XValue,(2*k+1))/((2*k+1)));
}

output = loopvalue;
```

Piemērs:  
```x = 0.9276```  

Koda rezultāts:  
```
C atan(0.927600) = 0.747856
Taylor atan(0.927600) = 0.747856
```
Kods izrāda arī precīzu ```atan(x)``` vērtību izmantojot iekļautu ```math.h``` bibliotēkā formulu, kas ļauj salīdzināt rezultātus.
