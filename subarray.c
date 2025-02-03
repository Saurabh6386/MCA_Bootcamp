#include <stdio.h>

int main()
{
    int n = 4;
    int arr[] = {5, 4, 3, 6};

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = i; k <= j; k++)
            {
                printf("[ %d ]", arr[k]);
            }
            printf("\n");
        }
    }
}