#include <stdio.h>

void add(int *a, int *b, int *c) {
	*(c) = (*a) + (*b);
}

int main() {
	int a;
	int b;
	int c;
	
	scanf("%d %d",&a,&b);
	
	add(&a,&b,&c);
	
	printf("%d + %d = %d", a, b, c);
	
	return 0;
}
