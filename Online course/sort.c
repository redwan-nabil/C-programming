#include <stdio.h>

int main()
{

    int arr[] = {1, 99, 12, 13, -5, 100, -8};
    int size = 7;
    for (int i = 0; i <= size - 2; i++) 
    {
        for (int k = 0; k <= size - 2; k++)
        {
          if (arr[k] > arr[k + 1])
            {
                int toha = arr[k];
                arr[k] = arr[k + 1];
                arr[k + 1] = toha;
            }
        }
    }
   for (int i = 0; i < 7; i++)
   {
    printf("%d\t",arr[i]);
   }
    
}
