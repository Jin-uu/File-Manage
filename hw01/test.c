#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
	FILE* file = fopen("testFile4.txt", "r+");
	
	if(file == NULL){
		printf("Failed to open file...\n");
		return 0;
	}

	int c[1];
	c[0] = getc(file);
	printf("%c ",c[0]);
	
	fwrite(c,sizeof(char),strlen(c),file);
	c[0] = getc(file);
	printf("%c ",c[0]);
	
	fwrite(c,sizeof(char),strlen(c),file);
	c[0] = getc(file);
	printf("%c ",c[0]);
	
	fwrite(c,sizeof(char),strlen(c),file);
	c[0] = getc(file);
	printf("%c ",c[0]);
	
	fwrite(c,sizeof(char),strlen(c),file);
	c[0] = getc(file);
	printf("%c ",c[0]);
	
	fwrite(c,sizeof(char),strlen(c),file);

	fclose(file);

	return 0;
}
