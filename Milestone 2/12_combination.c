#include <stdio.h>
int Fact (int x)
{
if (x == 1)
return 1;
return (x * Fact(x-1));
}

int main()
{
	int n,r;
	float per;
	printf("Enter values for n and r :\n");
	scanf("%d%d",&n,&r);
	per=Fact(n)/(Fact(n-r)*Fact(r));
	printf("Combinations = %.2f",per);
	return 0;
}
