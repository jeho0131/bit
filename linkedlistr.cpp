#include <stdio.h>
#include <stdlib.h>

typedef struct score S;
struct score {
	int d;
	S* next;
};

int main() {
	S* p = (S*) calloc(1, sizeof(S));
	S* head = p;
	S* temp = p;
	
	while( scanf("%d", &p->d) != EOF ) {
		p = (S*) calloc(1, sizeof(S));
		temp -> next = p;
		temp = p;
	}
	
	while(head != temp) {
		printf("%d ", head -> d);
		head = head -> next;
	}
	
	return 0;
}
