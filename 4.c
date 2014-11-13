#include <stdio.h>

int main() {
	double a = 1.05400000;
	float b = 234.0090800000;
	
	printf("a == %f b == %f\n", a, b);
	printf("a == %g b == %g\n", a, b);	
	printf("a == %.3f b == %.3f\n", a, b);
	printf("a == %.3e b == %.3e", a, b);
		
	return 0;
}