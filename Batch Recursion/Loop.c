#include<stdio.h>
#include<math.h>

int main(){
   int n;
   scanf("%d", &n);
   for(int j=2; j<=n; j++){
    int temp=0;
    for(int i=1; i<j; i++){
        if(j % i == 0){
            temp = 1;
        }
    }
    if(temp == 0){
        printf("%d", j);
    }
   }
   return 0;
}
