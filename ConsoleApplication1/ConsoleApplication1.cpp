#include <stdio.h> //for the full c expreiance lol
#include <cstdlib>
#include <math.h>
char in;
float num;

float mathF(float num) {
	float resultF;
	float CalF = (num - 32) * .5556;
    resultF = round((float)(100 * CalF)) / 100;
	return resultF;
}

float mathC(float num) {
	float resultC;
    float CalC = num * 1.8 + 32;
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
        scanf_s("%f", &num);
        printf("%.2f C\n",mathC(num));
        system("pause");
        return 0;
    }

    else if (in == 'C' || in == 'c')
    {
        printf("Enter the tempature: "); //asks for the tempature
        scanf_s("%f", &num);    //takes the input
		printf("%.2f F\n", mathF(num));
        system("pause");
        return 0;
    }

    else {
       printf("Please enter a C or F.\n");
       goto start;
    }
}

