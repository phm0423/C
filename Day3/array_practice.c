///*배열 5개로 입력하여 값을 넣고 합구하기*/
//#include <stdio.h>
//
//int main()
//{
//	int scr;
//	int sum = 0;
//	int avg;
//
//	int ary[5];
//	//scanf_s();
//	
//	for (int j = 0; j < 5; j++) {
//		printf("%d번째 점수 입력: ", j+1);
//		scanf_s("%d", &scr);
//		ary[j] = scr;
//	}
//
//	for (int i = 0; i < 5; i++) {				// 성적 목록 출력
//		printf("성적 목록: %d\t", ary[i]);
//	}
//
//	for (int i = 0; i < 5; i++) {				// 성적 합계 출력
//		sum = sum + ary[i];
//	}
//	printf("\n성적 합계: %d\n", sum);
//
//	
//	avg = sum / (sizeof(ary)/sizeof(ary[0]));					// 성적 평균 출력
//	printf("성적 평균: %d\n", avg);
//	return 0;
//}