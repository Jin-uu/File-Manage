#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// #define DEBUG
// 필요하면 header 파일 추가 가능

//
// input parameters: 학생 레코드 수, 레코드 파일
// a.out <#records> <record_file_name>
int main(int argc, char **argv) {
	int records_num;
	char* file_name;	
	FILE* new_file;

	#ifdef DEBUG
	records_num = 3;
	file_name = "test_case_00.txt";
	#endif

	#ifndef DEBUG
	records_num = atoi(argv[1]);
	file_name = argv[2];	
	#endif
	
	new_file = fopen(file_name, "w+");

	char* buffer;
	buffer = "1234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789/";
	
	for (int i = 0; i < records_num; i++){
		fwrite(buffer, sizeof(char), 200, new_file);
	}	

	// 사용자로부터 입력 받은 레코드 수 만큼의 레코드 파일을 생성하는 코드 구현
	
	// 파일에 '학생 레코드' 저장할 때 주의 사항
	// 1. 레코드의 크기는 무조건 200 바이트를 준수
	// 2. 레코드 파일에서 레코드와 레코드 사이에 어떤 데이터도 들어가면 안됨
	// 3. 레코드에는 임의의 데이터를 저장해도 무방
	// 4. 만약 n개의 레코드를 저장하면 파일 크기는 정확히 200 x n 바이트가 되어야 함

	return 0;
}