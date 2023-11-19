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
	} // 트로피의 높이를 배열에 저장

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
	} // 오른쪽에서 봤을 때, 왼쪽에서 봤을 때 모두 max값보다 커졌을 경우를 계산
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
	} // 입력받은 숫자 중 가장 큰 숫자와 입력 받았을 때의 순서 계산

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
	} // 홀수 였을 때 홀수값을 배열에 저장

	for (int i = 0; i <= hasodd; i++)
	{
		add += odd[i];
		if (odd[i] < min)
		{
			min = odd[i];
		}
	} // 홀수만 모아둔 배열을 이용해 홀수의 총 값을 구하고 최솟값 구하기

	if (hasodd == -1)
	{
		printf("-1");
	} // 모든 값이 짝수였을 때
	else
	{
		printf("%d\n%d", add, min);
	}
}
