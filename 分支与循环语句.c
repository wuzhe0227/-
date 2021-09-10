#define __CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//do...while()循环


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







//for循环 --- 常用
//
//不可以在for循环体内修改变量，防止for循环失去控制
//
//建议for语句的循环控制变量的取值采用"前闭后开区间"写法。


//int main()
//{
//	int i = 0;
//				//一个等号 - 赋值
//	for (i = 0; i = 0; i++)//判断时0为假，其他为真，i=0直接判断为假，不进循环；若判断式改为其他数值，则为真
//		i++;
//	return 0;
//}


//int main()
//{
//			//for循环的初始化，判断，调整可以被省略
//			//但是：
//	for (;;)//for循环判断被省略，那么判断条件则是：恒为正
//	{
//		printf("hehe\n");
//	}
//	return;
//}


//int main()
//{
//	int i = 0;
//	//初始化    判断    调整
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//
//		printf("%d ", i);
//	}
//	return 0;
//}








//while循环语句
//
//break-永久中止循环
//
//continue-中止本次循环，也就是本次循环中后面的代码不会再执行，而是直接跳转到while语句的判断部分。进行下一次循环的入口判断


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
//	////EOF - end of file 文件结束标志 -> -1
//	//while ((ch = getchar()) != EOF)
//	//{
//	//	putchar(ch);//相当于printf("%c\n",ch);
//	//
//	int ret = 0;
//	int ch = 0;
//	char password[20] = { 0 };//数组名就是该数组第一个元素的地址值，所以不用加取地址符号&
//	printf("请输入密码:>");
//	scanf("%s", password);//输入密码，并存放在password数组中
//	//缓冲区还剩余一个'/n'
//	//读取一下'/n'
//	while ((ch = getchar()) != '\n')//清空缓冲区 - 一直读取缓冲区内容，直到读取到'/n'
//	{
//		;
//	}
//	printf("请确认(Y/N):>");
//	ret = getchar();//Y/N
//	if (ret == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//		printf("放弃确认\n");
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
//			continue;//跳过本次循环后边的代码,进行下一次循环
//		printf("%d ", i);
//
//	}
//	return 0;
//}








//switch语句 -- 多分支语句
// 
//switch是整形语句，case是整形常量表达式
//
//case与default没有顺序可言

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)//case决定入口，break决定出口
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	default://用来除处理非法状况
//		printf("输入错误\n");
//		break;
//	}
	//switch (day)//case决定入口，break决定出口
	//{
	//case 1:           //caes具有穿透性，需要break来中止
	//	printf("星期一\n");
	//	break;//中止语句
	//case 2:
	//	printf("星期二\n");
	//	break;
	//case 3:
	//	printf("星期三\n");
	//	break;
	//case 4:
	//	printf("星期四\n");
	//	break;
	//case 5:
	//	printf("星期五\n");
	//	break;
	//case 6:
	//	printf("星期六\n");
	//	break;
	//case 7:
	//	printf("星期日\n");
	//}
//	return 0;
//}








//if语句


//int main()
//{
//	int num = 4;
//	if (5 == num)//5写在左边，只写一个等号时会报错 -- 更优的代码书写形势
//	{
//		printf("hehe\n");
//	}
//	//if (num = 5)//“=” - 赋值； “==” - 判断相等
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
//		//else与最近未匹配的if匹配
//			printf("haha\n");
//	return 0;
//}


//int main()
//{
//	int age = 10;
//	if (age < 18)
//		printf("未成年\n");
//	else if (age >= 18 && age < 28)
//		printf("青年\n");
//	else if (age >= 28 && age < 50)
//		printf("壮年\n");
//	else if (age >= 50 && age < 90)
//		printf("老年\n");
//	else
//		printf("老不死\n");
//
//
//	//if (age < 18)
//	//	printf("未成年\n");
//	//else
//	//	printf("成年\n");
//	// 
//	// 
//	//if (age < 18)
//	//	printf("未成年\n");
//	return 0;
//
//}