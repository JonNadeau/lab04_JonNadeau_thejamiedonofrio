#include "arrayFuncs.h"
#include "tddFuncs.h"

int main() {

  int empty[] = {};
  // expect this function to result in message to cerr and exit(1);
  if(sizeof(empty)==0){
  	cerr<<"ERROR:  maxOfArray called woth size < 1";
	exit(1);
  }
  assertEquals(0,
	       maxOfArray(empty,0), 
	       "maxOfArray(empty,0)" ); 
  return 0;

}
