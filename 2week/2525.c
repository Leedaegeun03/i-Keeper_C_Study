#include <stdio.h>
int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	b = b + c;
	a = a + b / 60;
	if (a<=0&&a>=23)
	a = a;
	else if (a>23)
	a = a % 24;
	if (b>=0&&b<=59)
	b = b;
	else if (b + c>60)
	b = b % 60;
	printf("%d %d", a, b);
	return 0;
}
