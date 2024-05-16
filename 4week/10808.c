#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    char str[100] = { 0 };
    int arr[26] = { 0 };

	scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++)    //문자열의 마지막인 \0까지I증가
        arr[str[i] - 'a']++;    //ex)입력을 aba로 하면 str[i] - 'a'은 a-a,b-a,a-a가 되고 arr[]++로 하나씩 올려준다
                                //아스키 코드로 a-a는 0,b-a는1이다
    for (int i = 0; i < 26; i++) 
        printf("%d ", arr[i]);  //알파벳 개수 출력
    
    printf("\n");


	return 0;
}
