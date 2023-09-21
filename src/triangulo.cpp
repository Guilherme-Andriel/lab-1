#include <string>
#include <iostream>
#include <iomanip> 
#include "triangulo.h"


float areaT(float base, float altura) {
   float area = (base * altura) / 2.0;
    return area;
}

float perimetroT(float lado1, float lado2, float lado3) {
    float perimetro = lado1 + lado2 + lado3;
    return perimetro;
}

void trianguloAreaPerimetro() {


    float base, altura;
    float lado1, lado2, lado3;

    std::cout << "Base do triângulo: ";
    std::cin >> base;
    std::cout << "Altura do triângulo: ";
    std::cin >> altura;

    std::cout << "lado 1 do triângulo: ";
    std::cin >> lado1;
    std::cout << "lado 2 do triângulo: ";
    std::cin >> lado2;
    std::cout << "lado 3 do triângulo: ";
    std::cin >> lado3;

   
   float areaTriangulo = areaT(base, altura);
   float perimetroTriangulo = perimetroT(lado1, lado2, lado3);

     std::cout << std::fixed << std::setprecision(2);

    std::cout << "Área do triângulo: " << areaTriangulo << std::endl;
    std::cout << "Perímetro do triângulo: " << perimetroTriangulo << std::endl;

  }

