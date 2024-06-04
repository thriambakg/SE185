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
#include <math.h>

/*----------------------------------------------------------------------------
-	                                Notes                                    -
-----------------------------------------------------------------------------*/
// Compile with gcc lab04-1_4.c -o lab04-1_4
// Run with ./lab04-1_4
/* This program calculates the energy of one photon
 * of user-inputted wave-length of light */

/*----------------------------------------------------------------------------
-								Implementation								 -
-----------------------------------------------------------------------------*/
int main(int argc, char *argv[])
{
    //double speed_of_light!;
	double speed_of_light; //removed exclamation
    //double wave-length;
	double wave_length; //changed - to _
    //double ~length_in_meters;
	double length_in_meters; //removed tildy sign
    //double plank const;
	double plank_const ; //placed underscore to make it a single name
    //double 0energy;
	double energy; //removed 0 before energy

    //plank const = 6.62606957 * pow(10, -34); // Planck's constant
	plank_const = 6.62606957 * pow(10, -34); //changed to match variable name
    //speed_of_light! = 2.99792458 * pow(10, 8); // Constant for the speed of light
	speed_of_light = 2.99792458 * pow(10, 8); //chanegd to match variable name
    //wave-length = 0
	wave_length = 0; //changed to match variable name
    //~length_in_meters = 0;
	length_in_meters = 0; //changed to match variable name
    //0energy = 0;
	energy = 0; //changed to match variable name

    printf("Welcome! This program will give the energy, in Joules,\n");
    printf("of 1 photon with a certain wave-length.\n");
    printf("Please input a wave-length of light in nano-meters.\n");
    printf("Please do not enter a negative, or zero, wave-length.\n");

	//scanf("%lf", &wave-length);
    scanf("%lf", &wave_length); //changed to match variable names

    if (wave_length > 0.0) //changed to match variable name
    {
        //~length_in_meters = wave-length / pow(10, 9); // Converting nano-meters to meters
		length_in_meters = wave_length / pow(10, 9); //changed to match variable names
        //0energy = (plank const * speed_of_light!) / ~length_in_meters; // Calculating the energy of 1 photon
		energy = (plank_const * speed_of_light) / length_in_meters; //changed to match variable names
        //printf("A photon with a wave-length of %08.3lf nano-meters, carries "
              // "\napproximately %030.25lf joules of energy.", wave-length, 0energy);
		  printf("A photon with a wave-length of %08.3lf nano-meters, carries "
		   "\napproximately %030.25lf joules of energy.", wave_length, energy); //changed to match variable names
    } else
    {
        printf("Sorry, you put in an invalid number.");
        printf("Please rerun the program and try again.");
    }

    return 0;
}
