#include <iostream>
using namespace std;

/* Definición del número máximo de elementos que puede contener la pila,
restricción que resulta del uso de un arreglo unidimensional. */
#define MAX 10

/* Se define la plantilla de la clase Pila con todos sus atributos y mé-
todos. Además, se incluye una pequeña aplicación de la misma. */
template <class T>
class Pila{
public:
    Pila();//Metodo constructor
    void push(T dato);
    void pop(T *dato);
    int pilaLlena();
    int pilaVacia();

private:
    T EspacioPila[MAX];
    int Tope;
};


/* Se define la plantilla de la clase Pila con todos sus atributos y mé-
todos. Además, se incluye una pequeña aplicación de la misma. */
template <class T>
Pila<T>::Pila(){
    Tope = -1;
}

/* Método que introduce un dato en la pila, actualizando el tope de la
misma. El uso de este método presupone que antes de invocarlo se debe
verificar que haya espacio disponible en la pila. */
template <class T>
void Pila<T>::push(T dato){
    EspacioPila[++Tope] = dato;
}

/* Método que quita al elemento que está en el tope de la pila y lo
asigna a un parámetro por referencia. El uso de este método presupone
que antes de invocarlo se debe verificar que la pila no esté vacía. */
template <class T>
void Pila<T>::pop(T *dato){
    *dato = EspacioPila[Tope--];
}

/* Método auxiliar que verifica si la pila está llena. Regresa 1 si
todos los espacios están ocupados y 0 en caso contrario. */
template <class T>
int Pila<T>::pilaLlena(){
    if(Tope == MAX-1){
        return 1;
    }
    else{
        return 0;
    }
}

/* Método auxiliar que verifica si la pila está vacía, regresando 1 si
lo está y 0 en caso contrario. */
template <class T>
int Pila<T>::pilaVacia(){
    if(Tope == -1){
        return 1;
    }
    else{
        return 0;
    }
}