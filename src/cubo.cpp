#include <string>
#include <iostream>
#include <iomanip> 
#include <cmath>
#include "cubo.h"


void cuboAreaVolume(){
	
	float aresta;

    std::cout << "Aresta do cubo: ";
	std::cin >> aresta;

    float areaCubo = 6* pow(aresta, 2);
   	float volumeCubo = pow(aresta, 3);

     std::cout << std::fixed << std::setprecision(2);

    std::cout << "Área do Cubo: " << areaCubo << std::endl;
    std::cout << "Volume do Cubo: " << volumeCubo << std::endl;

}