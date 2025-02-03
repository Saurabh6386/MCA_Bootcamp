#include <stdio.h>

int main()
{
    int n = 6;
    int arr[] = {-5, 4, 3, -8, -4, 1};
    int cs = arr[0];
    int ms = arr[0];
    for (int i = 1; i < n; i++)
    {
        cs = cs + arr[i];
        printf("%d\n", cs);
        if (cs > ms)
        {
            ms = cs;
        }
        else if (cs < 0)
        {
            cs = 0;
        }
    }
    printf("MS %d", ms);
}