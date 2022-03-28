#include <stdio.h>
#include <stdlib.h>

int main(void){
	char* one = "10";
	char two = '2';
	char three = '3';
	// int first = atoi(one);
	int sec = (int)one;
	int third = (int)one;

	char* str[] = {"12", "234", "3456"};
	int first = atoi(str[1]);

	char ctr[] = "1234567";


	printf("%s\n", ctr);
	printf("%s\n", str[0]);
	printf("%s\n", str[1]);
	printf("%s\n", str[2]);
	printf("%s\n", str);

	printf("%d\n", sizeof(ctr));
	printf("%d\n", sizeof(str[0]));
	printf("%d\n", sizeof(str[1]));
	printf("%d\n", sizeof(str[2]));
	printf("%d\n", sizeof(str));
	return 0;
}
