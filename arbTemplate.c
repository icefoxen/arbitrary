#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void doStuff(long times) {
   return;
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
