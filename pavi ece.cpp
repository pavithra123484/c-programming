#include<stdio.h>
int main()
{
	int a;
	printf("enter a number:");
	scanf("%d",&a);
	printf("%d",a);
	if(a>99&& a<=999)
	  {
	  	printf("three digit number");
			}
			else
			{
				printf("not three digit number");
			}
			return 0;
}
