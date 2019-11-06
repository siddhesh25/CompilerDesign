#include <stdio.h>

void func1() {
  printf("Called from func1\n");
}

void func2() {
  printf("Calling func1 from func2\n");
  func1();
}

int main()
{
  func1();
  func2();
  printf("End of main\n");
  return 0;
}
