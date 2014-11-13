#include <stdio.h>

int main() {
	char ch;
	
	printf("Перенос строки%c", ch = 10);
	printf("%cТабуляция\n", ch = 9);
	printf("Удаление%cсимвола\n", ch = 8);
	printf("Перенос %cкаретки", ch = 13);

	return 0;
}