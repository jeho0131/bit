#include <stdio.h>
#include <stdlib.h>

typedef struct score S;

struct score {
	int d;
	S* next;
};

int main() {
	S* p = NULL;
	
	p = (S*) calloc(1, sizeof(S) );
	p -> d = 10;
	
	p -> next = (S*) calloc(1, sizeof(S) );
	p -> next -> d = 20;
	
	printf("%d %d", p -> d, p -> next -> d);
	
	return 0;
}
