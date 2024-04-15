#include<stdio.h>
int main(){
    int n,cnt=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=5;j++){
            if(i==1 || i==n){
                if(j==3) printf("*");
                else printf(" ");
            }
            else if(i==2 || i==n-1){
                if(j==2 || j==4) printf("*");
                else printf(" ");
            }
            else {
                if(j%2!=0) {
                        printf("*");
                        cnt++;
                }
                else printf(" ");
            }
        }
        printf("\n");
        cnt=0;
    }
    return 0;
    }
