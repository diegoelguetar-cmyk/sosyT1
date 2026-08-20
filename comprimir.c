#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

#include "comprimir.h"

typedef unsigned int unit;

int det_nbit(int nbit){
  int n = sizeof(unit) * 8-1;
  if (nbit > n){
    return n;
  }
  else{
    return nbit;
  }
}

int mask(int n, int e){
  int m = -1;

}

uint comprimir(uint a[], int nbits) {
  ...
}
