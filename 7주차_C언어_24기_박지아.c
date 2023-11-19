#include <stdio.h>
#include <math.h>

int Q1668();
int Q2562();
int Q2576();


int Q1668()
{
	int num, height, rc = 0, lc = 0;
	int trophy[51];
	scanf_s("%d", &num);
	for (int i = 0; i < num; i++)
	{
		scanf_s("%d", &height);
		trophy[i] = height;
	}

	int max1 = -1;
	int max2 = -1;
	for (int i = 0; i < num; i++)
	{
		if (trophy[i] > max1)
		{
			max1 = trophy[i];
			rc++;
		}
		if (trophy[num-i-1] > max2)
		{
			max2 = trophy[num-i-1];
			lc++;
		}
	}
	printf("%d\n", rc);
	printf("%d", lc);
}

int Q2562()
{
	int num;
	int max = 0;
	int cnt = 0;

	for (int i = 0; i < 9; i++)
	{
		scanf_s("%d", &num);
		if (num > max)
		{
			max = num;
			cnt = i+1;
		}
	}

	printf("%d\n%d", max, cnt);
}

int Q2576()
{
	int num;
	int hasodd = -1;
	int odd[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int min = 101;
	int add = 0;

	for (int i = 0; i < 7; i++)
	{
		scanf_s("%d", &num);
		if (num % 2 == 1)
		{
			++hasodd;
			odd[hasodd] = num;
		}
	}

	for (int i = 0; i <= hasodd; i++)
	{
		add += odd[i];
		if (odd[i] < min)
		{
			min = odd[i];
		}
	}

	if (hasodd == -1)
	{
		printf("-1");
	}
	else
	{
		printf("%d\n%d", add, min);
	}
}
