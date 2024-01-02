#include <stdio.h>
#include <string.h>

int main()
{
    char arr[5];
    char temp;
    int repeat0 = 0,repeat1 = 0,repeat2 = 0,repeat3 = 0,repeat4 = 0;
    printf("\nInput five characters:\n");
    scanf("%c %c %c %c %c", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]); // Scan for chars
    getchar();                                                            // exclude enter

    printf("\n%c,%c,%c,%c,%c", arr[0], arr[1], arr[2], arr[3], arr[4]);

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
    // printf("\n%c,%c,%c,%c,%c", arr[0], arr[1], arr[2], arr[3], arr[4]);

//count duplicates
    for (int n = 0; n < 4; n++)
    {
        for (int k = n+1; k < 5; k++)
        {
            if (arr[n] == arr[k])
            {
                  if (n = 0)
                {
                    repeat0++;
                }
                    if (n = 1)
                {
                    repeat1++;
                }
                    if (n = 2)
                {
                    repeat2++;
                }
                 if (n = 3)
                {
                    repeat3++;
                }
                 if (n = 4)
                {
                    repeat4++;
                }
            }
        }
    }

    printf("\nMIN:%c", arr[0]);
    printf("\nMAX:%c", arr[4]);
    printf("\nAVG:%c (INT:%d)", ((arr[0] + arr[1] + arr[2] + arr[3] + arr[4]) / 5), ((arr[0] + arr[1] + arr[2] + arr[3] + arr[4]) / 5));
    printf("\nMEDIAN:%c", arr[2]);

        if (repeat0==0&&repeat1==0&&repeat2==0&&repeat3==0&&repeat4==0)
        {
            printf("\nNo repeats");
        } else(printf("\nYes repeats"));

    printf("\n%d,%d,%d,%d,%d",repeat0,repeat1,repeat2,repeat3,repeat4);
}