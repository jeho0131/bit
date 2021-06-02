#include <stdio.h>
#include <windows.h>

int main() {
	FILE *fs;
	fs = fopen("data.txt", "r");
	
	int a,b;
	char oper, equal;
	int rn;
	
	rn = fscanf(fs, "%d%c%d%c", &a, &oper, &b, &equal);
	
	while(rn==4) {
		printf("%d %d\n", a, b);
		rn = fscanf(fs, "%d%c%d%c", &a, &oper, &b, &equal);
	}
	
	fclose(fs);
	
	return 0;
}
