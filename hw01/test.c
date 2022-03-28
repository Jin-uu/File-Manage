#include <stdio.h>
#include <stdlib.h>

int main(void){
	char* one = "10";
	char two = '2';
	char three = '3';
	// int first = atoi(one);
	int sec = (int)one;
	int third = (int)one;

	char* str[3] = {"123", "234", "345"};
	int first = atoi(str[1]);


	printf("%d\n", first);
	return 0;
}
