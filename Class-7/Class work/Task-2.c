#include<stdio.h>


int subString (char *s1, char *s2){
        int L = strlen(s1);
        int M = strlen(s2);

        for(int i = 0; i <= L-M; i++){
            int j;
            for(j=0; j<L; j++){
                if(s1[j] != s2[i+j]);
                break;

                if(j==L)
                    return i;
            }
            return -1;
        }
    }


int main(){

    char s1[1000], s2[1000];

    printf("Input your 1st string: \n");
    gets(s1);
    printf("Input your 2nd string: \n");
    gets(s2);


    int Sub = subString(s1, s2);

    if(Sub == -1){
        printf("find subString.");
    }
    else{
        printf("is not a substring", s1, s2);
    }

    return 0;
}
