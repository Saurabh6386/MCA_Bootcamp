#include <stdio.h>

int main()
{
    int metrix[3][5];
    int transmat[5][3];
    int even = 2;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%3d ", metrix[i][j] = even);
            even += 2;
        }
        printf("\n");
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            transmat[j][i] = metrix[i][j];
        }
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%3d",transmat[i][j]);
        }
        printf("\n");
    }

}