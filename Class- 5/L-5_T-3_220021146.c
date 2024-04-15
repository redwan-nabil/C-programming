#include<stdio.h>

int main(){

int n;
scanf("%d",&n);
int k = n-1;
int l=n+(n-1);
for (int i=1;i<=l;i++){
    if(i<=n){
        for(int j=1;j<=i;j++){
            printf("%d",j);
            if(j==i){
                printf("\n");
            }
        }
    }else{
    for(int m=1;m<=k;m++){
        printf("%d",m);
        if(m==k){
            printf("\n");
        }
    }
    k--;
    }
}

return 0;
}


