#include <stdio.h>

int main() {
	int i;
	unsigned u;
	short s;
	unsigned short us;
	long l;
	unsigned long ul;
	char c;
	float f;
	double d;
	long double ld;
	int a[10];
	char st[] = "Hello";
	
	printf("Integer: %lu\nUnsigned: %lu\nShort: %lu\nUnsigned short: %lu\nLong: %lu\nUnsigned long: %lu\nChar: %lu\nFloat: %lu\nDouble: %lu\nLong double: %lu\nArray of 10 integers: %lu\nString Hello: %lu", sizeof(i), sizeof(u), sizeof(s), sizeof(us), sizeof(l), sizeof(ul), sizeof(c), sizeof(f), sizeof(d), sizeof(ld), sizeof(a[10]), sizeof(st));	
	
	return 0;
}