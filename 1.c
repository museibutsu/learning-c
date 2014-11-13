#include <stdio.h>

int main() {
	printf("|555|\n");
	printf("|%10d|\n", 555);
	printf("|%-10d|\n", 555);
	printf("Words:%10d\n", 59);
	printf("Latters:%8d\n", 1004);
	printf("Digits:%9d\n", 8);
	
	return 0;
}