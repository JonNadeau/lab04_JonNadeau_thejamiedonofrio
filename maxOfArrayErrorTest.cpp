#include "arrayFuncs.h"
#include "tddFuncs.h"

int main() {
	
  int empty[] = {};
  // expect this function to result in message to cerr and exit(1);
  assertEquals(0,
	       maxOfArray(empty,0), 
	       "maxOfArray(empty,0)" ); 
  int a[] = {1,1,1,1,1,1};
  // expect this function to result in message to cerr and exit(1);
  assertEquals(1,
	       maxOfArray(a,6), 
	       "maxOfArray(a,6)" );
  int b[] = {47};
  // expect this function to result in message to cerr and exit(1);
  assertEquals(47,
	       maxOfArray(b,1), 
	       "maxOfArray(b,1)" ); 
  int c[] = {-1,0,1,2,3};
  // expect this function to result in message to cerr and exit(1);
  assertEquals(3,
	       maxOfArray(c,5), 
	       "maxOfArray(c,5)" );
  int d[] = {100, 99, 98, 97};
  // expect this function to result in message to cerr and exit(1);
  assertEquals(100,
	       maxOfArray(d,4), 
	       "maxOfArray(d,4)" ); 
  int e[] = {0,0,0,-2};
  // expect this function to result in message to cerr and exit(1);
  assertEquals(0,
	       maxOfArray(e,4), 
	       "maxOfArray(e,4)" ); 
  int f[] = {1,-2,310,-4,5,-6,7};
  // expect this function to result in message to cerr and exit(1);
  assertEquals(310,
	       maxOfArray(f,7), 
	       "maxOfArray(f,7)" );  
  return -42;
}
