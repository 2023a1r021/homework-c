#include <stdio.h>

int isPrime(int n)
{
    if (n <= 1)
    {
        return 0; // 0 and 1 are not prime numbers
    }

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return 0; // If n is divisible by any number from 2 to sqrt(n), it's not prime
        }
    }

    return 1; // If no divisors are found, it's a prime number
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPrime(num))
    {
        printf("%d is a prime number.\n", num);
    }
    else
    {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
