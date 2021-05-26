#include <stdio.h>
#include <stdint.h>
#include <math.h>

int main() {
	uint8_t a;
	int8_t b;
	uint8_t n;
	
	unsigned int num;
	
	scanf("%d", &num);

	unsigned int c;
	int ni;
	unsigned int nn;
	
	if(num == 1) {
		printf("1");
	}
	
	else {
		for(int j = 0; j <= 32; j++) {
			if (pow(2, j+1) <= num) {
				c = pow(2,j+1);
				ni = j;
			}
		}
		
		for(int i = 0; i <= ni+1; i++) { 
			nn = c & num;
			if (nn > 0) {
				printf("1");
			}
			else {
				printf("0");
			}		
			c = c >> 1;
		}
	}
	
	return 0;
}
