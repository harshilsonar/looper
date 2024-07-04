#include<stdio.h>
#include<conio.h>

int main()
{
	int num,pro=0,first,last;
	printf("enter the value of num :");
	scanf("%d",&num);
	last=num%10;
	while(num>=10)
	{
		num=num/10;
	}
	first=num;
	pro=first+last;
	printf("add of first and last digit is %d",pro);
	
	return 0;
	
}
