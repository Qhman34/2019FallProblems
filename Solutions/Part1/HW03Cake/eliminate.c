// ***
// *** You MUST modify this file
// ***

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h> 
#include <string.h> 

#ifdef TEST_ELIMINATE
// 100% of the score
void eliminate(int n, int k)
{
  // allocate an arry of n elements
  int * arr = malloc(sizeof(* arr) * n);
  // check whether memory allocation succeeds.
  // if allocation fails, stop
  if (arr == NULL)
    {
      fprintf(stderr, "malloc fail\n");
      return;
    }
  // initialize all elements
  for(int i = 0; i < n; i++) {
	  arr[i] = i + 1;
  }
  // counting to k,
  // mark the eliminated element
  // print the index of the marked element
  // repeat until only one element is unmarked
  int index = 0;
  for(int pass = 1; pass < n; pass++) {
	  int count = 1;
	  while(count <= k) {
		  if(arr[index] == -1) {
			  index = (index + 1) % (n);
		  } else if( count == k) {
			  arr[index] = -1;
			  printf("%d\n", index);
			  index = (index + 1) % (n);
			  count++;
		  } else {
			  count++;
			  index = (index + 1) % (n);
		  }
	  }
  }
  // print the last one
  for(index = 0; index < n; index++) {
	  if(arr[index] != -1) {
		  printf("%d\n", index);
		  index = n;
	  }
  }
  // release the memory of the array
  free (arr);
}
#endif
