#include <stdio.h>

int main()
{
    int matrix[3][5];
    int num = 2;

    for (int i = 0; i < 3; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < 5; j++)
            {
                matrix[i][j] = num;
                num += 2;
            }
        }
        else
        {
            for (int j = 5 - 1; j >= 0; j--)
            {
                matrix[i][j] = num;
                num += 2;
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%4d", matrix[i][j]);
        }
        // printf("\n");
    }
}
