/*----------------------------------------------------------------------------
-		                 SE 185: Lab 04 - Debugging Code	    	         -
-	Name:																	 -
- 	Section:																 -
-	NetID:																     -
-	Date:																	 -
-----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------
-								Includes									 -
-----------------------------------------------------------------------------*/
#include <stdio.h>

/*----------------------------------------------------------------------------
-	                                Notes                                    -
-----------------------------------------------------------------------------*/
// Compile with gcc lab04-1_1.c -o lab04-1_1
// Run with ./lab04-1_1
/* This program outputs if a integer will divide into another integer with no remainder. */

/*----------------------------------------------------------------------------
-								Implementation								 -
-----------------------------------------------------------------------------*/
int main(int argc, char *argv[])
{
    int i, j;

    //printf("Enter an integer: ")
	printf("Enter an integer: "); //added missing semicolon
    scanf("%d", &i);

    //printf("Enter another integer: );
	printf("Enter another integer: "); //added missing quote mark
    //scanf("%d", &j)
	scanf("%d", &j); //added missing semicolongcc 

    if (j % i == 0)
    {
        printf("%d divides %d\n", i, j);

    } 
	else
	{	//added missing bracket

        //pritf("%d does not divide %d\n", i, j);
		printf("%d does not divide %d\n", i, j); //fixed typo in pritf ->printf
        printf("%d %% %d is %d\n", j, i, (j % i));
    }

    return 0;
}
