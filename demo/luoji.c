#include <stdio.h>

int main()
{
	int a = 5;
	int b = 20;
	int c;

	if(a && b)
	{
		printf("Line 1 - a&&b true\n");
	}
	
	if(a || b)
	{
		printf("Line 2 - a||b true\n");
	}

	a = 0;
	b = 10;
	if(a && b)
	{
		printf("Line 3 - 0 && b true\n");
	}else{
		printf("Line 3 - 0&&b false\n");
	}
	if(!(a&&b))
	{
		printf("Line 4 - true\n");
	}
}
