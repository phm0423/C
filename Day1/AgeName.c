#include <stdio.h>
int main()
{
	char str[20];
	int age;
	printf("나이와 이름을 입력하세요");
	scanf_s("%d%s", &age,str);
	//printf("이름: ");
	//scanf_s("%s", str, sizeof(str));

	printf("나이: %d, 이름: %s\n", age, str);

	return 0;
}