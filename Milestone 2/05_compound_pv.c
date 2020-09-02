#include <stdio.h>
#include <math.h>
int main()
{
	double FV, PV, a;
	int np,rate;
	printf("Enter the rate of interest: ");
	scanf("%u",&rate);
	printf("Enter the Future Value: ");
	scanf("%lf",&FV);
	printf("Enter the no. of periods: ");
	scanf ("%d",&np);
	a= pow(1+rate,np);
	PV = FV*a;
	printf("Present value is %.2lf",FV);
	return 0;
	
}
