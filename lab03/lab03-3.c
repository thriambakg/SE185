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
#include "stdio.h"

/*----------------------------------------------------------------------------
-	                            Prototypes                                   -
-----------------------------------------------------------------------------*/
double meters_to_feet(double meters);

double feet_to_meters(double feet);

double kilograms_to_pounds(double kilograms);

double pounds_to_kilograms(double pounds);

double minutes_to_hours(double minutes);

double hours_to_days(double hours);

double days_to_hours(double days);

double minutes_to_seconds(double minutes);

/*----------------------------------------------------------------------------
-	                                Notes                                    -
-----------------------------------------------------------------------------*/
// Compile with gcc lab03-1.c -o lab03-1
// Run with ./lab03-1

/*----------------------------------------------------------------------------
-								Implementation								 -
-----------------------------------------------------------------------------*/

int main(int argc, char *argv[])
{
    /* Test your code by calling your functions here. */
	char sel;
	double convert;
	
	printf("Which conversion would you like to perform?\nType 'a' for a., 'b' for b., etc.\na: meters to feet\nb: feet to meters\nc: kilograms to pounds\nd: pounds to kilograms\ne: minutes to hours\nf: hours to days\ng: days to hours\nh: minutes to seconds\n");
	scanf("%c",&sel);
	
	switch (sel)
	{
		case 'a':
			printf("How many meters to feet?");
			scanf("%lf",&convert);
			printf("%lf meters = %lf feet.",convert, meters_to_feet(convert));
			break;
			
		case 'b':
			printf("How many feet to meters?");
			scanf("%lf",&convert);
			printf("%lf feet = %lf meters.",convert, feet_to_meters(convert));
			break;
			
		case 'c':
			printf("How many kilograms to pounds?");
			scanf("%lf",&convert);
			printf("%lf kilograms = %lf pounds.",convert, kilograms_to_pounds(convert));
			break;
			
		case 'd':
			printf("How many pounds to kilograms?");
			scanf("%lf",&convert);
			printf("%lf pounds = %lf kilograms.",convert, pounds_to_kilograms(convert));
			break;
			
		case 'e':
			printf("How many minutes to hours?");
			scanf("%lf",&convert);
			printf("%lf minutes = %lf hours.",convert, minutes_to_hours(convert));
			break;
			
		case 'f':
			printf("How many hours to days?");
			scanf("%lf",&convert);
			printf("%lf hours = %lf days.",convert, hours_to_days(convert));
			break;
			
		case 'g':
			printf("How many days to hours?");
			scanf("%lf",&convert);
			printf("%lf days = %lf hours.",convert, days_to_hours(convert));
			break;
			
		case 'h':
			printf("How many minutes to seconds?");
			scanf("%lf",&convert);
			printf("%lf minutes = %lf seconds.",convert, minutes_to_seconds(convert));
			break;
			
		
	}

    return 0;
}

/* Implement the functions below. */

/**
 * Part a.
 * Converts given meters into feet.
 *
 * @param meters
 * @return - How many feet are in the given meters.
 */
double meters_to_feet(double meters)
{
    
	return meters * 3.28084;
}

/**
 * Part b.
 * Converts given feet into meters.
 *
 * @param feet
 * @return - How many meters are in the given feet.
 */
double feet_to_meters(double feet)
{
    return feet * .3048;
}

/**
 * Part c.
 * Converts given kilograms into pounds.
 *
 * @param kilograms
 * @return - How many pounds are in the given kilograms.
 */
double kilograms_to_pounds(double kilograms)
{
    return kilograms * 2.20462;
}

/**
 * Part d.
 * Converts given pounds into kilograms.
 *
 * @param pounds
 * @return - How many kilograms are in the given pounds.
 */
double pounds_to_kilograms(double pounds)
{
    return pounds* 0.453592;
}

/**
 * Part e.
 * Converts given minutes into hours.
 *
 * @param minutes
 * @return - How many hours are in the given minutes.
 */
double minutes_to_hours(double minutes)
{
    return minutes/60.0;
}

/**
 * Part f.
 * Converts given hours into days.
 *
 * @param hours
 * @return - How many days are in the given hours.
 */
double hours_to_days(double hours)
{
    return hours / 24.0;
}

/**
 * Part g.
 * Converts given days into hours.
 *
 * @param days
 * @return - How many hours are in the given days.
 */
double days_to_hours(double days)
{
    return days * 24.0;
}

/**
 * Part h.
 * Converts given minutes into seconds.
 *
 * @param minutes
 * @return - How many seconds are in the given minutes.
 */
double minutes_to_seconds(double minutes)
{
    return minutes * 60.0;
}
