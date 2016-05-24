#include<stdio.h>
#include<string.h> 
#define A "DADADAD"
int main()
{   
    const char*a="565655" ;
	printf("sizeof(char)=%d\n",sizeof(char));
	printf("sizeof(short)=%d\n",sizeof(short));
	printf("sizeof(int)=%d\n",sizeof(int));
	printf("sizeof(long)=%d\n",sizeof(long));
	printf("sizeof(long long)=%d\n",sizeof(long long));
	printf("%d\n",strlen(A));
	printf("%d\n",sizeof(A));
	printf("%d\n",strlen(a));
	return 0;
}
