#define  _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>


////////////////////////////////////////////////////if语句
//int main()
//{
//	int a = 0;
//	scanf("%d",&a);
//	if (!a)
//		printf("空");
//	else if (a < 18)
//	{
//		printf("未成年");
//		printf("18岁一下");
//	}//if后多个执行语句需要{}大括号括起来
//	else if (a >= 18 && a < 26)
//		printf("青年");
//	else if (a >= 26 && a < 50)
//		printf("壮年");
//	else if (a >= 50 && a < 70)
//		printf("老年");
//	else if ((a >= 70 && a < 100) || a > 120)
//		printf("仙人");
//	else
//		printf("不知道");
//
//}


////////////////////////////////////////////////////else语句

//int main()
//{
//	int a = 10;
//	int b = 20;
//	if (a == 1)
//		if (20 == b)
//			printf("haha");
//		else
//			printf("hehe");
//	return 0;
//}
////else匹配就近原则

//判断输入是奇数还是偶数
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a % 2)
//		printf("奇数");
//	else if (!(a%2) && a!=0)
//		printf("偶数");
//	return 0;
//}

//列出0-100所有奇数
//1、
//int main()
//{
//	int a = 0;
//	while (a<=100)
//	{
//		if (a % 2)
//			printf("%d\n",a);
//		a++;
//	}
//	return 0;
//}
//2、
//int main()
//{
//	int a = 1;
//	while (a <= 100)
//	{
//		printf("%d  ", a);
//		a = a + 2;
//	}
//	return 0;
//}

////////////////////////////////////////////////////switch语句
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	switch (a)
//	{
//	case 1:
//		printf("星期一");
//		break;
//	case 2:
//		printf("星期二");
//		break;
//	case 3:
//		printf("星期三");
//		break;
//	case 4:
//		printf("星期四");
//		break;
//	case 5:
//		printf("星期五");
//		break;
//	case 6:
//		printf("星期六");
//		break;
//	case 7:
//		printf("星期天");
//		break;	
//	}
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	scanf("%d",&a);
//	switch (a)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//		printf("小雨四");
//		break;
//	case 5:
//	case 6:
//	case 7:
//		printf("大于四");
//		break;
//	default:
//		printf("超出");
//	}
//	return 0;
//}



////////////////////////////////////////////////////while循环语句
//int main()
//{
//	int a = 0;
//	while ((a = getchar()) != EOF)
//	{
//		putchar(a);
//		printf("\n");
//	}
//	return 0;
//}
//getchar:获取,每次只能提取一个字符
//putchar:打印



//////////////////////////////////////////////////////getchar、putchar语句
//int main()
//{
//	char sn[6] = { 0 };
//	printf("请输入密码：");
//	scanf("%s",sn);
//	//清理输入缓冲区
//	//第一种写法（只能清一个字符）
//	getchar();
//	//第二种写法(一直循环清除到换行符)
//	while ((getchar()) != '\n')
//	{
//	};
//	printf("请确认密码(Y/N)");	
//	int m = getchar();
//	if ('Y' == m)
//		printf("OK");
//	else
//		printf("NO");
//	return 0;
//}


/////////////////////////////////////////////////////////////
//int main()
//{
//	char a = '\n';
//	while ((a = getchar()) != EOF)
//	{
//		if ((a < '0' || a > '9') && a != '\n')
//		{
//			printf("输入超限");
//			//continue;
//			//break;
//		}
//		else if (a == '\n')
//			continue;
//		else
//		{
//			putchar(a);
//			printf("\n");
//		}
//	}
//	return 0;
//}

/////////////////////////////////////////////////////////////只打印数字字符，跳过其他字符
//int main()
//{
//	int a = 0;
//	while ((a = getchar()) != EOF)
//	{
//		if (a < '0' || a > '9')
//			continue;
//		putchar(a);
//	}
//	return 0;
//}

//int main()
//{
//	int a[] = { 73,33,26,78,56,56,56,56 };
//	int i = 0;
//	int n = sizeof(a) / sizeof(a[0]);//求a这个数组里面有多少个元素（数组的总大小/数组里面单个元素的大小）
//	while (i <= n)
//	{
//		printf("%c\n", a[i]);
//		i++;
//	}
//	return 0;
//}


//int main()
//{
//	int year = 0;
//	int manth = 0;
//	int day = 0;
//	scanf("%4d%2d%2d",&year,&manth,&day);
//	printf("year=%4d\n",year);
//	printf("manth=%02d\n",manth);
//	printf("day=%02d\n", day);
//	printf("%4d年", year);
//	printf("%02d月", manth);
//	printf("%02d日\n", day);
//	return 0;
//}

int main()
{
	int a = printf("hellow word");
	printf("\n%d",a);
	return 0;
}