#include <stdio.h>

int main()
{
    int arr[] = {0, 1, 2, 0, 1, 2, 0, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int start = 0;
    int end = (n - 1);
    int mid = (start + end) / 2;
    for (int i = 0; i < n; i++)
    {
        if (arr[mid] == 0)
        {
            int temp = arr[start];
            arr[start] = arr[mid];
            arr[mid] = temp;
            start += 1;
        }
        else if (arr[mid] == 2)
        {
            int temp = arr[end];
            arr[end] = arr[mid];
            arr[mid] = temp;
            end -= 1;
        }
        else
        {
            mid += 1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}