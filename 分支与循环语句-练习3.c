#define __CRT_SECURE_NO_WARNINGS 1


//����n�Ľ׳�


#include<stdio.h>

int main()
{
	int n = 0;//���������-����ֵ
	int i = 0;//����ѭ��
	long long m = 1;//ѭ�����
	printf("����n�Ľ׳�\n����������n= ");//��ʼ��
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		m = i * m;//ѭ������
	}
	printf("%d�Ľ׳�Ϊ %lld\n", n, m);//������
	return 0;
}