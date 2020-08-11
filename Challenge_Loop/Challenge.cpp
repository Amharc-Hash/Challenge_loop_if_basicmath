#include<stdio.h>
int main()
{
	int a ,b;
	printf("input : ");
	scanf("%d %d", &a, &b);
	if (a > b)
	{
		for (int i = b; i <= a; i++)
		{
			printf("%d ", i);
		}
	}
	else if (a < b)
	{
		for (int j = a; j <= b; j++)
		{
			printf("%d ", j);
		}
	}
	else if (a = b)
	{
		printf("%d", a);
	}
	else
		printf("Error");

	return 0;
}
