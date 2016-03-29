#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Pilha{
	int quant;
	int elementos[20];
	int tamanho;
};
void initPilha(struct Pilha *p){
	p->quant = 0;
	p->tamanho = 20;
}
int isEmpty(struct Pilha *p){
	return !p->quant;
}
int isFull(struct Pilha *p){
	return (p->tamanho == p->quant);
}
int push(struct Pilha *p, int elemento){
	if(isFull(p)) return 0;
	p->elementos[p->quant] = elemento;
	p->quant ++;
	return 1;
}
int pop(struct Pilha *p){
	if(isEmpty(p)) return 0;
	return p->elementos[--p->quant];
}
int peek(struct Pilha *p){
	return p->elementos[p->quant-1];
}
int main(){
	srand( time(NULL) );
	struct Pilha pilha;
	int random = rand()%100;
	initPilha(&pilha);
	while(!isFull(&pilha)){
		if(push(&pilha, random))
			printf("%d inserido\t", random);
		random = rand()%100;
	}
	if(push(&pilha, 12)) printf("elemento inserido\n");
	pop(&pilha);
	while(!isEmpty(&pilha)) printf("%d\t", pop(&pilha));
	return 0;
}
