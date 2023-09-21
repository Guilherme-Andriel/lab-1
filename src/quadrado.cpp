#include <string>
#include <iostream>
#include <iomanip> 
#include <cmath>
#include "quadrado.h"


void quadradoAreaPerimetro(){
	
	float lado;

    std::cout << "Lado do quadrado: ";
	std::cin >> lado;

    float areaQuadrado = pow(lado, 2);
   	float perimetroQuadrado = 4*lado;

     std::cout << std::fixed << std::setprecision(2);

    std::cout << "Área do Quadrado: " << areaQuadrado << std::endl;
    std::cout << "Perímetro do Quadrado: " << perimetroQuadrado << std::endl;

}