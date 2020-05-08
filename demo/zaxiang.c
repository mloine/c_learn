#include <stdio.h>

int main()
{
	int a = 4;
	short b;
	double c;
	int* ptr;
	
	// 获取a的地址
	ptr = &a;
	printf("a value %d\n",a);
	printf("ptr value %d\n",ptr);

	a = 10;
	b = (a == 1)? 20 : 30;
	printf("b value %d\n",b);

	b = (a == 10) ? 20 : 30;
	printf("b value %d\n",b);
}
