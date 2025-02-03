#include <stdio.h>
#include <math.h>
#include <stdbool.h>

// second largest element in array
int secondlarg()
{
    int arr[] = {3, 5, 7, 9, 2, 10};
    int largest = arr[0];
    int secondlargest = arr[0];
    for (int i = 0; i < 6; i++)
    {
        if (arr[i] > largest)
        {
            secondlargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondlargest && arr[i] != largest)
        {
            secondlargest = arr[i];
        }
    }
    return secondlargest;
}

// check if array is sorted

int isarray(int arr[], int n)
{
    for (int i = 0; i <= n; i++)
    {

        if (arr[i] < arr[i + 1])
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

//  reverse the array

// remove duplicate from the array

// left rotate an array by d places

// move all the zero to the end

// find a leader in an array

// find the maximum difference

// frequency in an sorted array

int main()
{
    // printf("%d", secondlarg());
    // int arr[5] = {1, 2, 3, 9, 7};
    // printf("%d", isarray(arr, 5));

    int arr[9] = {4, 5, 0, 8, 7, 0, 9, 10, 0};
    int temp[9] = {};
    int count = 0;

    for (int i = 0; i < 9; i++)
    {
        if (arr[i] != 0)
        {
            temp[count] = arr[i];
            count++;
        }
        else
        {
            continue;
        }
    }
    for (int i = 0; i < 9; i++)
    {
        printf("%d ", temp[i]);
    }
}
