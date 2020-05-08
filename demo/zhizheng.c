#include <stdio.h>

int main()
{
	int var = 20;
	int *ip = NULL;
	
	printf("ip value %x\n",ip);
	
	//获取var的地址 给指针ip
	ip  = &var;

	printf("address of var variable:%d\n",&var);

	printf("address stored in ip variable:%d\n",ip);

	printf("value of *ip variable: %d\n",*ip);

	return 0;
}
