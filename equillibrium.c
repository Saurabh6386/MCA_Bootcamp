// left right sum is equal
#include <stdio.h>

int main()
{
    int arr[] = {2, 3, -1, 8, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    int totalsum = 0;
    for (int i = 0; i < n; i++)
    {
        totalsum += arr[i];
    }

    int leftsum = 0;

    for (int i = 0; i < n; i++)
    {
        totalsum = totalsum - arr[i];

        if (totalsum == leftsum)
        {
            printf("Equillibirium index is %d ", i);
        }
        else
        {
            leftsum = leftsum + arr[i];
        }
    }
}