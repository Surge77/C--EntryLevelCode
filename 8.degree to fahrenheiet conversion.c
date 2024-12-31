#include<stdio.h>

main()

//write a program that gets from the user a temperature ("double") in Celsius degrees
//the program should calculate and convert the temperature from Celsius degrees to Fahrenheit degrees and print it
//formula : T(F) = T(C) * 1.8 + 32

{
    double temperature;
    double weather;

    printf("Enter temperature (in Celsius):  ");
    scanf("%lf",&temperature);

    weather = temperature*1.8+32;
    printf("The temperature is %lf Fahrenheit degrees\n",weather);







}
