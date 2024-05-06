#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



int main(void)
{
	char str[100]; 
	int a;
	scanf("%s", str);	//영어단어 대소문자 관계없이 입력
	a = strlen(str);	//strlen함수를 이용하여  a에 입력받은 문자열을 길이로 변환
	printf("%d", a);	//결과 출력
	return 0;
}
