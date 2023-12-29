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

``` c
double loopvalue = XValue;
//MACLAURIN/TAYLOR SERIES
for (int k = 1; k < 501; k++)
{
loopvalue = loopvalue+(pow(-1,k)*pow(XValue,(2*k+1))/((2*k+1)));
}

output = loopvalue;
```
