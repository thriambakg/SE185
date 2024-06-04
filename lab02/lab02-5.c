/*----------------------------------------------------------------------------
-		        SE 185: Lab 02 - Solving Simple Problems in C	    	 	 -
-	Name:																	 -
- 	Section:																 -
-	NetID:																     -
-	Date:																	 -
-----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------
-								Includes									 -
-----------------------------------------------------------------------------*/
#include <stdio.h>
#include <math.h>   // Google this header file to learn more! :)

/*----------------------------------------------------------------------------
-								Implementation								 -
-----------------------------------------------------------------------------*/
int main(int argc, char *argv[])
{
    double a, b, c;
    double filler;
	
	
    /* Put your code after this line */
	printf("Enter A value: ");
	scanf("%lf",&a);
	printf("%f",a);
	
	printf("Enter B value: ");
	scanf("%lf",&b);
	printf("%f",b);
	
	c = sqrt(a*a + b*b);
	printf(" C is : %f",c);


    /* This next line will calculate the square root of whatever value is
     * inside the parenthesis and assigns it to the variable filler. */
    //filler = sqrt();

    return 0;
}
