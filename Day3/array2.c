///*
//array2
//*/
//#include <stdio.h>
//
//int main() 
//{
//	int ary[] = { 1, 2, 3 };
//
//	printf("배열의 크기: %d\n", sizeof(ary));
//	printf("배열 방 한개의 크기: %d\n", sizeof(ary[0]));
//	printf("배열 방의 갯수: %d\n", sizeof(ary)/sizeof(ary[0]));
//	printf("배열이름: %p\n", ary);
//	printf("배열의 첫번째 방 주소: %p\n", &ary[0]);		// 배열의 이름은 배열의 첫번째 방주소와 같다.
//	printf("배열의 두번째 방 주소: %p\n", ary + 1);
//	printf("배열의 두번째 방 주소: %p\n", &ary[1]);
//
//	return 0;
//}