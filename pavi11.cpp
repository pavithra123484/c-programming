#include<stdio.h>
int main()
{
	int num1,num2,num3;
	printf("enter a number:");
	scanf("%d %d %d",&num1,&num2,&num3);
	if(num1>= num2 && num2>=num3)
	{
		printf("the greatest number is: %d\n",num1);
	}
 else if(num2>=num1 && num2>=num3)
	{
		printf("the greater number is given:%d\n",num2);
	}
	else
	{
		printf("the greater number is given:%d\n",num3);
		return 0;
	}
	
}