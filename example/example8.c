/**
*
*	题目：输出9*9口诀。
*
*/

#include <stdio.h>
int main()
{
	int i,j;
	printf("\n");
	for(i=1;i<10;i++){
		for(j=1;j<=i;j++){
			printf("%d*%d=%-3d",i,j,i*j);
		}
		printf("\n");
	}
}
