#include <stdio.h>

int main() {
	int a = 1, b = 2, c = a + b;
	
	if (c == 3)
		if (a < b)
			printf("a < b");
		else
			("a !< b");
	else
		printf("c != 3");

	return 0;
}