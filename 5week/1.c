#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int sum(int a)
{
	int b=0;
	for (int i = 0; i <= a; i++)
		b += i;
	return b;
}

int main()
{
	int a;
	scanf("%d", &a);
	printf("%d", sum(a));
}
