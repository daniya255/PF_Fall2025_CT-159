#include <stdio.h>
int main()
{
	float celsius_temp;
	printf("\nEnter Temperature in Celsius:");
	
	scanf("%f",&celsius_temp);
	
	float farenheit_temp = (celsius_temp*9/5)+32;
	
	printf("\nThe temperature in fahrenheit is: %.2f",farenheit_temp);
}
/*when entering 100 Degrees Celcius as input output is 212
when entering 0 output is 32
when entering -40 output is -40 */
