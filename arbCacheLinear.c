// This tries to walk down sequential addresses

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

void doStuff(long l) {
   int arrlen = 128 * 1024 * 1024;
   int* arr = (int*) malloc(arrlen * sizeof(int));
   printf("Thrashing on sequential locations in a %d-element array\n", arrlen);
   srand(time(NULL));
   long sum = 0;
   for(long i = 0; i < l; i++) {
      int unused = rand();
      int offset = i % arrlen;
      sum += arr[offset];
      arr[offset] = i;
   }
}

void usage() {
   printf("Usage: One argument, a number of iterations to do (log10 scale).\n");
}

int main(int argc, char** argv) {
   if(argc < 2) {
      usage();
   } else {
      int i = atoi(argv[1]);
      long l = powl((long) 10, i);
      doStuff(l);
   }
   return 0; 
}
