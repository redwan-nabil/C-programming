#include<stdio.h>

int main(){
    int size, index, value;

    printf("Size:");
    scanf("%d", &size);
    int array[size+1];

    for(int i = 0; i< size; i++){
       scanf("%d", &array[i]);
    }

    printf("Index: ");
    scanf("%d", &index);

    printf("Value:");
    scanf("%d", &value);

    for(int i= size-1; i>= index; i--){
        array[i+1] = array[i];
    }

    array[index] = value;

    printf("Output array is: ");
    for(int i= 0; i<=size-1; i++){
        printf("%d, ", array[i]);
    }


    return 0;
}





