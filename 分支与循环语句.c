#define __CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//do...while()ѭ��


int main()
{
	int i = 1;
	do
	{
		printf("%d ", i);
		i++;
	} while (i <= 10);
	return 0;
}







//forѭ�� --- ����
//
//��������forѭ�������޸ı�������ֹforѭ��ʧȥ����
//
//����for����ѭ�����Ʊ�����ȡֵ����"ǰ�պ�����"д����


//int main()
//{
//	int i = 0;
//				//һ���Ⱥ� - ��ֵ
//	for (i = 0; i = 0; i++)//�ж�ʱ0Ϊ�٣�����Ϊ�棬i=0ֱ���ж�Ϊ�٣�����ѭ�������ж�ʽ��Ϊ������ֵ����Ϊ��
//		i++;
//	return 0;
//}


//int main()
//{
//			//forѭ���ĳ�ʼ�����жϣ��������Ա�ʡ��
//			//���ǣ�
//	for (;;)//forѭ���жϱ�ʡ�ԣ���ô�ж��������ǣ���Ϊ��
//	{
//		printf("hehe\n");
//	}
//	return;
//}


//int main()
//{
//	int i = 0;
//	//��ʼ��    �ж�    ����
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//
//		printf("%d ", i);
//	}
//	return 0;
//}








//whileѭ�����
//
//break-������ֹѭ��
//
//continue-��ֹ����ѭ����Ҳ���Ǳ���ѭ���к���Ĵ��벻����ִ�У�����ֱ����ת��while�����жϲ��֡�������һ��ѭ��������ж�


//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}


//int main()
//{
//	//int ch = 0;
//	////ctrl + z
//	////EOF - end of file �ļ�������־ -> -1
//	//while ((ch = getchar()) != EOF)
//	//{
//	//	putchar(ch);//�൱��printf("%c\n",ch);
//	//
//	int ret = 0;
//	int ch = 0;
//	char password[20] = { 0 };//���������Ǹ������һ��Ԫ�صĵ�ֵַ�����Բ��ü�ȡ��ַ����&
//	printf("����������:>");
//	scanf("%s", password);//�������룬�������password������
//	//��������ʣ��һ��'/n'
//	//��ȡһ��'/n'
//	while ((ch = getchar()) != '\n')//��ջ����� - һֱ��ȡ���������ݣ�ֱ����ȡ��'/n'
//	{
//		;
//	}
//	printf("��ȷ��(Y/N):>");
//	ret = getchar();//Y/N
//	if (ret == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//		printf("����ȷ��\n");
//	return 0;
//}


//int main()
//{
//	int i = 0;
//
//	while (i <= 10)
//	{
//
//		i++;
//		if (i == 5)
//			continue;//��������ѭ����ߵĴ���,������һ��ѭ��
//		printf("%d ", i);
//
//	}
//	return 0;
//}








//switch��� -- ���֧���
// 
//switch��������䣬case�����γ������ʽ
//
//case��defaultû��˳�����

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)//case������ڣ�break��������
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	default://����������Ƿ�״��
//		printf("�������\n");
//		break;
//	}
	//switch (day)//case������ڣ�break��������
	//{
	//case 1:           //caes���д�͸�ԣ���Ҫbreak����ֹ
	//	printf("����һ\n");
	//	break;//��ֹ���
	//case 2:
	//	printf("���ڶ�\n");
	//	break;
	//case 3:
	//	printf("������\n");
	//	break;
	//case 4:
	//	printf("������\n");
	//	break;
	//case 5:
	//	printf("������\n");
	//	break;
	//case 6:
	//	printf("������\n");
	//	break;
	//case 7:
	//	printf("������\n");
	//}
//	return 0;
//}








//if���


//int main()
//{
//	int num = 4;
//	if (5 == num)//5д����ߣ�ֻдһ���Ⱥ�ʱ�ᱨ�� -- ���ŵĴ�����д����
//	{
//		printf("hehe\n");
//	}
//	//if (num = 5)//��=�� - ��ֵ�� ��==�� - �ж����
//	//{
//	//	printf("hehe\n");
//	//}
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//		else
//		//else�����δƥ���ifƥ��
//			printf("haha\n");
//	return 0;
//}


//int main()
//{
//	int age = 10;
//	if (age < 18)
//		printf("δ����\n");
//	else if (age >= 18 && age < 28)
//		printf("����\n");
//	else if (age >= 28 && age < 50)
//		printf("׳��\n");
//	else if (age >= 50 && age < 90)
//		printf("����\n");
//	else
//		printf("�ϲ���\n");
//
//
//	//if (age < 18)
//	//	printf("δ����\n");
//	//else
//	//	printf("����\n");
//	// 
//	// 
//	//if (age < 18)
//	//	printf("δ����\n");
//	return 0;
//
//}