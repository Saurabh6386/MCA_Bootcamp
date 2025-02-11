#include <stdio.h>

int main()
{
    int metrix[3][5];
    int num = 2;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i == 0 || j == 0 || i == 3 - 1 || j == 5 - 1)
            {
                printf("%3d", metrix[i][j] = num);
                num += 2;
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
}