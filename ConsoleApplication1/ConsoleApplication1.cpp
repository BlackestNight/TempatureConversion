#include <stdio.h> //for the full c expreiance lol
#include <math.h>

int main()
{
    char in;
    float num;
    start: //for the goto statement 
    printf("Choose Celsius (C) or Fahrenheit (F) for the input number: ");
    scanf_s("%c", &in, 1);

    int c;
    while ((c = getchar()) != '\n' && c != EOF) {

    } // an empty function clears the input

    if (in == 'F' || in == 'f') //remember use single quotes when in compaison of char
    {
        printf("Enter the Tempature: ");
        scanf_s("%f", &num);
        float CalF = (num - 32) * .5556;
        if (round((float)(100 * CalF)) / 100) {   //checks if the conveted number has a zero at the end second decimal point
            printf("%.1f\n", CalF); // if the end is 0 then only print 1 decimal point
        }
        else {
            printf("%.2f\n", CalF);  //if the end isn't 0 print 2 decimal points
        }
        return 0;
    }

    else if (in == 'C' || in == 'c')
    {
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

    else {
       printf("Please enter a C or F.\n");
       
       goto start;
    }
}