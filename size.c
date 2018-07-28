//
// Created by CLOUDS on 28-07-2018.
//

#include <stdio.h>

voic main ()
{
    int h, l, a, b;

    h = 1189;
    l = 841;


    scanf (" Enter the paper size(for A1 = 1, A2 = 2 ... ): %d", &a);

    ++a;
    h = h / a;

    printf (" Height: %d \n Breadth: %d", l, h);

}