#define  _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>


//////////////////////////////////////6��ѡ�����
//int main()
//{
//
//	int a=0;
//	scanf("%d", &a);
//	if (a == 0)
//	{
//		printf("���\n");
//		printf("%d", a);
//	}
//	else
//	{
//		printf("�㲻��\n");
//		printf("%d", a);
//	}
//
//
//	return 0;
//}



//////////////////////////////////////7��whileѭ�����
//int main()
//{
//	int a = 0;
//	while (a<10000)
//	{
//		a= a + 2;//��2
//		a ++;//��1
//		printf("��һ=%d\n", a);
//	}
//
//
//	return 0;
//
//}


//////////////////////////////////////8������
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


//////////////////////////////////////9������
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


//////////////////////////////////////10��������
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



//��Ŀ������
//////////////////////////////////////11����Ŀ������
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


//////////////////////////////////////12��ǰ�úͺ��á�ǿ������ת��
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


//////////////////////////////////////13���߼�������
//int main()
//{
//	int a = 0;
//	int b = 10;
//	if (a && b)
//	{
//		printf("��ȷ");
//	}
//    if (a || b)
//	{
//		printf("����");
//	}
//
//	return 0;
//}


//////////////////////////////////////13������������
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	int c = (a>b ? a : b );
//
//	return 0;
//}


//////////////////////////////////////14���ؼ���ststic
//void test()//void����Ҫ����
//{
//	static int a = 0;//��static���κ�ľֲ�������������󣬲�������
//	printf("%d ",a);
//	a++;
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


//////////////////////////////////////14���ؼ���ststic
