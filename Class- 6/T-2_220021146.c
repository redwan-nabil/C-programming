#include<stdio.h>

void bubbleSort(int array[], int size);
void printArray(int array[], int size);

int main(){
    int size, i;
    printf("Size: ");
    scanf("%d", &size);
    int array[size];


    for(int i= 0; i<size; i++){
        scanf("%d", &array[i]);
    }

    bubbleSort(array, size);

    printf("%d", array[i]);


    return 0;
}

void bubbleSort(int array[], int size){

    for(int step = 0; step < size-1; ++step){
        for(int i = 0; i< size - step -1; ++i){
            if(array[i] > array[i+1]){
                int temp = array[i];
                array[i] = array[i+1];
                array[i+1] = temp;
            }
        }
    }
}

