#include<stdio.h>
#include<math.h>

int main() {
    int i, n, sum = 0;

    int t1 = 0, t2 = 1;
    int nextterm = t1+t2, allsum;
    allsum = nextterm;

    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("fibonacci series: %d, %d, ", t1, t2);
    sum = t1 + t2;

    for(i = 3; i <= n; i++){

        printf("%d,", nextterm);
        sum += nextterm;
        t1 = t2;
        t2 = nextterm;
        nextterm = t1 + t2;

    }

    printf("\nSum of the fibocci series is: %d", sum);

    return 0;
}
