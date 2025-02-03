#include <stdio.h>

int main()
{
    int n = 4;
    int arr[] = {-5, 4, 3, 6};
    int maxsum = 0;

    for (int i = 0; i < n; i++)
    {
        int currentsum = 0;
        for (int j = i; j < n; j++)
        {
            currentsum += arr[j];
        }
        if (currentsum > maxsum)
        {
            maxsum = currentsum;
        }

        printf("%d ", currentsum);
        printf("\n");
    }
    printf("MAX %d", maxsum);
}