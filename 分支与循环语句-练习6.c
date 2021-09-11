#define __CRT_SECURE_NO_WARNINGS 1


//在数组中找到指定数字的下标


#include<stdio.h>

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 0;//指定的数字

	printf("请输入要找的数字: ");
	scanf("%d", &k);

	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
	int left = 0;//左下标
	int right = sz - 1;//右下标

	
	while(left<=right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > k)//要找的元素在左部分
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)//要找的元素在右部分
		{
			left = mid + 1;
		}
		else
		{
			printf("找到了,下标是: %d\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("找不到\n");
	}
	return 0;
}