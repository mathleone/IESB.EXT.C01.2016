#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Fila{
	int inicial, final;
	int elementos[10];
	int tamanho;
};
void initFila(struct Fila *f){
	f->inicial = f->final = 0;
	f->tamanho = 10;
}
int isEmpty(struct Fila *f){
	return !(f->inicial - f->final);
}
int isFull(struct Fila *f){
	return ((f->final + 1) % f->tamanho) == f->inicial;
}
int enqueue(struct Fila *f, int elemento){
	if(isFull(f)) return 0;
	f->elementos[(f->final + 1) % f->tamanho] = elemento;
	f->final = (f->final + 1) % f->tamanho;
	return 1;
}
int dequeue(struct Fila *f){
	int n;
	if(isEmpty(f)) return 0;
	n = f->elementos[f->inicial];
	f->inicial = (f->inicial + 1)%f->tamanho;
	return n;
}
int peek(struct Fila *f){
	return f->elementos[f->inicial];
}
int main(){
	srand( time(NULL) );
	struct Fila fila;
	int random = rand()%100;
	initFila(&fila);
	int i;
	for(i=0; i<5; i++){
		if(enqueue(&fila, random))
			printf("%d inserido\n", random);
		random = rand()%100;
	}
	printf("removido %d\n", dequeue(&fila));
	printf("removido %d\n", dequeue(&fila));

	for(i=0; i<3; i++){
                if(enqueue(&fila, random))
                        printf("%d inserido\n", random);
                random = rand()%100;
        }
        printf("removido %d\n", dequeue(&fila));
        printf("removido %d\n", dequeue(&fila));
	for(i=0; i<4; i++){
                if(enqueue(&fila, random))
                        printf("%d inserido\n", random);
                random = rand()%100;
        }
	printf("%d\n", peek(&fila));
	while(!isEmpty(&fila)) printf("removido %d\n", dequeue(&fila));
	return 0;
}
