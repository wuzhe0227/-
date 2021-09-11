#define __CRT_SECURE_NO_WARNINGS 1


//计算n的阶乘


#include<stdio.h>

int main()
{
	int n = 0;//输入的数字-出口值
	int i = 0;//用于循环
	long long m = 1;//循环结果
	printf("计算n的阶乘\n请输入数字n= ");//初始化
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		m = i * m;//循环计算
	}
	printf("%d的阶乘为 %lld\n", n, m);//输出结果
	return 0;
}