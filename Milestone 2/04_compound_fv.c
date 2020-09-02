#include <stdio.h>
#include <math.h>
int main()
{
	double FV, PV, a;
	int np,rate;
	printf("Enter the rate of interest: ");
	scanf("%u",&rate);
	printf("Enter the Present Value: ");
	scanf("%lf",&PV);
	printf("Enter the number of periods: ");
	scanf ("%d",&np);
	a= pow(1+rate,np);
	FV = PV*a;
	printf("Future value is %.2lf",FV);
	return 0;
	
}
