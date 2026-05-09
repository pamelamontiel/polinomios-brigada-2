#ifndef __POLINOMIO_H__
#define __POLINOMIO_H__

#include <stdbool.h>
#include <stddef.h>


// La estructura de datos obligatoria (Punto 5 del PDF)
typedef struct Termino {
    float coeficiente;
    int exponente;
} Term;

typedef struct Nodo {
    Term termino;
    struct Nodo* siguiente;
    struct Nodo* anterior;
} Nodo;

typedef struct {
    Nodo* cabeza;
    Nodo* cola;
} Polinomio;

// Requerimientoss funcionales
Polinomio* crear_polinomio();
void insertar_termino(Polinomio* p, float coef, int exp); 
void eliminar_polinomio(Polinomio* p);
float evaluar_polinomio(Polinomio* p, float x);
Polinomio* sumar_polinomios(Polinomio* p1, Polinomio* p2);
Polinomio* multiplicar_polinomios(Polinomio* p1, Polinomio* p2);
void imprimir_polinomio(Polinomio* p);

#endif
