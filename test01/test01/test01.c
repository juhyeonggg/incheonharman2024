#include <stdio.h>

main()
{
	char vchar = 'f';
	int vint;
	long vlong;
	float vfloat;
	double vdouble;
	
	// ������ �ʱ�ȭ
	vchar = 'f';
	vint = 10;
	vlong = 4000000000;
	vfloat = 3.14159265;
	vdouble = 314159265.123456789;

	printf("%8x, %8x, %8x, %8x\n, &vchar, &vint, &vlong, &vfloat");


	printf("\n\n\n\n\n�ȳ��ϼ���?\n\n\n\n\n\n");
	printf("���� ��� �׽�Ʈ : [%12d]\n", 10); // 4byte
	printf("�Ǽ� ��� �׽�Ʈ : %4.2f\n", 3.141592651234); // 4byte
	printf("�� ���� ��� �׽�Ʈ : %d\n", 10); // 4byte : 32bit = 1111 1111 1111 1111 1111 1111 1111 1111 = 4G(�Ⱑ) = 40��
	printf("�� �Ǽ� ��� �׽�Ʈ : %12.8f\n", 3.141592651234); // 8byte
	
	printf("���� ��� �׽�Ʈ : [%12e]\n", 1234567890); // 4byte
	
	printf("16���� ��� �׽�Ʈ : [%12x]\n", 1234567890); // 4byte
	printf(" 8���� ��� �׽�Ʈ : [%12o]\n", 1234567890); // 4byte
	
	printf("���ڿ� ��� �׽�Ʈ : [%s]\n", "\n�ȳ�\n"); // 4byte
	printf("���� ��� �׽�Ʈ : [%c]\n", 50); // 1byte
	// �ȳ��ϼ���?
}