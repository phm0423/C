#include <stdio.h>
int main()
{
	char str[20];
	int age;
	printf("���̿� �̸��� �Է��ϼ���");
	scanf_s("%d%s", &age,str);
	//printf("�̸�: ");
	//scanf_s("%s", str, sizeof(str));

	printf("����: %d, �̸�: %s\n", age, str);

	return 0;
}