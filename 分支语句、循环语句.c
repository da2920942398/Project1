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



