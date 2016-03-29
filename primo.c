#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]){
	int i = 2, p = atoi(argv[1]);
	clock_t tfinal, tinicial;
	tinicial = clock();
	for(i=2; i!=p; i++){
		if(p%i == 0){
			tfinal = clock();
			printf("%f ms\n", (double)(tfinal - tinicial)/CLOCKS_PER_SEC * 1000);
			return 0;
		}
	}
	tfinal = clock();
	printf("%f ms\n", (double)(tfinal - tinicial)/CLOCKS_PER_SEC * 1000);
	return 1;

/*
inicio:
	if(i == p) return 1;
	else if(p%i == 0) return 0;
	else i++;
	goto inicio;

	return 0;*/
}
