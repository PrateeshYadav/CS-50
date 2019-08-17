#include<stdio.h>
#include<cs50.h>

int collatz(int n);

int main(void)
{
    int n = 50;
    int z = collatz(n);

    printf("%i",z);

}

int collatz(int n)
{

    // base case
    if(n == 1)
    {
        return 0;
    }

    // recursion
    else if(n % 2 == 0)// if it's even
    {
        return 1 + collatz(n/2);

    }
    else// if it's odd
    {
        return 1 + collatz((3 * n)+1);

    }


}
