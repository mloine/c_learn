/**
*	题目：输入三个整数x,y,z，请把这三个数由小到大输出。
*
*/

#include <stdio.h>

int main()
{
	int x,y,k,t;
	printf("\n 请输入三个数组:(1,2,3）\n");
	scanf("%d,%d,%d",&x,&y,&k);

	if(x > y){
		t = x;
		x = y;
		y = t;
	}
	if(x > k){
		t = x;
		x = k;
		k = t;
	}
	if(y > k){
		t = k;
		k = y;
		y = t;
	}

	printf("从小到大排序:%d,%d,%d\n",x,y,k);
}
