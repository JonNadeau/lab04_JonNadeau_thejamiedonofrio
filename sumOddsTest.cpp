#include "arrayFuncs.h"
#include "tddFuncs.h"

int main() {

  int a[]={-1,2,3,4,5,6,7,8,9};
  assertEquals(23, sumOdds(a, 9), "sumOdds(a, 9)");

  int b[]={1,1,1,1,1,6,1,1,2};
  assertEquals(7, sumOdds(b, 9), "sumOdds(b, 9)"); 
  
  int c[]={2,2,4,6};
  assertEquals(0, sumOdds(c, 4), "sumOdds(c, 4)");
  
  int d[]={};
  assertEquals(0, sumOdds(d, 0), "sumOdds(d, 0)");

  return -42;
}
