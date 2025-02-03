#include <stdio.h>
int main()
{
    int n = 10;
    int userarr[10] = {};
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &userarr[i]);
    }
    

    // int arr[20] = {1, 1, 0, 1, 0, 0, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0};
    int count = 0;
    int maxcount = count;
    for (int i = 0; i < n; i++)
    {
        if (userarr[i] == 1)
        {
            count++;
            maxcount = count;
        }
        else
        {
            count = 0;
        }
    }

    printf("%d", maxcount);
}