#include <iostream>
#include <string>
#include "triangulo.h" 
#include "retangulo.h" 
#include "quadrado.h" 
#include "circulo.h" 
#include "piramide.h" 
#include "cubo.h" 
#include "paralelepipedo.h" 
#include "esfera.h" 


int main(){
    std::string forma;
    std::cout << "\nFiguras: triangulo, retangulo, quadrado, circulo, cubo, esfera, piramide ou paralelepipedo.\n\n";
    std::cout << "Digite qual dessas figuras você escolhe: ";
    std::cin >> forma;

    if(forma == "triangulo"){                                    
        trianguloAreaPerimetro();
    }else if(forma == "retangulo"){                                    
        retanguloAreaPerimetro();
    }else if(forma == "quadrado"){                                    
        quadradoAreaPerimetro();
    } else if(forma == "circulo"){                                    
        circuloAreaPerimetro();
    } else if(forma == "piramide"){                                    
        piramideAreaVolume();
    } else if(forma == "cubo"){                                    
        cuboAreaVolume();
    } else if(forma == "paralelepipedo"){                                    
        paralelepipedoAreaVolume();
    } else if(forma == "esfera"){                                    
        esferaAreaVolume();
    }else {
       std::cout << "\nForma desconhecida!\n";
    }

    return 0;
}                   