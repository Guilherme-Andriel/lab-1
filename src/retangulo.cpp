#include <string>
#include <iostream>
#include <iomanip> 
#include "retangulo.h"


void retanguloAreaPerimetro(){
	
	float base, altura;
std::cout << "Base do retângulo: ";
	std::cin >> base;
    std::cout << "Altura do retângulo: ";
    std::cin >> altura;

    float areaRetangulo = base*altura;
   	float perimetroRetangulo = 2* (base + altura);

     std::cout << std::fixed << std::setprecision(2);

    std::cout << "Área do retângulo: " << areaRetangulo << std::endl;
    std::cout << "Perímetro do retângulo: " << perimetroRetangulo << std::endl;

}