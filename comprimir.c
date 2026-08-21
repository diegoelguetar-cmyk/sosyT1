#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

#include "comprimir.h"

typedef unsigned int unit;

int det_nbits(unit a[], int n_bit){
  """
  función que determina el numero en que podemos truncar, asegurando que no se exceda de los 32 bits de un uint. 
  también retorna el tamaño del arreglo a[].
  """
  int l = sizeof(a)/4;
  int n = 32; // numero de bits de unit

  if (n_bit*l > 32){
    n_bit = 32/l; // será un uint, pues son todas variables de tipo unit
    return {n_bit, l};
  }
  else{
    return {n_bit, l};
  }
}

int mask(int n_bit){
  """
  Función que retorna una mascara para truncar un número a n_bit bits.
  Dado el n_bit, la función se asegura que no se exceda de los 2 byts de unit
  """

  int m = -1;
  int mask = ~(m << n_bit);
  return mask;
}

int truncar(int n_bit, int e){
  """
  Función que trunca el valor a n_bit. 
  """
  int m = mask(n_bit);
  int t = e & m;
  return t;
}

int concatenar(int a[], int nbits, int l){
  """
  Función que concatena los valores de a[] en un solo valor.
  """
  int e = 0;
  for (int i =0; i<l; i++){
    e |= a[i]; // usamos el operador O para unir los valores 
  }
  return e;
}

uint comprimir(uint a[], int nbits) {
  {nbits, l} = det_nbits(a, nbits);
  int mask = mask(nbits);

  for (int i =0; i<l; i++){
    a[i] = truncar(nbits, a[i]);
    a[i] = a[i] << (i*nbits);
  }

  return concatenar(a, nbits, l);
}


int main(){
  mask = mask(2);
  printf("mask: %d\n", mask);

}
