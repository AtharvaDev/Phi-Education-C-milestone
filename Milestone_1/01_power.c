#include <stdio.h>
#include <math.h>

int main(){
    double power;
    int x;
    int n;
    printf("Enter a number: ");
    scanf("%d", &x);
	  printf("Enter the power: ");
    scanf("%d", &n);
    power = pow(x, n);
    printf("%d to the power %d is %f",x,n,power);
    return 0;
}

