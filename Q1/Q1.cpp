/*************************************************************
*    Project Euler's Problem 1
*    This solution by Dylan Wilson
*    
*    If we list all the natural numbers below 10 that are multiples of 3 or 5
*    we get 3, 5, 6 and 9. The sum of these multiples is 23. Find the sum of
*    all the multiples of 3 or 5 below 1000.
*    -------------------------------------------------------------------------
*
*    The obvious solution is to use modular division, but that's pretty slow 
*    so I just shoved a couple counters in there and check when they're equal
*    to their number. After solving it I looked at the solution forum on PE.
*    They use a lot of math. The math heavy one is faster, doubly when it gets
*    higher, but I didn't really approach this as a math problem. Oh well.
**************************************************************/

#include <stdio.h>

int KEY = 1000;

main()
{
    int total = 0;
    int i;
    int threeCounter = 0;
    int fiveCounter = 0;

    for(i = 0; i<KEY; i++)
    {
        if(threeCounter == 3)
        {
	    threeCounter = 0;
            total +=i;
	
	    if(fiveCounter == 5)
	    	fiveCounter = 0;
        }
        else if(fiveCounter == 5)
        {
	    fiveCounter = 0;
            total +=i;
        }

	threeCounter++;
	fiveCounter++;
    }
    printf("%d", total);
    return 0;
}