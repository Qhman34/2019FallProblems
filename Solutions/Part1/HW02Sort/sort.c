// ***
// *** You MUST modify this file, only the ssort function
// ***

#include "sort.h"
#include <stdio.h>

// DO NOT MODIFY THIS FUNCTION
bool checkOrder(int * arr, int size)
// a static function is visible only in this file
// This function returns true if the array elements are
// in the ascending order.
// false, otherwise
{
  int ind;
  for (ind = 0; ind < (size - 1); ind ++)
    {
      if (arr[ind] > arr[ind + 1])
	{
	  return false;
	}
    }
  return true;
}


// YOU MUST MODIFY THIS FUNCTION
#ifdef TEST_SORT
void ssort(int * arr, int size)
{
  for(int index = 0; index < size; index++) {
	  for(int scan = index + 1; scan < size; scan++) {
		  if(arr[scan] < arr[index]) {
			  int lowest = arr[scan];
			  int highest = arr[index];
			  arr[index] = lowest;
			  arr[scan] = highest;
		  }
	  }
  }
  
}
#endif
