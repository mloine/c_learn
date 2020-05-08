#include <stdio.h>
//常量定义 使用define
#define LENGTH 10
#define WIDTH 5
#define NEWLINE '\n'

int main()
{
	int area;
	area = LENGTH * WIDTH;
	printf("value of area : %d",area);
	printf("%c",NEWLINE);
	
	return 0;
}
