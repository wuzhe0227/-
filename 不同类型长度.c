#include <stdio.h>

int main()
{
	//�ֽ�
	//������еĵ�λ 
	//bit - ����   //һ���ֽ�=8������λ�Ĵ�С
	//byte - �ֽ�
	//kb
	//mb
	//gb
	//tb
	//pb
	printf("%d\n", sizeof(char));// 1 �ֽ�
	printf("%d\n", sizeof(short));// 2 �ֽ� 
	printf("%d\n", sizeof(int));// 4 �ֽ�
	printf("%d\n", sizeof(long));// 4 �ֽ�
	printf("%d\n", sizeof(long long));// 8 �ֽ�
	printf("%d\n", sizeof(float));// 4 �ֽ�
	printf("%d\n", sizeof(double));// 8 �ֽ�
	return 0;
}