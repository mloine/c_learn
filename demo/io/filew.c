#include <stdio.h>

int main()
{
	FILE *fp;
	fp = fopen("/tmp/test.txt","w+");

	fprintf(fp,"This is test for fprintf... \n");
	fputs("This is test for fputs...\n",fp);
	fclose(fp);

	return 0;
}
