#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	void *p = 0;
    int mb = 0;
    while((p = malloc(100*1024*1024))){
        mb++;    
    }
    mb *= 100;
    printf("%dmb\n",mb);
    int gb = mb/1024;
    mb = mb % 1024;
    printf("memory:%dGB,%dMB\n",gb,mb);
    return 0;
 } 
