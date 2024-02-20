
#include <stdio.h>
 
// Returns number of pairs in arr[0..n-1] with sum equal
// to 'sum'
int getPairsCount(int arr[], int n, int K)
{
   // Initialize result
    int count = 0;
 
    // Consider all possible pairs and check their sums
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (arr[i] + arr[j] == K)
                count++;
 
    return count;
}
 
// Driver function to test the above function
int main()
{
    int arr[] = { 1, 5, 7, -1 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int K = 6;
    printf("Count of pairs is %d",
           // Function Call
           getPairsCount(arr, n, K));
    return 0;
}
