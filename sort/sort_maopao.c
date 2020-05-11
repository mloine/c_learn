/**
*
*	冒泡排序
*/

#include <stdio.h>

void maopao_sort(int arr[],int len){
	int i,j,tmp;
	for(i=0;i<len - 1;i++){
		for(j=0;j<(len-i-1);j++){
			if(arr[j]>arr[j+1]){
				tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}
		}
	}
}

int main()
{
	int arr[] = {1,43,21,23,66,76};
	int len  = (int)sizeof(arr)/sizeof(*arr);

	maopao_sort(arr,len);
	int i;
	for(i=0;i<len;i++){
		printf("%d\n",arr[i]);
	}
	
	return 0;
	
}
