#include<stdio.h>
int sum(int n)
{
	if(n==0)
	{
		return 0;
	}
	else
	{
		return n%10+sum(n/10);
	}
	printf("\n");
	return 0;
}
int main()
{
	int n;
	printf("enter\n");
	scanf("%d",&n);
	int result=sum(n);
	printf("%d",result);
	return 0;
}
