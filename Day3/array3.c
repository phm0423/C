///*
//array3
//*/
//#include <stdio.h>
//
//int main()
//{
//	char str[100] = "banana";
//	char str2[6] = "apple";		// char �迭�� ����ô�  +1��ŭ�� ���� �ʿ��ϴ�.
//	char str3[7] = { 'o', 'r', 'a', 'n', 'g', 'e' };
//	char str4[4];
//	str4[0] = 'a';
//	str4[1] = 'b';
//	str4[2] = 'c'; str4[3] = '\0';
//
//	printf("str: %s\n", str);
//	printf("str2: %s\n", str2);
//	printf("str3: %s\n", str3);
//	printf("str3[6]: %s\n", str3[6]);
//	printf("str4: %s\n", str4);
//	printf("str ������ ��: %s\n", str[10]);
//	
//	// str = str2;
//	strcpy(str, str2);
//	printf("str: %s\n", str);
//
//	strcpy(str, "dog");
//	printf("str: %s\n", str);
//
//	str[0] = 'D';
//	printf("str: %s\n", str);
//
//	return 0;
//}