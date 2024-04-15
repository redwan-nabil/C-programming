#include<stdio.h>
int main (){
int n;
scanf("%d",&n);
for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        if(i==1 || i==n){
            printf("-");
        }else if(i%2==0){
            if(j%2==0){
                printf("-");
            }else if(j==1 || j%2!=0){
                printf("+");
            }
        }else{
             if(j%2==0){
                printf("+");
            }else if(j==1 || j%2!=0){
                printf("-");
            }
        }

    }


            printf("\n");

}
  return 0;
}
