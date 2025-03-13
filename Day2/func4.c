/*
	함수 원형
	함수 원형, 함수 호출, 함수 정의
*/
#include <stdio.h>

//int func(int, int);			// 함수선언, 함수원형
int a, b;

int main()
{
	int a, b;
	char c;
	printf("계산기 프로그램입니다. \n");
	printf("두개의 정수를 입력하세요.\n");
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	printf("연산자를 입력하세요.\n");
	scanf_s("%c", &c);
	int result = calc(a, b, c);
	printf("계산값: %d\n", result);

	//int result = calc(a, b);



	/*int result = func(10, 20);
	printf("호출 후 리턴된 값 :%d\n", result);*/

	return 0;
}

//int func(int a, int b) {
//	int res = a + b;
//	return res;
//}

int plus(int a, int b) {
	int res = a + b;
	return res;
}

int mins(int a, int b) {
	int res = a - b;
	return res;
}

int mply(int a, int b) {
	int res = a * b;
	return res;
}

int divd(int a, int b) {
	float res = a / b;
	return res;
}

int calc(char c) {
	if (c == '+') {
		int result = plus(a, b);
	}
	else if (c == '-') {
		int result = mins(a, b);
	}
	else if (c == '*') {
		int result = mply(a, b);
	}
	else if (c == '/') {
		int result = divd(a, b);
	}

}
	
