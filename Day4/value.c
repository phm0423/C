///*
//
//*/
//#include <stdio.h>
//void incFunc();
//
//int cnt = 0;								// 전역변수는 별도로 초기화 하지 않으면 0으로 자동 초기화.
//
//int main()
//{
//	// int cnt = 0;						// local 지역변수
//	for (int i = 0; i < 5; i++) {
//		incFunc(cnt);
//		printf("cnt: %d\n", cnt);
//	}
//	cnt++;
//	printf("cnt: %d\n", cnt);
//	return 0;
//}
//void incFunc()
//{
//	cnt++;
//	printf("incFunc cnt: %d\n", cnt);
//}