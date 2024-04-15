#include<stdio.h>

int DecimaltoOctal(int decmalNumber);

int main()
{
    int decimalNumber;

    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);

    printf("%d in Decimal = %d in octal", decimalNumber, DecimaltoOctal(decimalNumber));

    return 0;
}

int DecimaltoOctal(int decimalNumber){
    int octalNumber = 0, i = 1;

    while(decimalNumber != 0){
        octalNumber +=
            (decimalNumber % 8) * i;
            decimalNumber /= 8;
            i *= 10;

    }
    return octalNumber;
}
