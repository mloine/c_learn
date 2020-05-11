#include <stdio.h>

int main()
{
	int i,j;
	for(j=0;j<8;j++){
		for(i=0;i<9;i++){
			if((i+j)%2==0){
				printf("%c%c",219,219);
			}else{
				printf("  ");
			}
		}
		printf("\n");
	}

	return 0;

}
