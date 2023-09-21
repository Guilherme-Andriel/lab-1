#include <string>
#include <iostream>
#include <iomanip> 
#include <cmath>
#include "circulo.h"

#define PI 3.1416

void circuloAreaPerimetro(){
	
	float r;

std::cout << "r do círculo: ";
	std::cin >> r;

    float areacirculo = PI*pow(r, 2);
   	float perimetrocirculo = 2*r*PI;

     std::cout << std::fixed << std::setprecision(2);

    std::cout << "Área do circulo: " << areacirculo << std::endl;
    std::cout << "Perímetro do circulo: " << perimetrocirculo << std::endl;

}