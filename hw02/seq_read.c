#define DEBUG
#include <stdio.h>
#include <sys/time.h>

//필요하면 header file 추가 가능


//
// input parameters: 레코드 파일
//
float time_diff(struct timeval *start, struct timeval *end){
    return (end->tv_sec - start->tv_sec) + 1e-6*(end->tv_usec - start->tv_usec);
}

int main(int argc, char **argv){
	// 레코드 파일로부터 전체 레코드를 순차적으로 읽어들이고, 이때
	// 걸리는 시간을 측정하는 코드 구현
	FILE* target_file;
	char* file_name;
	#ifdef DEBUG
	file_name = "test_case_01.txt";
	#endif

	#ifndef DEBUG
	file_name = argv[1];	
	#endif

	struct timeval startTime, endTime;
	double diffTime;

	gettimeofdat(&startTime, NULL);

	target_file = fopen(file_name, "r");
	if(target_file == NULL){
		printf("error!!");
		return 0;
	}

	char curr_c;
	curr_c = getc(target_file);
	while (curr_c != EOF){
		curr_c = getc(target_file);
		#ifdef DEBUG
		printf("%c",curr_c);
		#endif
	}

	gettimeofday(&endTime, NULL);
	printf("%d usec", time_diff(&startTime,&endTime)*1000.0);

	return 0;
}
