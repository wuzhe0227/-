#define __CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


//计算1!+2!+3!+...+n!

int main()
{
	int a = 0;//输入的数字-循环出口
	int b = 0;//用于循环相加
	int c = 1;//相乘结果
	int d = 0;//相加结果
	scanf("%d", &a);
	for (b = 1; b <= a; b++)
	{

		c = c * b;
		d = d + c;
	}
	printf("%d", d);
	return 0;
}