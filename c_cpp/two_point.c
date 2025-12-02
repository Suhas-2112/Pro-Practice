#include <stdio.h>
#include <limits.h>
#include <cstdlib>
/*
You are given a sorted array of integers arr[] and a positive integer k. Find the maximum sum of any pair (arr[i], arr[j]) such that i < j and arr[j] - arr[i] <= k.
Return the maximum such sum. If no such pair exists, return -1.
*/
// Macro to get maximum of two numbers
#define max(a,b) ((a)>(b)?a:b)

// Function to find maximum sum of a pair (arr[i], arr[j]) 
// such that i < j and arr[j] - arr[i] <= k
int maxPairSumWithDiff(int* arr, int arrSize, int k) {
    int max_r = 0;
    int right = 1;
    int left = 0;
    while(right<arrSize)
    {
        
        if(arr[right]-arr[left]<=k)
        {
            max_r = max(max_r,arr[right]+arr[left]);
            right++;
        }
        else{
            left++;
            if(right==left)
        {
            right++;
        }
        }
    }
    return max_r;
}

int main() {
    int arr[] = {1, 3, 4, 6, 8, 10};
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    int k = 4;
    int * arru= (int*)malloc(90);
    free(arru);

    int result = maxPairSumWithDiff(arr, arrSize, k);
    printf("Maximum pair sum with difference <= %d is: %d\n", k, result);

    return 0;
}