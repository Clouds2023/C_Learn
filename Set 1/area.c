//
// Created by CLOUDS on 28-07-2018.
//

#include <stdio.h>

void main ()
{
    int h, b, r, ca, ra;

    printf (" Enter Height: ");
    scanf ("%d", &h);

    printf (" Enter Breadth: ");
    scanf ("%d", &b);

    print (" Enter Radius: ");
    scanf ("%d", &r);

    ra = h*b;
    ca = 2*3.14*r;

    printf (" Area of Rectangle: %d \n Area of Circle: %d", ra, ca);
}