#include <stdio.h>
#include <stdlib.h>

int main() {
	int * p = NULL;
	int s = 0;
	int n;
	
	printf("몇개의 데이터의 합계를 구하실 건가요? : ");
	scanf("%d", &n);
	
	p = (int *) calloc(n, sizeof(int));
	
	for(int i = 0; i < n; i++) {
		scanf("%d", &p[i]);
		s += p[i];
	}
	
	printf("총합은 %d입니다.\n", s);
	
	free(p);
	
	return 0;
}
