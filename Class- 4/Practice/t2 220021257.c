#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder,n=0, sum = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    

    originalNum = num;

    // Calculate sum of 3rd power of each digit
    while (originalNum != 0) {
        remainder = originalNum % 10;
        sum += remainder*remainder*remainder;
        originalNum /= 10;
        
    }
    

    
    if (sum == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}

