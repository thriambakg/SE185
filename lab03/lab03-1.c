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
    printf("5 meters = %lf feet.\n", meters_to_feet(5));
    printf("5 feet = %lf meters.\n", feet_to_meters(5));
    printf("5 kilograms = %lf pounds.\n", kilograms_to_pounds(5));
    printf("5 pounds = %lf kilograms.\n", pounds_to_kilograms(5));
    printf("5 minutes = %lf hours.\n", minutes_to_hours(5));
    printf("5 hours = %lf days.\n", hours_to_days(5));
    printf("5 days = %lf hours.\n", days_to_hours(5));
    printf("5 minutes = %lf seconds.\n", minutes_to_seconds(5));

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
