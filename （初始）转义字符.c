#include <stdio.h>
#include<string.h>

int main()
{
	printf("%d\n", strlen("c:\test\32\test.c"));
	printf("%c\n", '\32');
	//\32 -- 32��2��8��������
	//32��Ϊ8���ƴ�����Ǹ�ʮ�������֣���ΪASCII��ֵ��Ӧ���ַ�
	//32 -- > 10���� 26 ->��ΪASCII��ֵ������ַ�
	return 0;
}