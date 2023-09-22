#include <string>
#include <iostream>
#include <iomanip> 
#include <cmath>
#include "piramide.h"

float areaBase(float lado) {
   float area = pow(lado, 2);
    return area;
}

float areaLateral(float lado) {
   float perimetro = 4.0 * lado;
   float lateral;

   std::cout << "Medida de uma aresta lateral da pirâmide: ";
   std::cin >> lateral;

   float areaLateralP = (perimetro* lateral)/2.0;
    return areaLateralP;
}

float alturaDaPiramide(float lado){
   float h = sqrt(pow(lado, 2) - (pow(lado/2.0, 2)));
   return h;
}


float areaP(float area_base, float area_lateral) {
   float area = area_base + area_lateral;
    return area;
}

float volumeP(float area_base, float altura) {
    float volume =  (area_base * altura)/ 3.0;
    return volume;
}

void piramideAreaVolume(){
	
	float area_Base, area_Lateral, altura, lado;

   std::cout << "Lado base da pirâmide quadrada: ";
   std::cin >> lado;

   area_Base = areaBase(lado);
   area_Lateral = areaLateral(lado);
   altura = alturaDaPiramide(lado);

    float areapiramide = areaP(area_Base, area_Lateral);
   	float volumepiramide = volumeP(area_Base, altura);

     std::cout << std::fixed << std::setprecision(2);

    std::cout << "Área da piramide: " << areapiramide << std::endl;
    std::cout << "Volume da piramide: " << volumepiramide << std::endl;

}