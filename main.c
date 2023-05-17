#include <stdlib.h>

// fourier transform headers - should include headers instead
int cfast(float *, long *);

// main
int main(int argc, char *argv[]) {
  long points = 1024; // number of samples to use
  float vec[points];

  // spectrum analysis of buffer, storing result in vec
  cfast((float *)&vec, (long *)&points);

  exit(0);
}
