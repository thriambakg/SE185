/*----------------------------------------------------------------------------
-		    SE 185: Lab 03 - Introduction to Functions and Branches	    	 -
-	Name:																	 -
- 	Section:																 -
-	NetID:																     -
-	Date:																	 -
-----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------
-								Includes									 -
-----------------------------------------------------------------------------*/
#include <stdio.h>
#include "lab03.h"

/*----------------------------------------------------------------------------
-	                                Notes                                    -
-----------------------------------------------------------------------------*/
// Compile with gcc lab03-2.c -o lab03-2
// Run with ./lab03-2

/*----------------------------------------------------------------------------
-								Implementation								 -
-----------------------------------------------------------------------------*/

int main(int argc, char *argv[])
{
    /* Declare variables here that will be used to store user prompt. */
	int fibNum;
    /* Ask for user input here with a print statement.*/
	printf("Enter number: ");
    /* Scan for user input using scanf. */
	scanf("%d",&fibNum);
    /* Print the requested nth element of the Fibonacci sequence here. */
	printf("%d",fibonacci_sequence(fibNum));
    return 0;
}
