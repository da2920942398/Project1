#define  _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>


////////////////////////////////////////////////////if���
//int main()
//{
//	int a = 0;
//	scanf("%d",&a);
//	if (!a)
//		printf("��");
//	else if (a < 18)
//	{
//		printf("δ����");
//		printf("18��һ��");
//	}//if����ִ�������Ҫ{}������������
//	else if (a >= 18 && a < 26)
//		printf("����");
//	else if (a >= 26 && a < 50)
//		printf("׳��");
//	else if (a >= 50 && a < 70)
//		printf("����");
//	else if ((a >= 70 && a < 100) || a > 120)
//		printf("����");
//	else
//		printf("��֪��");
//
//}


////////////////////////////////////////////////////else���

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
////elseƥ��ͽ�ԭ��

//�ж���������������ż��
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a % 2)
//		printf("����");
//	else if (!(a%2) && a!=0)
//		printf("ż��");
//	return 0;
//}

//�г�0-100��������
//1��
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
//2��
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

////////////////////////////////////////////////////switch���
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	switch (a)
//	{
//	case 1:
//		printf("����һ");
//		break;
//	case 2:
//		printf("���ڶ�");
//		break;
//	case 3:
//		printf("������");
//		break;
//	case 4:
//		printf("������");
//		break;
//	case 5:
//		printf("������");
//		break;
//	case 6:
//		printf("������");
//		break;
//	case 7:
//		printf("������");
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
//		printf("С����");
//		break;
//	case 5:
//	case 6:
//	case 7:
//		printf("������");
//		break;
//	default:
//		printf("����");
//	}
//	return 0;
//}



////////////////////////////////////////////////////whileѭ�����
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
//getchar:��ȡ,ÿ��ֻ����ȡһ���ַ�
//putchar:��ӡ



//////////////////////////////////////////////////////getchar��putchar���
//int main()
//{
//	char sn[6] = { 0 };
//	printf("���������룺");
//	scanf("%s",sn);
//	//�������뻺����
//	//��һ��д����ֻ����һ���ַ���
//	getchar();
//	//�ڶ���д��(һֱѭ����������з�)
//	while ((getchar()) != '\n')
//	{
//	};
//	printf("��ȷ������(Y/N)");	
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
//			printf("���볬��");
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

/////////////////////////////////////////////////////////////ֻ��ӡ�����ַ������������ַ�
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
//	int n = sizeof(a) / sizeof(a[0]);//��a������������ж��ٸ�Ԫ�أ�������ܴ�С/�������浥��Ԫ�صĴ�С��
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
//	printf("%4d��", year);
//	printf("%02d��", manth);
//	printf("%02d��\n", day);
//	return 0;
//}

int main()
{
	int a = printf("hellow word");
	printf("\n%d",a);
	return 0;
}