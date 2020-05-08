#include <stdio.h>
#include <float.h>

int main()
{
	//存储大小
	printf("Storage size for float :%d \n",sizeof(float));
	//最小值
	printf("Minmum float positive value: %E\n",FLT_MIN);
	//最大值
	printf("Maxmum float positive value: %E\n",FLT_MAX);
	//精度 ？
	printf("Precision value: %E\n",FLT_DIG);

	return 0;
}
