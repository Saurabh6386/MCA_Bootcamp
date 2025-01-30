#include <stdio.h>

// WAP to print if a number is positive , negative , zero

int negposzero()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    if (n > 0)
    {
        printf("%d is a positive number", n);
    }
    else if (n < 0)
    {
        printf("%d is a negative number", n);
    }
    else
    {
        printf("%d is a Zero", n);
    }
}

// largest of three num

int largestofthreenum()
{
    int a, b, c;
    printf("Enter the number a, b, c : ");
    scanf("%d%d%d", &a, &b, &c);

    if (a > b && a > c)
    {
        printf("%d", a);
    }
    else if (b > c && b > a)
    {
        printf("%d", b);
    }
    else
    {
        printf("%d", c);
    }
}

// leap year

int leapyear()
{
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);
    if (year % 4 == 0)
    {
        if (year % 100 != 0)
        {
            printf("%d is a leap year", year);
        }
        else if (year % 400 == 0)
        {
            printf("%d is a leap year", year);
        }
        else
        {
            printf("%d is a not leap year", year);
        }
    }
}

// vowel or consonant

int vowelorcons()
{
    char ch;
    printf("Enter the character: ");
    scanf("%c", &ch);
    if (ch == 'A' || ch == 'a' || ch == 'E' || ch == 'e' || ch == 'I' || ch == 'i' || ch == 'O' || ch == 'o' || ch == 'U' || ch == 'u')
    {
        printf("%c is a vowel ", ch);
    }
    else
    {
        printf("%c is a consolant ", ch);
    }
}

// valid triangle or not

int trianglevalid()
{
    int a, b, c;
    printf("Enter the sides of triangle a, b, c : ");
    scanf("%d%d%d", &a, &b, &c);
    if ((a < (b + c)) && (b < (a + c)) && (c < (a + b)))
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }
}

// vowel or consonant

int vowelorconsusswitch()
{
    char ch;
    printf("Enter the character: ");
    scanf("%c", &ch);

    switch (ch)
    {
    case 'a':
        printf("%c is a vowel", ch);
        break;
    case 'A':
        printf("%c is a vowel", ch);
        break;
    case 'E':
        printf("%c is a vowel", ch);
        break;
    case 'e':
        printf("%c is a vowel", ch);
        break;
    case 'I':
        printf("%c is a vowel", ch);
        break;
    case 'i':
        printf("%c is a vowel", ch);
        break;
    case 'O':
        printf("%c is a vowel", ch);
        break;
    case 'o':
        printf("%c is a vowel", ch);
        break;
    case 'U':
        printf("%c is a vowel", ch);
        break;
    case 'u':
        printf("%c is a vowel", ch);
        break;
    default:
        printf("Not a valid character");
        break;
    }
}

// unit conversion

int unitconvertion()
{
    float value;
    int choice;

    printf("\nUnit Converter Menu:\n");
    printf("1. Centimeters to Meters\n");
    printf("2. Meters to Centimeters\n");
    printf("3. Kilograms to Grams\n");
    printf("4. Grams to Kilograms\n");
    printf("7. Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);
    printf("Enter the value: ");
    scanf("%f", &value);

    switch (choice)
    {
    case 1:
        printf("%f Meters", value * 100);
        break;
    case 2:
        printf("%f Centimeter", value / 100);
        break;
    case 3:
        printf("%f Grams", value * 1000);
        break;
    case 4:
        printf("%f Kilogram", value / 1000);
        break;
    case 7:
        return 0;
    default:
        printf("Please Enter valid choice! ");
        break;
    }
}

// check char is uppercase lowercase or special char

int chartype()
{
    char ch;
    printf("Enter the value: ");
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z')
    {
        printf("%c is uppercase", ch);
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("%c is lowercase", ch);
    }
    else
    {
        printf("%c is a special character", ch);
    }
}

// sum of n natural number
int sumofnNaturalnum()
{
    int n, sum = 0;
    printf("Enter the number ");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        sum += i;
    }
    printf("The sum of %d natural number is %d", n, sum);
}

// check prime numbe or not

int checkprime()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    if (n < 2)
    {
        printf("%d is not a prime number.");
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            printf("%d is not a prime number.", n);
            return 0;
        }
    }
    printf("%d is a prime number.", n);
}

// palindrome or not

int isnumpalindrome()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int reverse = 0;

    int m = n;
    while (n != 0)
    {
        int digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }
    if (m == reverse)
    {
        printf("%d is a Palindrome number", reverse);
    }
    else
    {
        printf("%d is not a Palindrome number", reverse);
    }
}

// check num is armstrong or not

int armstrong()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int digit = 0;
    int m = n;
    while (m != 0)
    {
        digit += 1;
        m = m / 10;
    }

    int r = 0;
    m = n;
    while (m != 0)
    {
        int dig = m % 10;
        int power = 1;
        for (int i = 0; i < digit; i++)
        {
            power *= dig;
        }
        r = r + power;
        m = m / 10;
    }
    if (n == r)
    {
        printf("%d is Armstrong", r);
    }
    else
    {
        printf("%d is not armstrong", r);
    }
}

// GCd and LCM of two number
int GCDandLCM()
{
    int a, b;
    printf("Enter the numbers: ");
    scanf("%d%d", &a, &b);

    for (int i = a; i > 1; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            printf("The GCD of %d & %d is %d: ", a, b, i);
            printf("LCM of %d & %d is %d ", a, b, (a * b) / i);
            break;
        }
    }
}

// WAP to find integers a, b such that n = a^3 x b, where b is cube free
// int cubefree(int b)
// {
//     for (int i = 2; b % (i * i * i) != 0; i++)
//     {
//         return b;
//     }
// }
// int cube(int n)
// {
//     for (int i = 1; i < n; i++)
//     {
//         int a = 0;
//         for (int j = 1; n % (j * j * j) == 0; j++)
//         {
//             a = i;
//         }
//     }
// }

// prime number 1 to n;
int primeONEtoN()
{
    int n;
    printf("Enter the number ");
    scanf("%d", &n);
    if (n < 2)
    {
        printf("Number less than 2 is not prime so no prime number");
        return 0;
    }
    for (int i = 2; i < n; i++)
    {
        int isprime = 1;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                isprime = 0;
                break;
            }
        }
        if (isprime)
        {
            printf("%d", i);
        }
    }
}

int main()
{
    // negposzero();
    // largestofthreenum();
    // leapyear();
    // vowelorcons();
    // trianglevalid();
    // vowelorconsusswitch();
    // unitconvertion();
    // chartype();
    // sumofnNaturalnum();
    // checkprime();
    // isnumpalindrome();
    // armstrong();
    // GCDandLCM();

    // primeONEtoN();
}