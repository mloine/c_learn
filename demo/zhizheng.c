#include <stdio.h>
/**
 * 指针
 *      c语言特点
 *      1.指针没有指向的时候 建议赋值null
 *      2.指针指向的地址 并不是具体的值
 * @return
 */
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
