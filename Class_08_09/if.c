#include <stdio.h>
#define N 10

int main(void){

	int i = 0;
	printf("i minīgā sākuma vērtība: %d\n",i);
	

	while(i<=N) {
	i = i + 1;
	if(i<=N)

	{
	printf("i minīgā nākamā vērtība: %d (un tā ir mazāk par %d)\n",i,N);
	}
	else
	{
	printf("i mainīgā nākamā vērtība ir kļuvusi lielāka par %d\n",N);
	printf("Viss, skaitīšanu apturam!\n");
	}}

return 0;
}
