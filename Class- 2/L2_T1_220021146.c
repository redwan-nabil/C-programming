#include<stdio.h>

int main(){
    int p, c, b, m, com;
    int total;
    int g;
    Printf("Enter marks in physics: ");
    scanf("%d", &p);
    Printf("\nEnter marks in Chemistry: ");
    scanf("%d", &c);
    Printf("\nEnter marks in Biology: ");
    scanf("%d", &b);
    Printf("\nEnter marks in Mathematics: ");
    scanf("%d", &m);
    Printf("\nEnter marks in Computer: ");
    scanf("%d", &com);

    total = p + c + b + m + com;
    printf("\nTotal marks: %d", total);
    printf("\nPercentage: %d%%", (100 * total) / 500);

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
