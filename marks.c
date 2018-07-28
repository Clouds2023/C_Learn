//
// Created by CLOUDS on 28-07-2018.
//

#include <stdio.h>

void main ()
{
    int sub1, sub2, sub3, sub4, sub5, perc, agg;

    printf (" Enter marks for 5 subjects: ");
    scanf ("%d%d%d%d%d", &sub1, &sub2, &sub3, &sub4, &sub5);

    agg = ((sub1+sub2+sub3+sub4+sub5)/5);
    perc = ((agg/100)*100);

    printf (" Aggregate marks: %d \n Percentage: %d", agg, perc);

}