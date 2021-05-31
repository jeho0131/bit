#include <stdio.h>
#include <stdlib.h>

struct score {
	int data;
	struct score* next;
};

int main() {
	struct score D = {40,NULL};
	struct score C = {20, &D};
	struct score B = {60,&C};
	struct score A = {30,&B};
	
	printf("%d %d %d %d", A.data, A.next->data, B.next->data, C.next->data);
	
	return 0;
}
