/*
	�Լ� ����
	�Լ� ����, �Լ� ȣ��, �Լ� ����
*/
#include <stdio.h>

//int func(int, int);			// �Լ�����, �Լ�����
int a, b;

int main()
{
	int a, b;
	char c;
	printf("���� ���α׷��Դϴ�. \n");
	printf("�ΰ��� ������ �Է��ϼ���.\n");
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	printf("�����ڸ� �Է��ϼ���.\n");
	scanf_s("%c", &c);
	int result = calc(a, b, c);
	printf("��갪: %d\n", result);

	//int result = calc(a, b);



	/*int result = func(10, 20);
	printf("ȣ�� �� ���ϵ� �� :%d\n", result);*/

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
	
