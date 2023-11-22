#include <stdio.h>

hybrid function() { return <1, "hybrid", 3.14>; }

int main() {
  hybrid value_tupple = function();

  int value_int = value_tupple[0];
  char *value_string = value_tupple[1];
  double value_double = value_tupple[2];
  return 0;
}