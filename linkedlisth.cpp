#include <stdio.h>
#include <stdlib.h>

typedef struct score S;
struct score {
	int d;
	S* next;
};

int main() {
	S* head = NULL;
	S* p = (S*) calloc(1, sizeof(S));
	
	while(scanf("%d",&(p->d)) != EOF) {
		p -> next = head;
		head = p;
		p = (S*)calloc(1, sizeof(S)); 
	}
	
	free(p);
	p = head;
	
	while(head != NULL) {
		printf("%d ", head -> d);
		head = head -> next;
		free(p);
		p=head;
	}
	
	return 0;
}
