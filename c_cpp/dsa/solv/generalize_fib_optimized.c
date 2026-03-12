#include <stdio.h>


void gen_fib(int num, int N);

int main()
{
    int num,N;

    printf("Enter Num:\n");
    scanf("%d",&num);

    printf("Enter N:\n");
    scanf("%d",&N);

    gen_fib(num,N);
    return 0;
}

void gen_fib(int num,int N)
{
    int arr[N];
    arr[0] = 0;
    arr[1] = 1;
    for(int i=0;i<2;i++)
    {
        printf("%d ",arr[i]);
    }
    //generate missing elements;
    if(num>2)
    {
        //printf("%d ",arr[0]);
        //printf("%d ",arr[1]);
        for(int i=2;i<num;i++)
        {
            arr[i] = i;
            printf("%d ",arr[i]);
        }
    }
    
    int tmp_sum= 0;
    //calculate the numth element 
    for(int i=0;i<num;i++)
    {
        tmp_sum+=arr[i];
    }
    arr[num] = tmp_sum;
    printf("%d ",arr[num]);
    //calculate and print the series
    for(int i = num+1;i<N;i++)
    {
        arr[i]= 2*arr[i-1]-arr[i-1-num];
        printf("%d ",arr[i]);
    }
    printf("\n");
}