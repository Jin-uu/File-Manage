#define DEBUG

#include <stdio.h>


int main(int argc, char *argv[]){
	FILE* file;

	file = fopen(argv[1],"w+");
	if(file == NULL){
		printf("파일을 생성하는데 실패했습니다. 종료합니다.\n");
		return 0;		
	}

}
