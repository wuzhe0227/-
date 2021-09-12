#define __CRT_SECURE_NO_WARNINGS 1


//演示多个字符从两端移动，向中间汇聚
//
//（效果）
//welcome!!!!!
//############
//w##########!
//we########!!
//wel######!!!
//...
//welcome!!!!!


#include<stdio.h>
#include<string.h>//使用strlen函数
#include<windows.h>//使用Sleep函数
#include<stdlib.h>//使用system函数

int main()
{
	char arr1[] = "I Love You";
	char arr2[] = "##########";
	int left = 0;
	//int right = sizeof(arr1) / sizeof(arr1[0]) - 2;
	int right = strlen(arr1) - 1;//strlen - 数组长度

	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);

		Sleep(500);//休息半秒

		system("cls");//执行系统命令的一个函数 - cls - 清空屏幕
		
		//向中间靠拢
		left++;
		right--;
	}
	printf("%s\n", arr2);
	return 0;
}