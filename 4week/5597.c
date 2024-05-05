#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, temp;
	int arr[30] = {0};	//arr을 0으로 초기화
	
	for (int i = 30; i > 2; i--)
	{	
		scanf("%d", &a);	
		for (int i = 0; i < 28; i++)	//28개의 변수를 입력받음
			arr[a - 1] = a;		//ex)21의 변수를 받으면 arr[20]을 21로 선언
		
	}
	for (int i = 0; i < 30; i++)
	{
		if (arr[i] == 0)	//변수가 0으로 선언되어 있는 arr만 출력
			printf("%d\n", i+1);	//ex) arr[27]==0을 충족하면 28을 출력
	}
	return 0;
}
