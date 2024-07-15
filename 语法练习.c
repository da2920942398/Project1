#define  _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>


//////////////////////////////////////6、选择语句
//int main()
//{
//
//	int a=0;
//	scanf("%d", &a);
//	if (a == 0)
//	{
//		printf("你好\n");
//		printf("%d", a);
//	}
//	else
//	{
//		printf("你不好\n");
//		printf("%d", a);
//	}
//
//
//	return 0;
//}



//////////////////////////////////////7、while循环语句
//int main()
//{
//	int a = 0;
//	while (a<10000)
//	{
//		a= a + 2;//加2
//		a ++;//加1
//		printf("加一=%d\n", a);
//	}
//
//
//	return 0;
//
//}


//////////////////////////////////////8、函数
//int add1(int a, int b)
//{
//	int c = a + b;
//
//	return c;
//}
//
//int add2(int a, int b)
//{
//	return(a+b);
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int c = add1(a, b);
//	printf("%d", c);
//	return 0;
//}


//////////////////////////////////////9、数组
//int main()
//{
//	int a[10] = { 11,12,13,14,15,16,17,18,19,20 };
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d ",a[i]);
//		i++;
//	}
//
//	return 0;
//
//}


//////////////////////////////////////10、操作符
//int main()
//{
//	int a = 7;
//	int b = 3;
//	int c = a / b;
//	int d = a % b;
//	printf("%d\n",c);
//	printf("%d\n",d);
//
//	float e = 7 / 2.0;
//	printf("%f\n",e);
//	printf("%.1f\n",e);
//	printf("%.2f\n",e);
//
//
//
//	return 0;
//}



//单目操作符
//////////////////////////////////////11、单目操作符
//int main()
//{
//	int a = 0;
//	a = 20;
//
//	a = a + 3;
//	a += 3;
//	a = a - 3;
//	a -= 3;
//	a = a * 3;
//	a *= 3;
//	a = a / 3;
//	a /= 3;
//
//	printf("%d\n",sizeof(a));
//	printf("%d\n",sizeof(int));
//
//	printf("%d\n",sizeof a);
//
//	int arr[10] = {0};
//	printf("%d\n",sizeof arr);
//	printf("%d\n", sizeof(arr[0]));
//	printf("%d\n", sizeof(arr)/ sizeof(arr[0]));
//	return 0;
//}


//////////////////////////////////////12、前置和后置、强制类型转换
//int main()
//{
//	int a = 10;
//	int b = ++a;
//	printf("%d\n", a);
//	printf("%d\n", b);
//
//	int c = 10;
//	int d = c--;
//	printf("%d\n", c);
//	printf("%d\n", d);
//
//	int e = (int)3.256;
//	printf("%d",e);
//	
//	return 0;
//}


//////////////////////////////////////13、逻辑操作符
//int main()
//{
//	int a = 0;
//	int b = 10;
//	if (a && b)
//	{
//		printf("正确");
//	}
//    if (a || b)
//	{
//		printf("错误");
//	}
//
//	return 0;
//}


//////////////////////////////////////13、条件操作符
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	int c = (a>b ? a : b );
//
//	return 0;
//}


//////////////////////////////////////14、关键字ststic修饰变量
//void test()//void不需要返回
//{
//	static int a = 0;//被static修饰后的局部变量出作用域后，不被销毁
//	printf("%d ",a);
//	a++;
// 
// 
//
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//
//	return 0;
//
//}


//////////////////////////////////////14、关键字register寄存器
//int main()
//{
//	register int a = 3;//建议存储到寄存器中
//	return 0;
//	
//}
//
//
//////////////////////////////////////14、关键字=#define定义常量、定义宏


//////////////////////////////////////14、关键字register建议存放在寄存器中
//int main()
//{
//	register int a = 10;
//	return 0;
//
//}


//////////////////////////////////////14、关键字#define

#define add1( x, y) (x+y)
int main()
{
	int a = 10;
	int b = 20;
	int c = add1(a, b);
	printf("%d",c);
	return 0;
}