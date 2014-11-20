#include <cstdio>
#include <string>
#include <stdlib.h>
#include "temperature.h"


int main( void ){
	system("clear");
	float auxTemp;
	char auxScale;
	printf( "Punto 1: Conversion de Temperatura\n");
	printf("Ingrese la temperatura a convertir:" );
	scanf("%f%c",&auxTemp,&auxScale);
	Temperature my_temperature(auxTemp,auxScale);	//Inicializacion del objeto
	printf("La conversion es:\n");
	my_temperature.toFahrenheit();
	printf("%f%c\n",my_temperature.getValue(),my_temperature.getScale());	//bien cuando ambos son privados y existe forma de acceder
	//printf("%f%c\n",my_temperature.getValue(),my_temperature.scale);	//Error cuando alguno es privado
	//printf("%f%c\n",my_temperature.temp,my_temperature.scale);		//bien cuando ambos son publicos
	my_temperature.toCelsius();
	printf("%f%c\n",my_temperature.getValue(),my_temperature.getScale());
	my_temperature.toKelvin();
	printf("%f%c\n\n",my_temperature.getValue(),my_temperature.getScale());
	
	//Change the values of the object my_temperature
	printf("----------UPDATING THE TEMPERATURE----------\n" );
	printf("Ingrese la temperatura a convertir:" );
	scanf("%f%c",&auxTemp,&auxScale);
	my_temperature.setValue(auxTemp);	//Actualizacion del objeto
	my_temperature.setScale(auxScale);
	//scanf("%f%c",&my_temperature.temp,&my_temperature.scale);

	printf("La conversion es:\n");
	my_temperature.toFahrenheit();
	printf("%f%c\n",my_temperature.getValue(),my_temperature.getScale());	//bien cuando ambos son privados y existe forma de acceder
	//printf("%f%c\n",my_temperature.getValue(),my_temperature.scale);	//Error cuando alguno es privado
	//printf("%f%c\n",my_temperature.temp,my_temperature.scale);		//bien cuando ambos son publicos
	my_temperature.toCelsius();
	printf("%f%c\n",my_temperature.getValue(),my_temperature.getScale());
	my_temperature.toKelvin();
	printf("%f%c\n",my_temperature.getValue(),my_temperature.getScale());

	




	return 0;

}

//$ g++ -Wall prac1.cpp -o prac1.out
//$ ./prac1.out
//g++ -c archivo.cpp para compilar un no main
//g++ main.cpp archivo.o ... para compilar completo
