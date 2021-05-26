#include <stdio.h>

void circumference(int const r, const float pi) {
	printf("¿øµÑ·¹ %.2f", 2*pi*r);
}

int main() {
	int a = 0;
	int b = 0;
	
	const int * p = &a;
	
	p = &b;
	
	*(p) = 300;
	
	return 0;
}
