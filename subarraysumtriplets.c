#include <stdio.h>

int main()
{
    int n = 6;
    int arr[] = {1, 2, 4, 3, 6, 7};
    int maxsum = 10;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int currentsum = 0;
            for (int k = j + 1; k < n; k++)
            {
                printf("%d ", arr[k]);
                currentsum += arr[k];
            }
            if (currentsum > maxsum)
            {
                maxsum = currentsum;
            }
        }

        // printf("%d ", currentsum);
        printf("\n");
    }
    // printf("MAX %d", maxsum);
}