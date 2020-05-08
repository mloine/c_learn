#include <stdio.h>
//函数申明
int func();

int main()
{
	//函数调用
	int i = func();

	printf("main function value of i:%d\n",i);
}

int func()
{	
	printf("function func .....\n");
	return 0;
}
