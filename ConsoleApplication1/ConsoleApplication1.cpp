#include <stdio.h> //for the full c expreiance lol
#include <cstdlib>
#include <math.h>
char in;
float f;
float c;

float toCelsius(float f) {
	float resultF;
	float CalF = (f - 32) * .5556;
    resultF = round((float)(100 * CalF)) / 100;
	return resultF;
}

float toFahrenheit(float c) {
	float resultC;
    float CalC = c * 1.8 + 32;
    resultC = round((float)(100 * CalC)) / 100;
	return resultC;
}


int main()
{
    
    start: //for the goto statement 
    printf("Choose Celsius (C) or Fahrenheit (F) for the input number: ");
    scanf_s("%c", &in, 1);

    int c;
    while ((c = getchar()) != '\n' && c != EOF) {

    } // an empty fuction clears the input

    if (in == 'F' || in == 'f') //remember use single quotes when in compaison of char
    {
        printf("Enter the Tempature: ");
        scanf_s("%f", &f);
        printf("%.2f C\n",toCelsius(f));
        system("pause");
        return 0;
    }

    else if (in == 'C' || in == 'c')
    {
        printf("Enter the tempature: "); //asks for the tempature
        scanf_s("%f", &c);    //takes the input
		printf("%.2f F\n", toFahrenheit(c));
        system("pause");
        return 0;
    }

    else {
       printf("Please enter a C or F.\n");
       goto start;
    }
}

