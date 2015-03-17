/*************************************************************
*    Project Euler's Problem 5
*    This solution by Dylan Wilson
*    
*    2520 is the smallest number that can be divided by each of 
*    the numbers from 1 to 10 without any remainder. What is the
*    smallest positive number that is evenly divisible by all of
*    the numbers from 1 to 20?
*---------------------------------------------------------------
*    I was tempted to brute this one simply due to me being busy
*    most of today, but I didn't. I did, however, rush getting
*    the results at the end with a vector.
**************************************************************/

#include <stdio.h>
#include <vector>
#include <math.h>

int KEY = 20;

int main()
{       
    int holder;
    int i;
    
    std::vector<int> factors;//Will seperate each number by using a 0. Not the most efficiant way, but I'm rushing it today.

    for(int k = KEY;k>1;k--)
    {
        holder = k;
        i = 2;

        while (holder>1)
        {
            while (holder%i == 0)
            {
                factors.push_back (i);
                holder = holder/i;
            }
            i++;
        }
        factors.push_back (0);
    }
    
    int smallestNum = 1;
    int currentIt = 0;
    int maxIt = 0;
    
    for(int l = 2; l<=KEY; l++)//I'm sure there's a better way than this but again today is a rush so meh.
    {
        currentIt = 0;
        maxIt = 0;
        for(int j = 0; j<factors.size();j++)
        {
            if(factors[j] == 0)
            {
                if(currentIt>maxIt)
                    maxIt = currentIt;
                    
                currentIt = 0;   
            }
            else if(factors[j] == l)
            {
                currentIt++;
            }
        }
        smallestNum *= pow(l,maxIt);
        
    }
    printf("%d\n",smallestNum);
    return 0;
}