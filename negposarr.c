#include <stdio.h>

int main()
{
    int arr[] = {1, -2, -4, -5, 9, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int neg[10], pos[10], negpos[10];
    int k = 0, l = 0, m = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            neg[k] = arr[i];
            k++;
        }
        else
        {
            pos[l] = arr[i];
            l++;
        }
    }

    int i = 0, j = 0;
    while (i < k || j < l)
    {
        if (i < k)
            negpos[m] = neg[i];
        m++, i++;
        if (j < l)
            negpos[m] = pos[j];
        m++, j++;
    }
    for (int i = 0; i < m; i++)
    {
        printf("%d ", negpos[i]);
    }
}