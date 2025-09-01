#include<stdio.h>
int main()
{
    char str[30];
	printf("enter a message:");
	scanf("%[^\n]s",str);
	printf("%s",str);
	return 0;	
}