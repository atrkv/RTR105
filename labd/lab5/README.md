# Laboratorijas darbs 5: Statistics
## lab5.c

Šī kods ļauj sakārtot piecus simbolus augošā secībā (Izmantojot to ASCII vērtības), atrast minimumu, maksimumu, mediānu, vidējo vērtību, kā arī modas (ja tādas ir).  

Kompilējot un palaižot kodu, lietotājam ir prasīts ievadīt piecus simbolus, kuri tiek ierakstīti massīvā ```arr[5]```.

Kodā ir definēti trīs massīvi:  
```arr[5]``` - saglabā lietotāja simbolus,  
``repeatcount[5]`` - saglabā simbolu atkārtošanas skaitu,  
``duplicates[5]`` - atzīmē ```arr[]``` simbolus kā "duplikātus".

Sortēšanas algoritms:  
``` c
    for (int n = 0; n < 5; n++) // repeats second loop five times
    {
        for (int k = 0; k < 5; k++) // iterates through the array, switching items places if need be
        {
            if (arr[k] > arr[k + 1])
            {
                temp = arr[k + 1];
                arr[k + 1] = arr[k];
                arr[k] = temp;
            }
        }
    }
```
Kods salīdzina ```arr[k]``` simbolu ar ```arr[k+1]``` simbolu un maina tos vietām, ja simbola ```arr[k]``` ASCII vērtība ir lielāka par ```arr[k+1]``` simbola vērtību.  
Šī salīdzināšana atkārtojās 5 reizes, pēc kā sanāk, ka massīva ```arr[]``` katra nākamā simbola vērtība ir vairāk par iepriekšo.  

Pēc šī operācijas jau var atrast minimumu, maksimumu, mediānu un vidējo vērtību:
``` c
    printf("\nSORTED CHAR: %c,%c,%c,%c,%c",arr[0],arr[1],arr[2],arr[3],arr[4]);
    printf("\nSORTED INT: %d,%d,%d,%d,%d",arr[0],arr[1],arr[2],arr[3],arr[4]);
    printf("\nMIN:%c", arr[0]);
    printf("\nMAX:%c", arr[4]);
    printf("\nAVG:%c (INT:%d)", ((arr[0] + arr[1] + arr[2] + arr[3] + arr[4]) / 5), ((arr[0] + arr[1] + arr[2] + arr[3] + arr[4]) / 5));
    printf("\nMEDIAN:%c", arr[2]);
```
Paliek pārbaudīt, vai rindā eksistē modas (atkārtojumui):  
``` c
    for (int n = 0; n < 5; n++)
    {
        if (duplicates[n] == 0)
        {
            for (int k = 0; k < 5; k++)
            {
                if (arr[n] == arr[k])
                {
                    repeatcount[n]++;
                    duplicates[k] = 1; // marks k-th object as a duplicate to be skipped
                }
            }
        }
    }
```
Kods salīdzina katru ```arr[n]``` un ```arr[k]``` vērtību.  
Ja vērtības ir vienādas, kods palielina ```n``` simbola "atkārtošanas skaitu" (```repeatcount[n]++```), kā arī atzīmē ```k``` simbolu kā "duplikātu" (```duplicates[k] = 1```), lai turpmākās iterācijas to ignorētu.  
Pēc šī darbības, massīvā ```repeatcount[]``` ir ierakstīti massīva ```arr[]``` simbolu atkārtošanas skaiti:  
```1```, ja simbols neatkārtojās,  
```>1```, ja simbols atkārtojās,  
```0```, ja simbols ir kāda iepriekšējā simbola duplikāts.  

Tas ļauj attēlot modu:
``` c
    if (repeatcount[1] == 1 && repeatcount[1] == 1 && repeatcount[2] == 1 && repeatcount[3] == 1 && repeatcount[4] == 1)
    {
        printf("\nNo repeats");
    }
    else
    {
        printf("\n\nRepeats:");

        for (int n = 0; n < 5; n++)
        {
            if (repeatcount[n] > 1)
            {
                printf("\n%c: %d", arr[n], repeatcount[n]);
            }
        }
    }
```
# Lietošanas piemērs:
Input:   
```aa781```

Output:  
```
SORTED CHAR: 1,7,8,a,a
SORTED INT: 49,55,56,97,97
MIN:1
MAX:a
AVG:F (INT:70)
MEDIAN:8

Repeats:
a: 2
```


