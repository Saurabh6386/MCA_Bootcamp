// solving using recursion
#include <stdio.h>

// factorial of a number

int factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

// fibonacci sequence

int fib(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    return fib(n - 1) + fib(n - 2);
}

//  fibonacci method 2

int fibn(int a, int b, int n)
{
    if (n == 0)
    {
        return 0;
    }
    printf("%d ", a);
    return fibn(b, a + b, n - 1);
}

// sum of n natural number
int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n + sum(n - 1);
}
//
// nth term of fibonacci series
int fibnth(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    return fib(n - 1) + fib(n - 2);
}

// print number from 1 to N

int printnum(int n, int current)
{
    if (current == n)
    {
        printf("%d", n);
        return n;
    }
    printf("%d", current);
    printnum(n, current + 1);
}

// sum of digit of number

int digitsum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    int digit = n % 10;
    //
    return digit + digitsum(n / 10);
}

// print num from n to 1
int printnto1(int n)
{
    if (n == 0)
    {
        return 0;
    }
    printf("%d ", n);
    return printnto1(n - 1);
}

// power of  2 -> 2^n

int poweroftwo(int n)
{
    if (n == 0)
    {
        return 1;
    }
    //
    return 2 * poweroftwo(n - 1);
}
// count the digit in number

int countdigit(int n)
{
    int count = 0;
    if (n == 0)
    {
        return 0;
    }
    count++;
    return count + countdigit(n / 10);
}

// reverse string


// string is palindrome or not

// gcd of two numbers


// binary search

int binarysrch(int arr[], int key, int n)
{
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else if (arr[mid] == key)
        {
            printf("Key is at index %d", mid);
            return mid;
        }
        else
        {
            return -1;
        }
    }
}

int main()
{
    // printf("%d",factorial(5));
    // for (int i = 0; i < 7; i++)
    // {
    //     printf("%d ", fib(i));
    // }
    // fibn(0,1,5);
    // printf("%d",sum(5));
    // printf("%d ", fib(8));
    // printnum(5, 1);
    // printf("%d",fibnth(5));
    // printf("%d",digitsum(152));
    // printnto1(9);
    // printf("%d", poweroftwo(8));
    // printf("%d",countdigit(1231234));
    int arr[] = {1, 2, 3, 4, 5};
    binarysrch(arr, 3, 5);
}