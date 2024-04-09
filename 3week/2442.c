#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int count;
	scanf("%d", &count);
	for (int a = 1; a <= count; a++) {
		for (int b = count - a; b > 0; b--)
			printf(" ");

		for (int c = 0; c < a; c++)
			printf("*");
		for (int c = 1; c < a; c++)
			printf("*");


		printf("\n");


	}

	return 0;
}
