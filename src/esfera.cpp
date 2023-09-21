#include <string>
#include <iostream>
#include <iomanip> 
#include <cmath>
#include "esfera.h"

#define PI 3.1416

void esferaAreaVolume(){
	
	float r;

	std::cout << "r da esfera: ";
	std::cin >> r;


    float areaEsfera = 4* PI* pow(r, 2);
   	float volumeEsfera = (4/3)* PI* pow(r, 3);

     std::cout << std::fixed << std::setprecision(2);

    std::cout << "Área do Esfera: " << areaEsfera << std::endl;
    std::cout << "Volume do Esfera: " << volumeEsfera << std::endl;

}