#include <stdio.h>
#include <string.h>

int main()
{
    char arr[5];
    char temp;
    int repeatcount[5] = {0, 0, 0, 0, 0}; // count repeats
    int duplicates[5] = {0, 0, 0, 0, 0};
    printf("\nInput five characters:\n");
    scanf("%c %c %c %c %c", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]); // Scan for chars
    getchar();                                                            // exclude enter


    // sorting loops
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

    // count and mark duplicates
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
    printf("\nSORTED CHAR: %c,%c,%c,%c,%c",arr[0],arr[1],arr[2],arr[3],arr[4]);
    printf("\nSORTED INT: %d,%d,%d,%d,%d",arr[0],arr[1],arr[2],arr[3],arr[4]);
    printf("\nMIN:%c", arr[0]);
    printf("\nMAX:%c", arr[4]);
    printf("\nAVG:%c (INT:%d)", ((arr[0] + arr[1] + arr[2] + arr[3] + arr[4]) / 5), ((arr[0] + arr[1] + arr[2] + arr[3] + arr[4]) / 5));
    printf("\nMEDIAN:%c", arr[2]);
 //  output duplicate info

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
}
