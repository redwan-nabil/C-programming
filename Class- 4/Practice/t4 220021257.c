#include<stdio.h>
#include<math.h>

int main() {
    int bin, sum = 0, remainder, n;
    int i = 0;
    
    printf("Enter the binary number: ");
    scanf("%d", &bin);
    
    while (bin != 0) {
        remainder = bin % 10;
        sum += remainder * pow(2, i);
        bin /= 10;
        i++;
    }
    
    printf("The Decimal format is %d\n", sum);

    return 0;
}
