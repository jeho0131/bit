#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	char name[100];
	char address[100];
	
	printf("�̸��� �Է��Ͻÿ� : "); 
	gets(name);
	printf("�ּҸ� �Է��Ͻÿ� : ");
	gets(address);
	
	strcat(name, address);
	
	printf("%s", name);
	
	return 0;
}
