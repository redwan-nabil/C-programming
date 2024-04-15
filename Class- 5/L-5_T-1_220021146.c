#include <stdio.h>
#include <math.h>

float fact(int number) {
    int result = 1;
    for (int i = 1; i <= number; i++)
        result *= i;
    return result;
}

int main()
{
    int n, x;
    scanf("%d %d", &x, &n);

    float sum = 0;
    for (int i = 0; i <= n; i++) {
        printf("(%d^%d)/(", x, i);

        for (int j = i; j > 0; j--) {
            printf("%d", j);
            if (j > 1)
                printf(" * ");
            else
                printf(")");
        }
        if (i == 0)
            printf("1)");
        if (i != n)
            printf(" + ");
        else
            printf(" = ");

        sum += pow(x, i) / fact(i);
    }
    printf("%f", sum);
}
