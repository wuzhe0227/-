#define __CRT_SECURE_NO_WARNINGS 1


//��ʾ����ַ��������ƶ������м���
//
//��Ч����
//welcome!!!!!
//############
//w##########!
//we########!!
//wel######!!!
//...
//welcome!!!!!


#include<stdio.h>
#include<string.h>//ʹ��strlen����
#include<windows.h>//ʹ��Sleep����
#include<stdlib.h>//ʹ��system����

int main()
{
	char arr1[] = "I Love You";
	char arr2[] = "##########";
	int left = 0;
	//int right = sizeof(arr1) / sizeof(arr1[0]) - 2;
	int right = strlen(arr1) - 1;//strlen - ���鳤��

	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);

		Sleep(500);//��Ϣ����

		system("cls");//ִ��ϵͳ�����һ������ - cls - �����Ļ
		
		//���м俿£
		left++;
		right--;
	}
	printf("%s\n", arr2);
	return 0;
}