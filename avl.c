#include "avl.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// substitua por seus dados
struct aluno *getAluno1()
{
    struct aluno *retorno = malloc(sizeof(struct aluno));
    if (!retorno)
        exit(1);
<<<<<<< HEAD
    retorno->nome = malloc(sizeof("Paulo Ricardo Lisboa de Almeida")); // sizeof conta o \0
    if (!retorno->nome)
        exit(1);
    retorno->nomeDinf = malloc(sizeof("paulo"));
    if (!retorno->nomeDinf)
        exit(1);

    strcpy(retorno->nome, "Paulo Ricardo Lisboa de Almeida");
    strcpy(retorno->nomeDinf, "paulo");
    retorno->grr = 1234;

=======
    retorno->nome = malloc(sizeof("Gustavo Isoo Binder")); // sizeof conta o \0
    if (!retorno->nome)
        exit(1);
    retorno->nomeDinf = malloc(sizeof("gib22"));
    if (!retorno->nomeDinf)
        exit(1);

    strcpy(retorno->nome, "Gustavo Isoo Binde");
    strcpy(retorno->nomeDinf, "gib22");
    retorno->grr = 20221242;

>>>>>>> 84dd55fd7c4e0e3c40d638a46aac8ba7bfcd381c
    return retorno;
}

struct aluno *getAluno2()
{
    return NULL;
}

void imprimirDadosAlunos()
{
    struct aluno *aluno = getAluno1();

    printf("Trabalho de %s\n", aluno->nome);
    printf("Login Dinf %s\n", aluno->nomeDinf);
    printf("GRR %u\n\n", aluno->grr);

    free(aluno->nome);
    free(aluno->nomeDinf);
    free(aluno);

    aluno = getAluno2();
    if (!aluno)
        return;

    printf("...E... \n\n");
    printf("Trabalho de %s\n", aluno->nome);
    printf("Login Dinf %s\n", aluno->nomeDinf);
    printf("GRR %u\n\n", aluno->grr);

    free(aluno->nome);
    free(aluno->nomeDinf);
    free(aluno);
}

struct nodo *inserir(struct nodo **raiz, int chave)
{
    return NULL;
}

int excluir(struct nodo **raiz, int chave)
{
    return -99;
}

struct nodo *buscar(struct nodo *nodo, int chave)
{
    struct nodo *ptr = nodo;

    while (ptr != NULL)
    {
        if (ptr->chave == chave)
            return ptr;
        else if (ptr->chave > chave)
            ptr = ptr->filho_e;
        else
            ptr = ptr->filho_d;
    }

    return ptr;
}

void imprimirEmOrdem(struct nodo *raiz)
{
    printf("Imprimindo em ordem\n");
}

void imprimirEmLargura(struct nodo *raiz)
{
    printf("Imprimindo em largura\n");
}