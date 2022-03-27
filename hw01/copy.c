#define DEBUG

#include <stdio.h>


int main(int argc, char *argv[]){
	FILE* copy_file;
	FILE* original_file;

	original_file = fopen(argv[1], "r");
	if(original_file == NULL){
		printf("파일을 여는데 실패했습니다. 종료합니다.\n");
		return 0;
	}

	copy_file = fopen(argv[0],"w+");
	if(copy_file == NULL){
		printf("파일을 생성하는데 실패했습니다. 종료합니다.\n");
		fclose(original_file);
		return 0;		
	}






}
