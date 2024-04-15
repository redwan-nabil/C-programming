#include<stdio.h>
#include<math.h>

int main(){

    int num, w, x, y, z;
    scanf("%d", &num);

    int n= (int)log10(num);
    n++;
    printf("%d", n);
    int temp = num;
    w= temp/1000;
    temp = temp % 1000;
    x= temp/100;
    temp = temp % 100;
    y= temp/10;
    z= temp % 10;

    printf("%d %d %d %d\n", w, x, y, z);
    int check = pow(w, n) + pow(x, n) + pow(y, n) + pow(z, n);

    if(check == num){
        printf("This is an armstrong number");
    }
    else{
        printf("This is not an armstrong number");
    }

    return 0;
}
