#include <stdio.h>

int main()
{
    int metrix[3][3];
    int rotated[3][3];
    int n = 1;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%3d ", metrix[i][j] = n++);
        }
        printf("\n");
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 3-1; j >= 0; j--)
        {
            printf("%3d", metrix[j][i]);
        }
        printf("\n");
    }
}