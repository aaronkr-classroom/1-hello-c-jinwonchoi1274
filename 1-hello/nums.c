#include <stdio.h>
#include <limits.h> //최대값/최소값 볼 때

int main(void) {
	//char
	char ch = 'A';
	printf("char:\n");
	printf("value : %c\n",ch);
	printf("max: %d\n",CHAR_MAX);
	printf("min: %d\n",CHAR_MIN);

	//signed short int
	signed short int sshort = 1234;
	printf("\nsigned short int:\n");
	printf("value : %d\n", sshort);
	printf("max: %d\n", SHRT_MAX);
	printf("min: %d\n", SHRT_MIN);

	//unsigned short int
	unsigned short int ushort = 1234U;
	printf("\nsigned short int:\n");
	printf("value : %u\n", ushort);
	printf("max: %d\n", USHRT_MAX);

	//signed int
	signed int sint = 12345;
	printf("\nsigned int:\n");
	printf("value : %c\n", sint);
	printf("max: %d\n", INT_MAX);
	printf("min: %d\n", INT_MIN);

	//signed long int
	signed long int lint = 123456789L;
	printf("\nsigned long int:\n");
	printf("value : %c\n", sint);
	printf("max: %d\n", LONG_MAX);
	printf("min: %d\n", LONG_MIN);

	//unsigned long int
	unsigned int uint = 1234576789UL;
	printf("\nsigned int:\n");
	printf("value : %d\n", uint);
	printf("max: %d\n", ULONG_MAX);

	return 0;
}