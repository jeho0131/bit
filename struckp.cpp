#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct{
	int x;
	int y;
}point;

typedef struct{
	point s;
	point e;
	float l;
}line;

void lineLength(line * p) {
	int ax = abs( (p->s.x) - (p->e.x) );
	int ay = abs( (p->s.y) - (p->e.y) );
	
	p -> l = sqrt( ax * ax + ay * ay );
}

int main() {
	line * a = NULL;
	a = (line *) calloc(1, sizeof(line));
	
	a->s.x = 1;
	a->s.y = 3;
	
	a->e.x = -2;
	a->e.y = -1;
	
	lineLength(a);
	
	printf("선의 길이 : %f", a->l); 
	
	return 0;
}
