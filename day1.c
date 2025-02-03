// pattern questions
#include <stdio.h>

// rectanglur pattern
int pattern1()
{
    int n = 5;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

// print right-angled-triangle pattern
int pattern2()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

// print reverse right-angled-triangle pattern
int pattern3()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = n - i; j > 0; j--)
        {
            printf("* ");
        }
        printf("\n");
    }
}

// right angled triangle with number
int pattern4()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}

/*
 *
 **
 ***
 **
 *
 */
int pattern5()
{
    int n = 5;
    for (int i = 1; i <= 2 * n; i++)
    {
        if (i <= n)
        {
            for (int j = 1; j <= i; j++)
            {
                printf("*");
            }
        }
        else
        {
            for (int k = n - 2; k <= 2 * n - i + 2; k++)
            {
                printf("*");
            }
        }
        printf("\n");
    }
}
// right tri with space
int pattern6()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int spaces = n - i; spaces > 0; spaces--)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

// reverse right tri with space

int pattern7()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int space = 1; space <= i; space++)
        {
            printf(" ");
        }
        for (int j = n - i; j >= 0; j--)
        {
            printf("*");
        }
        printf("\n");
    }
}

// pyramid pattern

int pattern8()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int space = (n - i - 1); space > 0; space--)
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

// reverse pyramid

int pattern9()
{
    int n = 5;
    for (int i = n; i > 0; i--)
    {
        for (int space = i; space < n; space++)
        {
            printf(" ");
        }
        for (int j = 0; j < 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

// pyramid version 2

int pattern10()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int space = n - i - 1; space > 0; space--)
        {
            printf(" ");
        }
        for (int j = 0; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

// reverse pyramid version 2

int pattern11()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int space = 0; space < i; space++)
        {
            printf(" ");
        }
        for (int j = n - i; j > 0; j--)
        {
            printf("* ");
        }
        printf("\n");
    }
}

// pyramid + reverse pyramid combine

int pattern12()
{
    int n = 5;
    for (int i = 0; i < 2 * n; i++)
    {
        if (i < n)
        {
            for (int space = 0; space < i; space++)
            {
                printf(" ");
            }
            for (int j = n - i; j > 0; j--)
            {
                printf("* ");
            }
        }
        else
        {
            for (int space2 = (2 * n - i - 1); space2 > 0; space2--)
            {
                printf(" ");
            }
            for (int k = 0; k < (i - n + 1); k++)
            {
                printf("* ");
            }
        }
        printf("\n");
    }
}

// hollow pyramid
int pattern13()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int space = n - i; space > 0; space--)
        {
            printf(" ");
        }
        for (int j = i; j <= i; j++)
        {
            printf("*");
        }
        if (i < n - 1)
        {
            for (int space2 = 0; space2 < 2 * i - 1; space2++)
            {
                printf(" ");
            }
        }
        else
        {
            for (int k = 2; k < 2 * n - 1; k++)
            {
                printf("*");
            }
        }
        if (i > 0)
        {
            for (int x = i; x <= i; x++)
            {
                printf("*");
            }
        }
        printf("\n");
    }
}

// reverse hollow pyramid

int pattern14()
{
    int n = 5;
    for (int i = n; i > 0; i--)
    {
        for (int space = 0; space < (n - i); space++)
        {
            printf(" ");
        }
        for (int star1 = i; star1 <= i; star1++)
        {
            printf("*");
        }
        
        printf("\n");
    }
}

int main()
{
    // pattern1();
    // pattern2();
    // pattern3();
    // pattern4();
    // pattern5();
    // pattern6();
    // pattern7();
    // pattern8();
    // pattern9();
    // pattern10();
    // pattern11();
    // pattern12();
    // pattern13();
    pattern14();
    // pattern15();
    // pattern16();
    // pattern17();
    // pattern18();
    // pattern19();
    // pattern21();
    // pattern22();
    // pattern23();
    // pattern24();
    // pattern25();
    // pattern26();
    // pattern27();
    // pattern28();
    // pattern29();
    // pattern30();
    // pattern31();
    // pattern32();
    // pattern33();
    // pattern34();
    // pattern35();
}