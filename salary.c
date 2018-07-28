//
// Created by CLOUDS on 28-07-2018.
#include <stdio.h>

void main ()
{
    int base, gross, rent, bonus;

    printf ("Enter base Salary: ");
    scanf ("%d",&base);

    rent = (base/100)*20;
    bonus = (base/100)*40;
    gross = rent + bonus;

    printf ("Base salary: %d \nBonus: %d \nRent: %d \nGross: %d", base, bonus, gross);
}
//

