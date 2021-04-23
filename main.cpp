#include "pila.h"

int main(){
/* Función que usa la plantilla de la clase Pila. Se almacenan algunos
números enteros en un objeto tipo Pila y posteriormente se quita el
último guardado y lo imprime. */

    
    /* Declaración de un objeto tipo Pila, usando el tipo int para
    instanciar la T. */
    
    Pila<int> objPila;
    int valor =  0;

    /* Mientras la pila no se llena inserta números en la misma. En este
    ejemplo, es en la aplicación donde se evalúa que haya espacio disponible 
    antes de llamar al método que inserta un valor en la pila. */
    
    while (objPila.pilaLlena() != 1){
        objPila.push(valor++);
    }  

    /* Verifica si la pila no está vacía. Si es así, quita el elemento
    almacenado en el Tope (el último insertado) y lo imprime. */
    
    if (objPila.pilaVacia() != 1) {
        objPila.pop(&valor);
        cout<<valor<<"\n";
    }
    return 0;
}