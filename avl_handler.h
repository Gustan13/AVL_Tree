#ifndef AVL_HD_
#define AVL_HD_

#include "avl.h"

struct nodo *cria_nodo(int chave);

int pega_altura(struct nodo *nodo);

int maior_valor(int num1, int num2);

struct nodo *rotaciona_esquerda(struct nodo *raiz);

struct nodo *rotaciona_direita(struct nodo *raiz);

#endif