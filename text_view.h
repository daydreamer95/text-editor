#ifndef TEXT_VIEW_H
#define TEXT_VIEW_H
#include "text_document.h"
#include <stdbool.h>
struct TextView {
  struct TextDocuments text_document;
};

typedef struct TextView TextView;

bool init(struct TextView *texview,char *filepath);

#endif
