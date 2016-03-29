#include "List.h"
#include <stdlib.h>
#include <stdio.h>

List * newList(){
	List *this = malloc(sizeof(List));
	this->size = 10;
	this->count = 0;
	this->head = this->tail = NULL;
	
	#ifdef DEBUG
		printf("List created\n");
	#endif
	
	return this;
}

int getCount(List *this){
	return this->count;
}

void freeList(List *this){
	if(this->count == 0) 
		free(this), free(this);
	else{
		listnode *iterator = this->head;

		while(iterator!=NULL){
			this->head = iterator->next;
			free(iterator);
			iterator = this->head;
			this->count --;
		}
		free(this), free(this);
	}
	
	#ifdef DEBUG
		printf("List freed\n");
	#endif
}

char appendList(List *this, void *data){
	listnode *newL = malloc(sizeof(listnode));
	newL->data = data;
	newL->next = NULL;
	this->count ++;
	if(this->tail != NULL) 
		((listnode *)this->tail)->next = newL;
	else 
		this->head = newL;
	
	this->tail = newL;
	
	#ifdef DEBUG 
		printf("Data Appended\n");
	#endif

	return 1;
}

char preppendList(List *this, void *data){
	listnode *newL = malloc(sizeof(listnode));
	newL->data = data;
	newL->next = this->head;
	this->head = newL;
	this->count ++;
	
	if(this->tail == NULL) 
		this->tail = newL;
	
	#ifdef DEBUG 
		printf("Data Preppended\n");
	#endif

	return 1;
}

void iterateList(List *this, void (* action)(int, void *) ){
	int i = 0;
	
	listnode *iterator = this->head;
	
	while(iterator!=NULL){
		action(i++, iterator->data);		
		iterator = iterator->next;
	}
}

int sequentialSearchGetIndexList(List *this, void *data){
	int i = 0;
	listnode *iterator = this->head;
	
	while(iterator!=NULL){
		if(compare(data, iterator->data) == 0) return i;
		iterator = iterator->next;
		i++;
	}

	return -1;
}
void *sequentialSearchList(List *this, void *data){
	int i = 1;
	
	listnode *iterator = this->head;
	
	while(iterator!=NULL){
		if(compare(data, iterator->data) == 0) return iterator->data;
		iterator = iterator->next;
		i++;
	}

	return NULL;
}

int removeByIndexList(List *this, int index){
	int i;
	listnode *iterator, *temp;
	
	if(index > this->count) return 0;
	else if(index == 0){
		temp = this->head;
		this->head = this->head->next;
		free (temp);
		return 1;
	}

	iterator = this->head;

	for(i=0; i<index-1; iterator = iterator->next, i++);
	temp = iterator->next;

	if(temp != NULL) 
		iterator->next = temp->next;
	else
		iterator->next = NULL;

	if(temp == NULL || temp->next == NULL)
		this->tail = temp;

	this->count --;

	free(temp);
	return 1;
}

void * searchByIndexList(List *this, int index){
	int i = 0;
	listnode *iterator;
	if(index > this->count) return NULL;
	
	iterator = this->head;
	
	for(; i<index; iterator = iterator->next, i++);

	return iterator->data;
}