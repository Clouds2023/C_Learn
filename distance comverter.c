//
// Created by CLOUDS on 28-07-2018.
//

#include <stdio.h>

void main ()
{
    int distance, mtrs, feet, inches, centimeters;

    printf (" Enter distance between cities in km: ");
    scanf ("%d", &distance);

    mtrs = distance*1000;
    feet = distance*3280.8399;
    inches = distance*39370.0787;
    centimeters = distance*100000;

    printf (" Distance in Kilometers: %d \n Distance in Meters: %d \n Distance in Feet: %d \n Distance in Inches: %d \n Distance in Centimeters: %d", distance, mtrs, feet, inches, centimeters);

}