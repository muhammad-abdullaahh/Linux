#include <stdio.h>

int main() {
    int x = 30;
   
    unsigned long long factorial = 1; 
    for(int i = 1; i <= x; i++) {
        factorial *= i;
    }

    printf("Factorial of %d is: %llu\n", x, factorial);
    return 0;
}
