#include<stdio.h>

int main()
{
	int line = 0;
	printf("进入大学\n");


	while (line < 20000)
	{

		printf("敲一行代码: %d\n", line);
		line++;

	}
	if (line >= 20000)
		printf("好offer\n");

	return 0;
}