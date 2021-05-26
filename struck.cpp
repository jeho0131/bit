#include <stdio.h>

struct circle {
	int x;
	int y;
	int r;
};

int main() {
	struct circle c1, c2;
	c1.x = 10;
	c1.y = 20;
	c1.r = 5;
	
	c2.x = 20;
	c2.y = 10;
	c2.r = 7;
	
	printf("c1¿« ≥–¿Ã : %f\n", c1.r * c1.r * 3.14);
	printf("c2¿« ≥–¿Ã : %f\n", c2.r * c2.r * 3.14); 
	
	return 0;
}
