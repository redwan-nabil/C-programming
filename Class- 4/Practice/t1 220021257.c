#include<stdio.h>
int main()
{
  printf("Input the number of the term");
  int a;
  double num,sum;
  scanf("%d",&a);
  printf("The seris is:");
  for (int i = 0; i < a; i++)
  { num = num * 10 + 9;
        printf("%lf ", num);
    sum=sum+num;
  }
   printf("The sum of the seris is %lf",sum);
  
    return 0;
}