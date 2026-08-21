#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

#include "comprimir.h"

typedef unsigned int unit;

int det_nbits(unit a[], int n_bit){
  int l = sizeof(a)/4;
  int n = 32; // numero de bits de unit

  if (n_bit*l > 32){
    n_bit = 32/l; // será un uint, pues son todas variables de tipo unit
    return n_bit;
  }
  else{
    return n_bit;
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

uint comprimir(uint a[], int nbits) {
  nbits = det_nbits(a, nbits);
  int mask = mask(nbits);
  
}


int main(){
  mask = mask(2);
  printf("mask: %d\n", mask);

}
