#define  _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main()
{
	int a = 0;
	scanf("%d",&a);
	if (!a)
		printf("��");
	else if (a < 18)
	{
		printf("δ����");
		printf("18��һ��");
	}//if����ִ�������Ҫ{}������������
	else if (a >= 18 && a < 26)
		printf("����");
	else if (a >= 26 && a < 50)
		printf("׳��");
	else if (a >= 50 && a < 70)
		printf("����");
	else if ((a >= 70 && a < 100) || a > 120)
		printf("����");
	else
		printf("��֪��");

}