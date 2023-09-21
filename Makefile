geometria: build/main.o build/triangulo.o build/retangulo.o build/quadrado.o build/circulo.o build/piramide.o build/cubo.o build/paralelepipedo.o build/esfera.o
	g++ -o bin/returnGeometria build/main.o build/triangulo.o build/retangulo.o build/quadrado.o build/circulo.o build/piramide.o build/cubo.o build/paralelepipedo.o build/esfera.o

build/main.o: src/main.cpp include/triangulo.h include/retangulo.h include/quadrado.h include/circulo.h include/piramide.h include/cubo.h include/paralelepipedo.h include/esfera.h
	g++ -c src/main.cpp -Iinclude -o build/main.o

build/triangulo.o: src/triangulo.cpp include/triangulo.h
	g++ -c src/triangulo.cpp -Iinclude -o build/triangulo.o

build/retangulo.o: src/retangulo.cpp include/retangulo.h
	g++ -c src/retangulo.cpp -Iinclude -o build/retangulo.o

build/quadrado.o: src/quadrado.cpp include/quadrado.h
	g++ -c src/quadrado.cpp -Iinclude -o build/quadrado.o

build/circulo.o: src/circulo.cpp include/circulo.h
	g++ -c src/circulo.cpp -Iinclude -o build/circulo.o

build/piramide.o: src/piramide.cpp include/piramide.h
	g++ -c src/piramide.cpp -Iinclude -o build/piramide.o

build/cubo.o: src/cubo.cpp include/cubo.h
	g++ -c src/cubo.cpp -Iinclude -o build/cubo.o

build/paralelepipedo.o: src/paralelepipedo.cpp include/paralelepipedo.h
	g++ -c src/paralelepipedo.cpp -Iinclude -o build/paralelepipedo.o

build/esfera.o: src/esfera.cpp include/esfera.h
	g++ -c src/esfera.cpp -Iinclude -o build/esfera.o
