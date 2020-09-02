#include <stdio.h>

int main()
{
	int a,b,gcd,i;
	printf("Enter two numbers.: \n");
	scanf("%d%d",&a,&b);
	for(i=2;i<=a && i<=b;i++)
	{
		if(a%i==0 && b%i==0)
			gcd=i;
	}
	printf("GCD of %d and %d is %d",a,b,gcd);
	return 0;
}
