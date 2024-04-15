#include <stdio.h>

int main() {
    int a, b, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    
    if (a == 0 || b == 0) {
        lcm = 0;
    } else {
        
        int larger = (a > b) ? a : b;

        // Start iterating from the larger number
        for (lcm = larger; ; lcm += larger) {
            if (lcm % a == 0 && lcm % b == 0) {
                break;
            }
        }
    }

    printf("LCM of %d and %d is: %d\n", a, b, lcm);

    return 0;
}
