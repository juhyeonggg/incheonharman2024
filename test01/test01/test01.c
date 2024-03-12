#include <stdio.h>

main()
{
	char vchar = 'f';
	int vint;
	long vlong;
	float vfloat;
	double vdouble;
	
	// 변수의 초기화
	vchar = 'f';
	vint = 10;
	vlong = 4000000000;
	vfloat = 3.14159265;
	vdouble = 314159265.123456789;

	printf("%8x, %8x, %8x, %8x\n, &vchar, &vint, &vlong, &vfloat");


	printf("\n\n\n\n\n안녕하세요?\n\n\n\n\n\n");
	printf("정수 출력 테스트 : [%12d]\n", 10); // 4byte
	printf("실수 출력 테스트 : %4.2f\n", 3.141592651234); // 4byte
	printf("긴 정수 출력 테스트 : %d\n", 10); // 4byte : 32bit = 1111 1111 1111 1111 1111 1111 1111 1111 = 4G(기가) = 40억
	printf("긴 실수 출력 테스트 : %12.8f\n", 3.141592651234); // 8byte
	
	printf("지수 출력 테스트 : [%12e]\n", 1234567890); // 4byte
	
	printf("16진수 출력 테스트 : [%12x]\n", 1234567890); // 4byte
	printf(" 8진수 출력 테스트 : [%12o]\n", 1234567890); // 4byte
	
	printf("문자열 출력 테스트 : [%s]\n", "\n안녕\n"); // 4byte
	printf("문자 출력 테스트 : [%c]\n", 50); // 1byte
	// 안녕하세요?
}