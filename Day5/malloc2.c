//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	char str[100];
//	char* ps;
//	printf("���ڿ��� �Է��ϼ���>> ");
//	gets(str);
//	printf("�Է��� ���ڿ�: %s\n", str);
//
//	/* ���ڿ� ���� */
//	ps = (char*)malloc(strlen(str) + 1);		// �Էµ� ���ڿ��� ������ ������ �����κ��� �Ҵ�޴´�.
//	if (ps == NULL) {
//		exit(1);
//	}
//	strcpy(ps, str);							// ���ڿ� ����
//	printf("heap: %s\n", ps);
//
//	free(ps);									// ���� �޸� ��ȯ
//
//	return 0;
//}