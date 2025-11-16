#include <stdio.h>


int main()
{
    int arr[5] = {1,2,3,4,5};
    int start = 0;
    int end = 4;

    for(int i = 0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
    while(start<end)
    {
        int tmp = arr[start];
        arr[start] = arr[end];
        arr[end] = tmp;
        start++;
        end--;
    }
    printf("\n");

    for(int i = 0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
    
    printf("\n");
}