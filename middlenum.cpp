#include <stdio.h>

int findmn(int m, int length, int a, int l[]) {
	int p = 0;
	
	for(int i = 0; i < length; i++) {
		if(l[i] > a) {
			p += 1;
		}
	}
	
	if(p == m) {
		return 1;
	}
	
	return 0;
}

int main() {
	int n;
	scanf("%d", &n);
	int a[n];
	int m = n / 2;
	
	for(int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	
	for(int j = 0; j < n; j++) {
		if(findmn(m, n, a[j], a) == 1) {
			printf("%d", a[j]);
		}
	}
	
	return 0;
}
