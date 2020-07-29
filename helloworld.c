#include <stdio.h>
#include <stdlib.h>

typedef struct reg {
   int         conteudo;
   struct reg *prox;
} celula;

void imprima (celula *le) {
   celula *p;
   for (p = le->prox; p != NULL; p = p->prox)
      printf ("%d\n", p->conteudo);
}

int main() {
   celula *le;
   le = malloc (sizeof (celula));
   le->prox = NULL;
   le->conteudo;

   printf ("%d\n", le->conteudo);

   imprima(le);

  return 0;
}
