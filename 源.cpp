#include<stdio.h>
int main()
{
	int a,b;
	printf("请输入两个数：");
	scanf_s("%d%d", &a, &b);
	if (a != b)
	{
		if (a > b)
		{
			printf("较大的数是%d", a);
		}
		else 
		{
			printf("较大的数是%d", b);
		}
	}
	else
	{
		printf("较大的数是%d", a);
     }
     return 0;
}