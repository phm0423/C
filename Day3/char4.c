/*
	��ҹ��� ��ȣ��ȯ��
*/
#include <stdio.h>

int main()
{
	char aa;
	
	printf("���ڸ� �Է��Ͻÿ�.: ");
	scanf_s("%c", &aa, 1);
	
	char ch1;
	char ch2 = aa;

	if ((ch2 >= 'A') && (ch2 <= 'Z')) {
		ch1 = ch2 + ('a' - 'A');
		printf("�빮��: %c\t", ch2);
		printf("�ҹ���: %c\n", ch1);
	}
	else if ((ch2 >= 'a') && (ch2 <= 'z')) {
		ch1 = ch2 - ('a' - 'A');
		printf("�빮��: %c\t", ch1);
		printf("�ҹ���: %c\n", ch2);
	}
	return 0;
}