#define __CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

int main()
{
	int i = 0;
	char password[20] = {0};
	for (i = 0; i < 3; i++)
	{
		printf("���������룺 ");
		scanf("%s", password);
		if (strcmp(password , "0227")==0)//�ȺŲ��������ж������ַ����Ƿ���ȣ�Ӧ��ʹ��һ���⺯��-strcmp
		{
			printf("��½�ɹ�\n");
			break;
		}
	}
	if (i == 3)
		printf("��������������˳�����\n");
	return 0;
}