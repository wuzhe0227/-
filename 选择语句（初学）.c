#include <stdio.h>
#include<string.h>

int main()
{
	int input = 0;
	printf("�����ѧ\n");
	printf("��Ҫ�ú�ѧϰ��?��1/0��>:");
	scanf("%d", &input);// 1/0
	if (input == 1)
		pirntf("��offer\n");
	else
		printf("������\n");
	return 0;
}