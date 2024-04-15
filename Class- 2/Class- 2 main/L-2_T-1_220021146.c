#include<stdio.h>

int main(){
    int p, c, b, m, com;
    int total;
    int g;
    printf("Enter marks in physics: ");
    scanf("%d", &p);
    printf("\nEnter marks in Chemistry: ");
    scanf("%d", &c);
    printf("\nEnter marks in Biology: ");
    scanf("%d", &b);
    printf("\nEnter marks in Mathematics: ");
    scanf("%d", &m);
    printf("\nEnter marks in Computer: ");
    scanf("%d", &com);

    total = p + c + b + m + com;
    g = ((100 * total) / 500);

    printf("\nTotal marks: %d", total);
    printf("\nPercentage: %d%%", g);

    if(g >= 80){
        printf("Grade: A+");
    }
    if(g >= 75 && g < 80){
        printf("Grade: A");
    }
    if(g >= 70 && g < 75){
        printf("Grade: B");
    }
    if(g >= 65 && g < 70){
        printf("Grade: C");
    }
    if(g >= 60 && g < 65){
        printf("Grade: D");
    }
    if(g < 60){
        printf("Grade: F");
    }

    return 0;
}
