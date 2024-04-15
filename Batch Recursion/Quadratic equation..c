#include<stdio.h>
#include<math.h>

int main(){
     float a, b, c;
     printf("Write the values:", a, b, c);
     scanf("%f %f %f", &a, &b, &c);
     float det = b*b - 4*a*c;

     if(det == 0){
        printf("Roots are equals\n");
        printf("x1 = %f\n", -b/(2*a));
        printf("X1 = %f\n", -b/(2*a));
     }
     else if(det > 0){
        printf("Roots are real but not equal\n");
        printf("x1= %f", (-b+(sqrt(det)))/(2*a));
        printf("x2= %f", (-b-(sqrt(det)))/(2*a));
     }
     else{
        printf("Roots are IMAGINARY\n");
     }

    return 0;
}
