#include <stdio.h>

int main()
{
	printf("숫자 키를 입력하시오. 해당하는 영단어를 알려드리겠습니다.\n");
	printf(">");
	char c = getch(); // no echo(키값을 출력하지 않고 반환

	if (c == '1')
		printf("One\n");

}