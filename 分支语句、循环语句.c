#define  _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>//求字符串长度需要

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


//int main()
//{
//	printf("printf(\"hellow world\\n\")");
//	return 0;
//}

//找最大值1
//int main()
//{
//	int a[4] = { 0 };
//	int max = 0;
//	
//	scanf ("%d %d %d %d",&a[0],&a[1],&a[2],&a[3]);
//	for (int i = 0; i < 4; i++)
//		if (a[i] > max)
//			max = a[i];
//	printf("%d",max);
//
//	
//	return 0;
//}

//找最大值2
//int main()
//{
//	int max = 0;
//	int n = 0;
//	int i = 0;
//	while (i < 4)
//	{
//		scanf("%d", &n);
//		if (n > max)
//			max = n;
//		i++;
//	}
//		
//	printf("%d",max);
//
//	return 0;
//}


//输入半径，求球的体积（v=4/3Πr的三次方）Π=3.1415926
//int main()
//{
//#define p 3.1415926
//	double r = 0.0;
//	double v = 0.0;
//	scanf("%lf", &r);
//	v = (4 / 3) * p * r * r * r;
//	printf("%.2lf", v);
//
//	return 0;
//}


////////////////////////////////////////////////////for循环语句
//a的介乘
//int main()
//{
//	int a = 0;
//	long long b = 1;
//	while (1)
//	{
//		scanf("%d", &a);
//		if (a > 0)
//		{
//			for (int i = 1; i <= a; i++)
//				b = b * i;
//			printf("%lld\n", b);
//			b = 1;
//		}
//		else
//			break;
//	}
//	return 0;
//}

//10以内的介乘和/第一种方法
//int main()
//{
//	int a = 1;
//	int b = 0;
//	int i = 1;
//	int m = 1;
//
//	while ( i<11)
//	{
//		a = 1;
//		for ( m = 1; m <= i; m++)
//			a = a * m;//算出当前介乘
//		b +=a;//存储介乘
//		i++;
//
//	}
//	printf("%d",b);
//
//	return 0;
//}
////10以内的介乘和
//int main()
//{
//	int a = 1;
//	int i = 1;
//	int b = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		a = a * i;//算出当前介乘并保留数值，乘下一位数得出下一位数的介乘
//		b += a;//累计介乘和
//	}
//	printf("%d",b);
//	return 0;
//}

//二分法查找
int main()
{
	int arr[1000] = {0};
	for (int m = 0; m < 1000; m++)
		arr[m] = m;

	int i = 0;//查找次数
	int a = 0;//实际价格
	scanf("%d",&a);

	int lift = 0;
	int right = (sizeof(arr)/sizeof(arr[0]) - 1);
	int mid = 0;
	while (lift <= right)
	{
		i++;
		mid = (lift + right) / 2;
		printf("第%d次查找：\n左区=[%d]：%d\n右区间[%d]：%d\n中间值[%d]：%d\n", i, lift, arr[lift], right, arr[right], mid, arr[mid]);
		if (a < arr[mid])
		{
			right = mid - 1;
			printf("小于中间值\n\n");
		}
		else if (a > arr[mid])
		{
			lift = mid + 1;
			printf("大于中间值\n\n");
		}
		else
			break;
	}
	if (a == arr[mid])
		printf("查找%d完成", arr[mid]);
	else
		printf("查找失败");
	return 0;
}