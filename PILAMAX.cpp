#include "../colas/cola.h"
#include "PILAMAX.h"
#include <iostream>

template<class T>
PilaMax<T>::struct elemento
{
   T _elemento;
   T maximo;
}

template<class T>
T PilaMax<T>::PilaMax()
{
}


template<class T>
PilaMax::~PilaMax()
{
}


template<class T>
bool PilaMax<T>::empty()
{
}


template<class T>
int PilaMax<T>::size()
{
   micola.
   }


template<class T>
elemento& PilaMax<T>::top()
{
}


template<class T>
T PilaMax<T>::PilaMax(T n)
{
}


template<class T>
void PilaMax::push(T n)
{
   bool esmayor = false;
   T    _max    = getmaximo();

   if (n > _max)
   {
      _max = n;
   }
   elemento nuevo;
   nuevo._elemento = n;
   nuevo.maximo    = _max;

   poner(nuevo);
}


template<class T>
void PilaMax::emplace(T obj)
{
}


template<class T>
void PilaMax<T>::pop()
{
}


template<class T>
T PilaMax<T>::getmaximo()
{
   return micola.ultimo()._max;
}


template<class T>
void PilaMax<T>::swap(cola<T> x)
{
}
