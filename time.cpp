#include <stdio.h>
#include <time.h>
#include <conio.h>
#include <windows.h>

int main() {
	clock_t a,b;
	
	a = clock();
	Sleep(1000);
	b = clock();
	
	printf("%d %d", a, b);
	
	return 0;
}
