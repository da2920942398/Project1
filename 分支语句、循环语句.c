#define  _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>//���ַ���������Ҫ

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


//int main()
//{
//	printf("printf(\"hellow world\\n\")");
//	return 0;
//}

//�����ֵ1
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

//�����ֵ2
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


//����뾶������������v=4/3��r�����η�����=3.1415926
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


////////////////////////////////////////////////////forѭ�����
//a�Ľ��
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

//10���ڵĽ�˺�/��һ�ַ���
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
//			a = a * m;//�����ǰ���
//		b +=a;//�洢���
//		i++;
//
//	}
//	printf("%d",b);
//
//	return 0;
//}
////10���ڵĽ�˺�
//int main()
//{
//	int a = 1;
//	int i = 1;
//	int b = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		a = a * i;//�����ǰ��˲�������ֵ������һλ���ó���һλ���Ľ��
//		b += a;//�ۼƽ�˺�
//	}
//	printf("%d",b);
//	return 0;
//}

//���ַ�����
int main()
{
	int arr[1000] = {0};
	for (int m = 0; m < 1000; m++)
		arr[m] = m;

	int i = 0;//���Ҵ���
	int a = 0;//ʵ�ʼ۸�
	scanf("%d",&a);

	int lift = 0;
	int right = (sizeof(arr)/sizeof(arr[0]) - 1);
	int mid = 0;
	while (lift <= right)
	{
		i++;
		mid = (lift + right) / 2;
		printf("��%d�β��ң�\n����=[%d]��%d\n������[%d]��%d\n�м�ֵ[%d]��%d\n", i, lift, arr[lift], right, arr[right], mid, arr[mid]);
		if (a < arr[mid])
		{
			right = mid - 1;
			printf("С���м�ֵ\n\n");
		}
		else if (a > arr[mid])
		{
			lift = mid + 1;
			printf("�����м�ֵ\n\n");
		}
		else
			break;
	}
	if (a == arr[mid])
		printf("����%d���", arr[mid]);
	else
		printf("����ʧ��");
	return 0;
}