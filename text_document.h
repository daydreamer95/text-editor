#ifndef TEXT_DOCUMENT_H 
#define TEXT_DOCUMENT_H 
/*
 *TextDocuments is basic binary file, 
 * with the commonly understood convention that a text-file should not contain unprintable characters
 */
struct TextDocuments {
  long int lens;
};

typedef struct TextDocuments TextDocuments; 

void init_text_documents(struct TextDocuments *td,char *filename);

#endif /*TEXT_DOCUMENT_H */
