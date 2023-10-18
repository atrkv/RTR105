#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generate(void);

int main() {

char i=1;
int flag = 1, counter = 0;
int seed = time(NULL);
srand(seed);

while(flag){
	//printf("i = %d\n",i++);
	counter++;
	flag = rand();
}

printf("i = %d (p)",i);
printf("counter = %d (p)",counter);

return 0;
}
