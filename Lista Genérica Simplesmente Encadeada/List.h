#ifndef LIST_H
#define LIST_H

typedef struct _listnode{
	struct _listnode *next;
	void * data;
}listnode;

typedef struct List{
	listnode *head;
	listnode *tail;
	int count;
	int size;
}List;

List * newList();

char appendList(List *, void *);

char preppendList(List *, void *);

void iterateList(List *, void (*)(int, void *) );

int sequentialSearchGetIndexList(List *, void *);

void *sequentialSearchList(List *, void *);

int removeByIndexList(List *, int);

int removeList(List *, void *, int (*)(void *, void *));

void freeList(List *);

extern void print(int, void *);

extern int compare(void *, void *);

void * searchByIndexList(List *, int);

int getCount();

int getSize();

#endif