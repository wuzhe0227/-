#include<stdio.h>

int main()
{
	//int a = 1;
	//int b = 2;
	//int c = 3;
	//int d = 4;
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};//定义一个存放10个整形数字的数组
	int i = 0;
	while (i < 10)
	{
		printf("%d ", arr[i]);
		i++; 
	}
	//printf("%d\n", arr[4]);//用下标的形式访问元素 - arr[下标] 
	//char ch[20];
	//float arr2[5];
	return 0;
}