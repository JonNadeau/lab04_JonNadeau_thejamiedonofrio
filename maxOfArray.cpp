#include "arrayFuncs.h"
#include <cstdlib>
#include <iostream>

int maxOfArray(int a[], int size) {

	if(size==0)
		return 0;
	int max=a[0];
	for(int i=1; i<size; i++){
		if(a[i]>max)
			max=a[i];
	}
	return max;
}
