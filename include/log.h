#include <stdio.h>

#define MyPrint(level,log_fmt,...) \
	printf("L(5,FATAL)[%s:%d][%s] \n"log_fmt"\n", __FILE__, __LINE__, __FUNCTION__, ##__VA_ARGS__);
