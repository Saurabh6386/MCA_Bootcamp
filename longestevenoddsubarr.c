#include <stdio.h>
int main()
{
    int n = 8;
    int arr[] = {5, 3, 1, 2, 7, 4, 1, 8, 9};
    int max = 0;

    for (int i = 0; i < n; i++)
    {
        int length = 1;
        for (int j = i + 1; j < n; j++)
        {
            if ((arr[j - 1] % 2 != 0 && arr[j] % 2 == 0) || (arr[j - 1] % 2 == 0 && arr[j] % 2 != 0))
            {
                length += 1;
            }
            else
            {
                break;
            }
            if (max < length)
            {
                max = length;
            }
        }
    }
    printf("%d", max);
}
