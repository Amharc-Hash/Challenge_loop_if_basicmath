#include<stdio.h>
#include<math.h>
double avg(int a ,int b);
double SD(int a, int b);

int main()
{
	int a, b;
	scanf("%d %d" ,&a ,&b);
	if (a > b)
	{
		for (int i=a ; i >=b ; i--)
		{
			printf("%d " ,i);
		}
		printf("\n");
	}
	else if (a < b)
	{
		for (int j=a ; j<=b ; j++)
		{
			printf("%d " ,j);
		}
		printf("\n");
	}
	else if (a = b)
	{
		printf("%d\n" ,a);
	}
	else
		printf("Error\n");

	printf("Average = %.1lf\n" ,avg(a, b));
	printf("SD = %.2lf\n" ,SD(a,b));
	return 0;
}

double avg(int a, int b) {
	double sum = 0;
	double avg;
	double k = 0;
	if (a > b)
	{
		for (int i = a; i >= b; i--)
		{
			sum += i;
			k++;
		}
		avg = sum / k;
		return avg;
	}
	else if (a < b)
	{
		for (int j = a; j <= b; j++)
		{
			sum += j;
			k++;
		}
		avg = sum / k;
		return avg;
	}
}

double SD(int a, int b) {
	double sumSD = 0;
	double SD;
	double k = 0;
	if (a > b)
	{
		for (int i= a; i >= b; i--)
		{
			sumSD += pow(i - avg(a,b), 2);
			k++;
		}
		SD = sqrt(sumSD / (k-1.0));
		return SD;
	}
	else if (a < b)
	{
		for (int j = a; j <= b; j++)
		{
			sumSD += pow(j - avg(a, b), 2);
			k++;
		}
		SD = sqrt(sumSD / (k-1.0));
		return SD;
	}

}