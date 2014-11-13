#include <stdio.h>

int main() {
	char not_num[] = "528";
	int num = atoi(not_num); //Array to integer
	
	printf("%d", num - 10);
	
	return 0;
}