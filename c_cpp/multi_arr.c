#include <stdio.h>

int main()
{
    int arr[4] = {1,2,3,4};
//100 104 108 112
    for(int i = 0;i<4;i++)
    {

            printf("%d ",arr[i]);
    }
printf("\n");
    printf("%p\n",arr);
    printf("%p\n",&arr[0]);
    printf("%p\n",&arr[2]);
    printf("%d\n",&arr[2]-&arr[0]);

    //printf("%p\n",&arr);
    //printf("%d\n",&arr);
    //printf("%p\n",&arr+1);
    //printf("%p\n",*(&arr+1));

    //printf("%d\n",*(&arr+1)-arr);

}