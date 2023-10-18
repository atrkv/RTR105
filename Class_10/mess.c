//#include <stdio.h>

//int main() {

//char val = A;

//printf("%d",val);

//return 0;
//}
#include <stdio.h>

int main() {
    // creating a loop iterating from 0 to 126
    for (char i = 0; i <= 126; i++) {
        printf("The ASCII value of %c is %d \n", i, i);
    }

    return 0;
}

