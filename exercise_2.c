#include <stdio.h>
//RUSKI SBORNIK ZADACHI FUNKCII

double fahtograd(double fahren) {
    double cel = (5.0/9.0)*(fahren-32.03);
    return cel;

}


int main()
{
    //zadacha 201
    //napishete zadacha za preobrazuwane na temp ot gradusi -> celzii (C° = 5/9 (F°–32)
    double fahren;
    scanf("%lf", &fahren);
    printf("Fahrenheit ->C°  : %.2lf" , fahtograd(fahren));

}