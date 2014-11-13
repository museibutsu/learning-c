#include <stdio.h>

int main() {
	int a = 1, b = 2;
	int c = (a < b) ? a + 2 : b + 1;
	
	printf("c = %d", c);
	
	return 0;
}