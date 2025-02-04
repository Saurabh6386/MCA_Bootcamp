#include <stdio.h>

int main()
{
    int k = 3;
    int n = 7;
    int arr[] = {1, 2, -3, 4, -5, 6, -7};
    int ms = 0;

    for (int i = 0; i <= n - k; i++)
    {
        int cs = 0;

        for (int j = i; j < k + i; j++)
        {
            cs = cs + arr[j];
        }
        // printf("\n");
        if (cs > ms)
        {
            ms = cs;
        }
        else if (cs < 0)
        {
            cs = 0;
        }
    }
    printf("%d", ms);
}