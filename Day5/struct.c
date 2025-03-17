///*
//	struct(구조체) - 사용자 정의 자료형
//	기존 자료형을 묶어서 만든 복합 자료형(타입)
//*/
//#include <stdio.h>
//#include <string.h>
//#define _CRT_SECURE_NO_WARNINGS
//
//struct Human {					// 구조체 선언 struct 구조체명
//	char name[100];				// 멤버 변수
//	int age;					// 멤버 변수 
//};
//
//int main()
//{
//	/* . 멤버 접근연산자 */
//	struct Human h;		// human 구조체의 변수 h 선언
//	h.age = 30;			// h객체의 멤버 age에 30을 저장한다.
//	//h.name = "hong kildong"
//	strcpy(h.name, "hong kildong");
//	
//	//char str[100] = "hong kildong";
//	//printf("%s\n", str);
//	//char str2[100];
//	//str2 = "kom chulsul";
//
//	printf("나의 이름은 %s이고, 나이는 %d입니다.", h.name, h.age);
//	return 0;
//}