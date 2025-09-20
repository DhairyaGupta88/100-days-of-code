// Convert temperature from Celcius to Farenheit
// Formula: F = (C * 9/5) + 32
#include<stdio.h>
int main()
{
float Celcius,Farenheit;
printf("Enter the temperature in Celcius:");
scanf("%f",&Celcius);
Farenheit = (Celcius *9/5) +32;
printf("Temperature in Farenheit is %.2f \n",Farenheit);
return 0;
}