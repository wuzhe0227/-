#define __CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


//����1!+2!+3!+...+n!

int main()
{
	int a = 0;//���������-ѭ������
	int b = 0;//����ѭ�����
	int c = 1;//��˽��
	int d = 0;//��ӽ��
	scanf("%d", &a);
	for (b = 1; b <= a; b++)
	{

		c = c * b;
		d = d + c;
	}
	printf("%d", d);
	return 0;
}