#include <stdio.h>
#include <stdlib.h>

int main() {
	int * p = NULL;
	int s = 0;
	int n;
	
	printf("��� �������� �հ踦 ���Ͻ� �ǰ���? : ");
	scanf("%d", &n);
	
	p = (int *) calloc(n, sizeof(int));
	
	for(int i = 0; i < n; i++) {
		scanf("%d", &p[i]);
		s += p[i];
	}
	
	printf("������ %d�Դϴ�.\n", s);
	
	free(p);
	
	return 0;
}
