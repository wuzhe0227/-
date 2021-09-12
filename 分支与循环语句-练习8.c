#define __CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

int main()
{
	int i = 0;
	char password[20] = {0};
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码： ");
		scanf("%s", password);
		if (strcmp(password , "0227")==0)//等号不能用来判断两个字符串是否相等，应该使用一个库函数-strcmp
		{
			printf("登陆成功\n");
			break;
		}
	}
	if (i == 3)
		printf("三次密码均错误，退出程序\n");
	return 0;
}