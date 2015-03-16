/*************************************************************
*    Project Euler's Problem 4
*    This solution by Dylan Wilson
*    
*    A palindromic number reads the same both ways. The largest
*    palindrome made from the product of two 2-digit numbers is
*    9009 = 91 × 99. Find the largest palindrome made from the 
*    product of two 3-digit numbers.
*---------------------------------------------------------------
*    At the start of this one I kept trying to compare the last
*    digit to the first, but that was just annoying. Halfway
*    through I just said screw it and reversed the number
*    to compare it. After looking up how most others solved it
*    it looks like they converted it to a string and compared.
*    That's just not as fun.
**************************************************************/

#include <stdio.h>


int MAX = 1000;

int main()
{    
    int sum;
    int reverse;
    
    int x=0;
    int y=0;
    int palindrome = 0;
    
    for(int i = MAX-1;i>=100;i--)
    {
        for(int k = i; k>=100;k--)
        {
            reverse = 0;

            sum = i*k;
            while(sum>0)
            {
                reverse=(reverse*10)+(sum%10);
                sum=sum/10;
            }
            
            if(reverse == i*k)
            {
                if(reverse>palindrome)
                {
                    palindrome = reverse;
                    x = i;
                    y = k;
                }
            }
            
        }
    }
    printf("%d*%d = %d\n",x,y,palindrome);
    return 0;
}