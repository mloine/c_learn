#include <stdio.h>

int main()
{	
	// 60 = 00111100
	unsigned int a = 60;
	// 15 = 00001101
	unsigned int b = 13;

	int c = 0;

	c = a & b;
	printf("Line 1 - c value %d\n",c);

	c = a | b;
	printf("Line 2 - c value %d\n",c);

	c = a ^ b;
	printf("Line 3 - c value %d\n",c);

	c = ~a;
	printf("Line 4 - c value %d\n",c);

	c = a << 2;
	printf("Line 5 - c value %d\n",c);

	c = a >> 2;
	printf("Line 6 -c value %d\n",c);

}
