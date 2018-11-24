#ifndef PILAMAX_H
#define PILAMAX_H

#include "../colas/cola.h"
#include "../colas/cola.cpp"

template<class T>
class PilaMax{
private:
  struct elemento;
  cola <elemento> micola;
public:

   PilaMax();

   PilaMax(const T n);

   ~PilaMax();

   /*
    * @brief Devuelve true si la pila esta vacia (size=0)
    **/
   bool empty();

   /*
    * @brief Devuelve el tamaño de la cola
    **/
   int size();

   /*
    * @brief devuelve el elemento de arriba
    **/
   elemento& top();

   /*
    * @brief añade el elemento pasado;
    **/
   void push(T n);

   /*
    * @brief
    **/
   void emplace(T obj);

   /*
    * @brief
    **/
   void pop();

   /*
    * @brief
    **/
   void swap(list<T> x);

   T getmaximo();
};







#include "PILAMAX.cpp"
#endif
