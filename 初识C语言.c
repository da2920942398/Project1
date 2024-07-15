#define  _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>//打印函数<printf>需要
#include <string.h>//求字符串长度需要




//
//int main()
//{
//	printf("你好\nnihao\n\n\n");
//	printf("%d\n", 100);
//	printf("字符的大小%d\n", sizeof(char));
//	printf("短整型的大小%d\n", sizeof(short));
//	printf("整形的大小%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	int aeg = 20;
//	printf("aeg=%d\n",aeg);
//	int num1 = 0;
//	int num2 = 2;//初始化
//	scanf("%d %d", &num1, &num2);
//
//	int sum = num1 + num2;
//	printf("sum=%d\n",sum);
//
//
//	printf("你好haohaoaojohoi\nnihao\n\n\n");
// 
// 
	//'w';
	//"abcd";
	//const int d = 10;//const修饰的常变量，本质是变量，但不能修改，有常量属性
	////int d = 10;
	//int a = 0;
	//int b = 0;
	//printf("\a\a\a\a\a\a\a");					
	//scanf("%d %d", &a, &b);
	//int c = a + b + f + d;
	//printf("c=%d\n", c);
	//int arr[10] = {1};
	//char arr1[] = "abcd";
	//char arr2[] = { 'a', 'b', 'c', 'd', 'e', 'f', '\0' };
	//char arr3[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
	//printf("%d\n", arr);
	//printf("%s\n", arr1);
	//printf("%s\n", arr2);
	//printf("%s\n", arr3);
	//printf("abcd\n\0ef\n");
	//printf("abcd\\0ef\n");
	//printf("\a\a\a\a\a\a\a");

	//printf("arr的长度%d\n", strlen(arr));
	//printf("arr1的长度%d\n", strlen(arr1));
	//printf("arr2的长度%d\n", strlen(arr2));
	//printf("arr3的长度%d\n", strlen(arr3));
	//printf("%s\n","(are you ok ???)");
//
//	
//
//	return 0;
//}
//extern int f;//声明来自外部的符号，在main函数之前

//int main()
//
//
//{
//
//	//printf("%c\n",'\'');
//	//printf("%d\n",'\136');//八进制数字0O13-->94
//	//printf("%d\n",'\136');//八进制数字0O13-->94
//	//printf("%c\n",'\136');//八进制数字0O13-->94
//	//printf("%s\n","\136");//八进制数字0O13-->94

//	return 0;
//}



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
//
//#define add1( x, y) ((x)+(y))
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = add1(a, b);
//	printf("%d",c);
//	return 0;
//}


//////////////////////////////////////15、指针
//int main()
//{
//	int a = 10;
//	int* b = &a;
//
//	char c = "你好";
//	char* d = &c;
//	  
//	int e = 10;
//	int* f = &e;
//	printf("%p\n", &e);
//	*f = 20;
//	printf("%d\n",e);
//
//
//	printf("char指针大小%zu\n",sizeof(char*));
//	printf("short指针大小%zu\n", sizeof(short*));
//	printf("int指针大小%zu\n",sizeof(int*));
//	printf("long指针大小%zu\n",sizeof(long*));
//	printf("longlong指针大小%zu\n",sizeof(long long*));
//	printf("float指针大小%zu\n",sizeof(float*));
//	printf("double指针大小%zu\n",sizeof(double*));
//	return 0;
//}


//////////////////////////////////////16、结构体

//建立结构体
//struct hmi
//{
//	int au;
//	int an;
//	char name[5];
//	char sfc[5];
//};
//
////建立函数
//void ann(struct hmi* i)
//{
//	//
//	printf("%d  %d  %s  %s\n",(*i).an,(*i).an,(*i).name,(*i).sfc);//
//	//->
//	//结构体指针变量->成员名
//	printf("%d  %d  %s  %s\n", i->an,i->au,i->name,i->sfc);
//}
//
//
//int main()
//{
//	struct hmi tp1 = {1,1,"plc2\0","你好\0"};
//	printf("%d\n%d\n%s\n%s\n",tp1.an,tp1.au,tp1.name,tp1.sfc);
//	ann(&tp1);
//
//	return 0;
//}