#include <stdio.h>
#include "text_view.h"
#include <stdbool.h>
int main(int argc, char *argv[])
{
  printf("hello world\n");
  struct TextView textView;
  bool success = false;
  success = init(&textView, "./test.txt");
  if (!success) {
    printf("failed to init text view\n");
  }
  return 1;
}

