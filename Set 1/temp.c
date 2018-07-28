//
// Created by CLOUDS on 28-07-2018.
//

#include <stdio.h>

void main ()
{
    int cel, faren;

    printf ("Enter temperature in fahrenheit: ");
    scanf ("%d", &faren);

    cel = (faren*1.8)+32;

    printf ("Temperature in Calcius: %d", cel);
}