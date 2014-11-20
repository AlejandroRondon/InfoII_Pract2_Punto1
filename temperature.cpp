#include "temperature.h"
#include <cstdio>
#include <string>


Temperature::Temperature()
{
	temp=0;
	scale= 'C';
}
/*Temperature::Temperature(float temp,char scale){
	this->temp=temp;
	this->scale=scale;
}*/

Temperature::Temperature(float newtemp,char newscale){
	temp=newtemp;
	if((newscale == 'C')||(newscale == 'F')||(newscale == 'K')){
	scale=newscale;
	}else{
	scale='C';
	}
}


void Temperature::toFahrenheit(void){
	printf("converting to Fahrenheit from ");
	switch(scale){
		case 'C':
			printf("Celsius\n");
			temp = 1.8*temp + 32;
			break;
		case 'K':
			printf("Kelvin\n");
			temp = 1.8*temp - 459.67;
			break;
		default:
			printf("same\n");
			temp=temp;
			break;

	}
	scale = 'F';
}
void Temperature::toKelvin(void){
	printf("converting to Kelvin from  ");
	switch(scale){
		case 'C':
			printf("Celsius\n");
			temp = temp + 273.15;
			break;
		case 'F':
			printf("fahrenheint\n");
			temp = (temp + 459.67) / 1.8;
			break;
		default:
			printf("same\n");
			temp=temp;
			break;

	}
	scale = 'K';
}
void Temperature::toCelsius(void){
	printf("converting to celsius from  ");
	switch(scale){
		case 'F':
			printf("Fahrenheint\n");
			temp = (temp - 32)/1.8;
			break;
		case 'K':
			printf("kelvin\n");
			temp = temp - 273.15;
			break;
		default:
			printf("same\n");
			temp=temp;
			break;

	}
	scale = 'C';
}
float Temperature::getValue(void){
	return temp;
}
char Temperature::getScale(void){
	return scale;
}

void Temperature::setValue(float newtemp){
	temp=newtemp;
}
void Temperature::setScale(char newscale){
	scale=newscale;
}
