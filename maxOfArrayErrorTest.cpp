#include "arrayFuncs.h"
#include "tddFuncs.h"

//#include <cstdlib>
//#include <iostream>

int main() {

  int empty[] = {};
  // expect this function to result in message to cerr and exit(1);
//cerr<<"ERROR: maxOfArray called with size < 1";
//exit(1);
  
  assertEquals(0,
	       maxOfArray(empty,0), 
	       "maxOfArray(empty,0)" ); 
  return -42;

}
