#include<stdio.h>
int main()
{
	char ABC[26];
	int i;
	for(i=0;i<26;i++)
	ABC[i]='a'+i;
	for(i=0;i<26;i++)
	printf("%c",ABC[i]);
	printf("\n"); 
	return 0;
}
