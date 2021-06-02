#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	char name[100];
	char address[100];
	
	printf("이름을 입력하시오 : "); 
	gets(name);
	printf("주소를 입력하시오 : ");
	gets(address);
	
	strcat(name, address);
	
	printf("%s", name);
	
	return 0;
}
