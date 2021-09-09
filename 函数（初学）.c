#include<stdio.h>

int Add(int x, int y)//自定义函数
{
	int z = x + y;
	return z;
}
int main()
{
	int num1 = 20;
	int num2 = 10;
	int sum = 0;
	sum = Add(num1, num2);//sum = num1 + num2;
	printf("sum = %d\n", sum);//库函数

	return 0;
}