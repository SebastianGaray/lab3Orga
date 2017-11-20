#ifndef _H_CACHE_
#define _H_CACHE_

#include <string>
#include <vector>
using namespace std;
#include "Datos.hpp"

/* Clase Archivo, se encarga de leer y escribir los archivos necesarios */
class Cache{
    private:
        const char *politicaReemplazo;
        int bloques;
        int vias;
        int palabras;
        int cantidadColumnas;
        int cantidadDatosIngresar;
        void inicializarCache();
	int calcularPalabra(int direccion);
    	int posicion;
	int calcularConjunto(int direccion);
	bool comprobarHit(int direccion);
	int hit;
	int calcularMenorAntiguedad(int s);
	int calcularMayorAntiguedad(int s);
	int miss;
    public:
        Cache(int bloques, int vias, int palabras, const char* politicaReemplazo, int cantidadDatosIngresar);
        vector<vector<vector<Datos>>> datosCache;
        void imprimirCache();
	void ingresarDirecciones(int direccion);

};

#endif
