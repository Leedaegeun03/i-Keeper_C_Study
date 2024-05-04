#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{	
	int a, b, c, d;
	int temp;
	scanf("%d", &a);	//바구니 개수
	scanf("%d", &b);	//바꾸는 횟수
	int arr[100] = {0};
	for (int i = 0; i < a; i++)
		arr[i] = i + 1;
	
	for (int j = 0; j < b; j++)
	{
		if (1)
		{
			scanf("%d", &c);	//바꾸는 바구니1
			scanf("%d", &d);	//바꾸는 바구니2
				
			temp = arr[c-1];	//바구니1과 바구니2를 바꿈
			arr[c-1] = arr[d-1];
			arr[d-1] = temp;

		}
	}
	
	for (int i = 0; i < a; i++)
		printf("%d ", arr[i]);	//결과 출력
	
	return 0;
}
