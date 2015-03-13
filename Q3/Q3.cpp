/*************************************************************
*   Project Euler's Problem 3
*   This solution by Dylan Wilson
*    
*   The prime factors of 13195 are 5, 7, 13 and 29.
*   What is the largest prime factor of the number 600851475143?
* ---------------------------------------------------------------
* 
*   Not going to lie, I looked up some bits online on how to do this.
*   In part because prime numbers are a pain, and in part because I
*   wrote this with a splitting head ache.
**************************************************************/
#include <stdio.h>

long int KEY = 600851475143;

int main()
{       
    long int holder = KEY;
    long int largestPrime = 0;
    long int i = 2;

    
    while (holder>1)
    {
        while (holder%i == 0)
        {
            largestPrime = i;
            holder = holder/i;
        }
        i++;
    }
    
    printf("%ld",largestPrime);

    return 0;
}