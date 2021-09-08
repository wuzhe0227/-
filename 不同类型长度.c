#include <stdio.h>

int main()
{
	//字节
	//计算机中的单位 
	//bit - 比特   //一个字节=8个比特位的大小
	//byte - 字节
	//kb
	//mb
	//gb
	//tb
	//pb
	printf("%d\n", sizeof(char));// 1 字节
	printf("%d\n", sizeof(short));// 2 字节 
	printf("%d\n", sizeof(int));// 4 字节
	printf("%d\n", sizeof(long));// 4 字节
	printf("%d\n", sizeof(long long));// 8 字节
	printf("%d\n", sizeof(float));// 4 字节
	printf("%d\n", sizeof(double));// 8 字节
	return 0;
}