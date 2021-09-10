#include<stdio.h>

int main()
{

	//1.判断一个数是否为奇数

	int num = 0;
	int NUM = 0;
	printf("请输入数字： ");
	scanf("%d", &num);
	NUM = num % 2;//求出这个数关于2的模并赋值给NUM
	if (0 == NUM)//判断这个模是否为0，如果为0则为偶数，如果不为0则为奇数
		printf("这个数为偶数\n\n\n\n\n");
	else
		printf("这个数为奇数\n\n\n\n\n");//多次换行让下一题看的清楚点

	//2.输出1到100之间的奇数

	int a = 0;
	int A = 0;
	while (a <= 100)//开始循环
	{
		//判断a是否为奇数：如果是，输出；如果不是，不输出
		A = a % 2;
		if (1 == A)
			printf("%d ",a);
		a++;//给a加上1
	}

	return 0;
 }