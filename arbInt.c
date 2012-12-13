#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void doStuff(long times) {
   int i = 0;
   int a = 0;
   int b = 0;
   int c = 0;
   for(i = 0; i < times; i++) {
      a += 31;
      a -= 7;
      a *= 3;
      a /= 2;

      b += 6;
      b -= 2;
      b *= 7;
      b /= 5;

      c += a + b;
      c -= a * b;
      c *= a - b;

      a += 14;
      a -= 5;
      a *= 2;
      a /= 3;

      b += 94;
      b -= 90;
      b *= 6;
      b /= 2;

      c += a + b;
      c -= a * b;
      c *= a - b;

      a += 43;
      a -= 2;
      a *= 33;
      a /= 9;

      b += 3;
      b -= 4;
      b *= 9;
      b /= 3;

      c += a + b;
      c -= a * b;
      c *= a - b;

      a += 1;
      a -= 7;
      a *= 3;
      a /= 2;

      b += 6;
      b -= 2;
      b *= 7;
      b /= 5;

      c += a + b;
      c -= a * b;
      c *= a - b;
   }
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
