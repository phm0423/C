///*
//	함수 포인터
//*/
//# include <stdio.h>
//
//int sum(int, int);
//int minus(int, int);
//
//int main()
//{
//	int(*fp)(int, int);
//	int res;
//	////res = sum(20, 10);
//	////res = minus(20, 10);
//	//fp = sum;
//	//res = fp(20, 10);
//	//printf("res: %d\n", res);
//	int a, b;
//	scanf_s("연산할 정수를 입력: %d, %d", &a, &b);
//	func(fp, a, b);
//	printf("연산값: %d\n", res);
//	return 0;
//}
//
//int sum(int a, int b)
//{
//	int res = a + b;
//	return res;
//}
//
//int minus(int a, int b)
//{
//	int res = a - b;
//	return res;
//}
//
//void func(int(*fp)(int, int), int a, int b)
//{
//	int opt;
//	int res;
//	scanf_s("옵션번호 입력(1: +, 2: -): %d", &opt);
//	if (opt == 1)
//	{
//		fp = sum;
//		res = fp(a, b);
//		return res;
//	}
//	else if (opt == 2)
//	{
//		fp = minus;
//		res = fp(a, b);
//		return res;
//	}
//	
//	return 0;
//}