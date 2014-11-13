#include <stdio.h>
#include <limits.h>

int main() {
	int i = INT_MAX; // Максимальное значение int
	int x = 2147483648; // Максимальное значение int плюс 1
	
	printf("%d\n", i);
	printf("%d\n", x);
	
	return 0;
}