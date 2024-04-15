#include<stdio.h>

int main(){
    int a, b, GCD, R, L, S, N, D;

    printf("Enter the Numerator: ");
    scanf("%d", &a);
    printf("Enter the Denomerator: ");
    scanf("%d", &b);

    if(a>b){
        L = a;
        S = b;
    }
    else{
        L = b;
        S = a;
    }

    while(S != 0){
        R = L%S;
        L = S;
        S = R;
    }

    GCD = L;
    N = a/GCD;
    D = b/GCD;

    printf("%d/%d", N, D);

    return 0;
}
