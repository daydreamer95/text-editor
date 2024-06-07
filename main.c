#include <stdio.h>
#include "text_document.h"

int main(int argc, char *argv[])
{
  printf("hello world\n");
  struct TextDocuments *td;
  init_text_documents(td,"./test.txt");
  return 1;
}

