#include<stdio.h>
int prime(int n)
{
	if(n<=1)
	{
		return 0;
	}
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int n;
	printf("Enter the no");
	scanf("%d",&n);
	int result=prime(n);
	if(prime(n))
	{
		printf("%d prime\n",n);
	}
	else
	{
		printf("%d not prime",n);
	}
	return 0;
}