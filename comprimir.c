#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

#include "comprimir.h"

typedef unsigned int unit;

int mask(int n_bit){
  if (15<n_bit){
  n_bit = 15;
  }
  int m = -1;
  int mask = ~(m << n_bit);
  return mask;


}

uint comprimir(uint a[], int nbits) {
  ...
}


int main(){
  mask = mask(2);
  printf("mask: %d\n", mask);

}
