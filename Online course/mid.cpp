#include <stdio.h>
void swap(int &x, int &y)
{
    int a = x;  
    x = y;      
    y = a;
}
void print(int arr[])
{
    for (int i = 0; i < 7; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main()
{

    int arr[] = {1, 99, 12, 13, -5, 100, -8};
    int size = 7;
    for (int i = 0; i <= size - 2; i++) // 5
    {
        for (int k = 0; k <= size - 2; k++)
        {
            if (arr[k] < arr[k + 1])
            {
                swap(arr[k + 1], arr[k]);
            }
        }
        print(arr);
    }
    
}
