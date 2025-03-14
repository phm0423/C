/*
	대소문자 상호변환기
*/
#include <stdio.h>

int main()
{
	char aa;
	
	printf("문자를 입력하시오.: ");
	scanf_s("%c", &aa, 1);
	
	char ch1;
	char ch2 = aa;

	if ((ch2 >= 'A') && (ch2 <= 'Z')) {
		ch1 = ch2 + ('a' - 'A');
		printf("대문자: %c\t", ch2);
		printf("소문자: %c\n", ch1);
	}
	else if ((ch2 >= 'a') && (ch2 <= 'z')) {
		ch1 = ch2 - ('a' - 'A');
		printf("대문자: %c\t", ch1);
		printf("소문자: %c\n", ch2);
	}
	return 0;
}