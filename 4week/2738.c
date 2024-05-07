#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



int main(void)
{
	int arr1[100] = { 0 };		//줄
	int arr2[100] = { 0 };		//원소
	int arr3[100][100] = { 0 };		//행렬A
	int arr4[100][100] = { 0 };		//행렬B
	int arr5[100][100] = { 0 };		//행렬A+B
	int a, b, c, d;
	scanf("%d", &a);	//줄 선언
	for (int i = 0; i < a; i++)
		arr1[i] = i + 1;
	scanf("%d", &b);	//원소 선언
	for (int i = 0; i < b; i++)
		arr2[i] = i + 1;

	for (int i = 0; i < a; i++)		//행렬A 선언
	{
		for (int j = 0; j < b; j++)
		{
			scanf("%d", &c);
			arr3[i][j] = c;
		}
	}
	for (int i = 0; i < a; i++)		//행렬B 선언
	{
		for (int j = 0; j < b; j++)
		{
			scanf("%d", &d);
			arr4[i][j] = d;
		}
	}
	for (int i = 0; i < a; i++)		//행렬A+B 계산
	{
		for (int j = 0; j < b; j++)
			arr5[i][j] = arr3[i][j] + arr4[i][j];
	}

	for (int i = 0; i < a; i++)		//행렬덧셈 결과 출력
	{
		for (int j = 0; j < b; j++)
			printf("%d ", arr5[i][j]);
		printf("\n");
	}


	return 0;
}
