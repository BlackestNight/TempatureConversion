// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
int main()
{
    char in[4];
    float num;
    start:
    printf("Choose Celsius (C) or Fahrenheit (F) for the input number: ");
    scanf_s("%c", &in, 1);
    if (strcmp(in, "F") == 0) //checks if the input ai
    {
        printf("Enter the Tempature: ");
        scanf_s("%f", &num);
        float CalF = num - 32 * .5556;
        if (round((float)(100 * CalF)) / 100) {   //checks if the conveted number has a zero at the end second decimal point
            printf("%.1f\n", CalF); // if the end is 0 then only print 1 decimal point
        }
        else {
            printf("%.2f\n", CalF);  //if the end isn't 0 print 2 decimal points
        }
        return 0;


    }

    else if (strcmp(in, "C") != 0)
    {
        printf("Please enter a C or F.");
       
    }
    else {
         printf("Enter the tempature: "); //asks for the tempature
        scanf_s("%f", &num);    //takes the input
        float CalC = num * 1.8 + 32; //does the conversion of Celsius to Fahernheit
        if (round((float)(100 * CalC)) / 100) {   //checks if the conveted number has a zero at the end second decimal point
            printf("%.1f\n", CalC); // if the end is 0 then only print 1 decimal point
        }
        else {
            printf("%.2f\n", CalC);  //if the end isn't 0 print 2 decimal points
        }
        return 0;
    }
}