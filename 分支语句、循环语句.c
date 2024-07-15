#define  _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main()
{
	int a = 0;
	scanf("%d",&a);
	if (!a)
		printf("空");
	else if (a < 18)
	{
		printf("未成年");
		printf("18岁一下");
	}//if后多个执行语句需要{}大括号括起来
	else if (a >= 18 && a < 26)
		printf("青年");
	else if (a >= 26 && a < 50)
		printf("壮年");
	else if (a >= 50 && a < 70)
		printf("老年");
	else if ((a >= 70 && a < 100) || a > 120)
		printf("仙人");
	else
		printf("不知道");

}