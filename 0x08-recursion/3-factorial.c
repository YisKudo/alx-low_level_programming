#include "main.h"

/**
* factorial - get factorial of given number
* @n: int input
* Return: the factorial or -1
**/

int factorial(int n)
{
    if (n < 0)
    {
        return -1;
    }
    else if (n == 0)
    {
        return 1;
    }
    else if (n == 1)
    {
        return 1;
    }
    return (n * factorial(n-1));
}