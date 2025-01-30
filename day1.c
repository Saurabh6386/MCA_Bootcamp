// pattern questions
#include <stdio.h>

// print right-angled-triangle pattern
int rightangtri()
{
    int n;
    printf("Enter the number upto you want to print pattern: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

// star pyramid
int starpyramid()
{
    int n;
    printf("Enter the number upto you want to print pattern: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {

        for (int space = 0; space <= n - i; space++)
        {
            printf(" ");
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }
}

// inverted star pyramid

int invertedstarpyramid()
{
    int n;
    printf("Enter the number upto you want to print pattern: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int skip = 1;

        for (int space = 0; space < i; space++)
        {
            printf(" ");
        }
        for (int j = 0; j < 2 * n - 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }
}

int main()
{
    // rightangtri();
    // starpyramid();
    invertedstarpyramid();
}