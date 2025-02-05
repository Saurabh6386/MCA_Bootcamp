#include <stdio.h>
int main()
{
    int arr[] = {-1, 1, 2, 3, -2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 6;

    for (int i = 0; i < n; i++)
    {

        for (int j = i; j < n; j++)
        {
            int arrsum = 0;
            for (int k = i; k <= j; k++)
            {
                arrsum += arr[k];
            }
            if (arrsum == sum)
            {
                for (int k = i; k <= j; k++)
                {
                    printf("[%d]", arr[k]);
                }
                printf("\n");
            }
        }
    }
}