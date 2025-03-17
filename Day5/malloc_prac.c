//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	char str[100];
//	char* ps[5];
//	printf("문자열 입력 > ");
//	gets(str);
//	printf("입력한 문자열: %s\n", str);
//
//	ps[0] = (char*)malloc(strlen(str) + 1);
//	if (ps == NULL) {
//		exit(1);
//	}
//	strcpy(ps, str);
//	printf("힙: %s\n", ps);
//
//	free(ps);
//	printf("\n");
//	
//
//	return 0;
//}