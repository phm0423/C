///*
//*/
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//#define _CRT_SECURE_NO_WARNINGS
//
//struct mystruct {
//	char name[20];
//	int age;
//	double height;
//	char* str;
//};
//
//int main()
//{
//	struct mystruct s;						// mystruct ����ü ���� ����
//	strcpy_s(s.name, sizeof(s.name), "ȫ�浿");
//	s.age = 30;
//	s.height = 170;
//	s.str = (char*)malloc(sizeof(100));
//	printf("�λ縻: ");
//	gets(s.str);
//
//	printf("�̸�: %s\n", s.name);
//	printf("����: %d\n", s.age);
//	printf("Ű: %.1lf\n", s.height);
//	printf("�λ縻: %s\n", s.str);
//
//	free(s.str);
//
//	return 0;
//}