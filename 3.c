#include <stdio.h>

main() {
	char ch = 82;
	unsigned char uch = 'N';
	short j = 'b', k = 100;

	printf("%c == %d\n", ch, ch);
	printf("%c == %d\n", uch, uch);
	printf("%c, %c\n", j, k);

	return 0;
}