#include<stdio.h>
int main()
{
	int a,b;
	printf("��������������");
	scanf_s("%d%d", &a, &b);
	if (a != b)
	{
		if (a > b)
		{
			printf("�ϴ������%d", a);
		}
		else 
		{
			printf("�ϴ������%d", b);
		}
	}
	else
	{
		printf("�ϴ������%d", a);
     }
     return 0;
}