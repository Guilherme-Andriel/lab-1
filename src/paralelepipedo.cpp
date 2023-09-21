#include <string>
#include <iostream>
#include <iomanip> 
#include "paralelepipedo.h"


void paralelepipedoAreaVolume(){
	
	float aresta1, aresta2, aresta3;

std::cout << "Aresta 1 do paralelepípedo: ";
	std::cin >> aresta1;
	std::cout << "Aresta 2 do paralelepípedo: ";
	std::cin >> aresta2;
	std::cout << "Aresta 3 do paralelepípedo: ";
	std::cin >> aresta3;


    float areaParalelepipedo = (2* aresta1* aresta2) + (2* aresta1* aresta3) + (2* aresta2* aresta3);
   	float volumeParalelepipedo = aresta1 * aresta2 * aresta3;

     std::cout << std::fixed << std::setprecision(2);

    std::cout << "Área do Paralelepipedo: " << areaParalelepipedo << std::endl;
    std::cout << "Volume do Paralelepipedo: " << volumeParalelepipedo << std::endl;

}