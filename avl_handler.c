#include "avl_handler.h"
#include "avl.h"

#include <stdio.h>
#include <stdlib.h>

struct nodo *cria_nodo(int chave)
{
    struct nodo *nodo = malloc(sizeof(struct nodo));
    nodo->chave = chave;
    nodo->filho_d = NULL;
    nodo->filho_e = NULL;
    nodo->altura = 1;
}

int pega_altura(struct nodo *nodo)
{
    if (nodo != NULL)
    {
        return nodo->altura;
    }
    return 0;
}

int maior_valor(int num1, int num2)
{
    if (num1 > num2)
        return num1;
    return num2;
}

struct nodo *rotaciona_esquerda(struct nodo *raiz)
{
    struct nodo *filho_d = raiz->filho_d;      // Filho direito da raiz
    struct nodo *filho_d_e = filho_d->filho_e; // Filho esquerdo do filho direito da raiz

    // Rotaciona a árvore

    filho_d->filho_e = raiz;
    raiz->filho_d = filho_d_e;

    // Reajusta as alturas

    raiz->altura = 1 + maior_valor(pega_altura(raiz->filho_d), pega_altura(raiz->filho_e));
    filho_d->altura = 1 + maior_valor(pega_altura(raiz->filho_d), pega_altura(raiz->filho_e));

    // Retorna o novo nodo pai da sub-árvore

    return filho_d;
}

struct nodo *rotaciona_direita(struct nodo *raiz)
{
    struct nodo *filho_e = raiz->filho_e;      // Filho esquerdo da raiz
    struct nodo *filho_e_d = filho_e->filho_d; // Filho direito do filho esquerdo da raiz

    // Rotaciona a árvore

    filho_e->filho_d = raiz;
    raiz->filho_e = filho_e_d;

    // Reajusta as alturas
    raiz->altura = 1 + maior_valor(pega_altura(raiz->filho_d), pega_altura(raiz->filho_e));
    filho_e->altura = 1 + maior_valor(pega_altura(raiz->filho_d), pega_altura(raiz->filho_e));

    // Retorna o novo pai da sub-árvore
}