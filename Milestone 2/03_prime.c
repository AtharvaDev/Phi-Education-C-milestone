#include <stdio.h>

int main() { 
    int i;
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);

    for(i = 2; i < x; i++) {
      if((x % i) == 0) {
        printf("%d is not a prime number.", x);
        break;
        }
      else{
        printf("%d is prime number.", x);
        break;
      }
    }

   return 0;
}
