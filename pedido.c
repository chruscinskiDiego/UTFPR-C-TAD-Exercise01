#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pedido.h"

struct pedido {
char produto[30];
float quantidade;
float valor;
};

struct data
{
    int dia;
    int mes;
    int ano;
};

struct encontro
{
    char local[30];
    data dataEncontro;
    float custo;
};

Encontro *novoEncontro(Encontro *vet, char local[], int d, int m, int a, float custo, int contador)
{
    if(contador ==0)
    {
        vet = malloc(sizeof(Encontro));
    }
    else{
        vet = realloc(vet, contador+1 * sizeof(Encontro));
    }

    strcpy(vet[contador].local, local);
    vet[contador].dataEncontro.dia = d;
    vet[contador].dataEncontro.mes = m;
    vet[contador].dataEncontro.ano = a;
    vet[contador].custo = custo;
}

void imprimeEncontro(Encontro *vet, int contador)
{
    for(int i = 0; i < contador; i++)
    {
        printf("\n|Encontro: %d |\t |Local %.2f |\t Data: %d/%d/%d |\t Custo total: %.2f |\n", contador, vet[i].local, vet[i].dataEncontro.dia,
                vet[i].dataEncontro.mes, vet[i].dataEncontro.ano, vet[i].custo);
    }
}

void liberaEncontro(Encontro *e)
{
    free(e);
}

Data *dataNova(Data *vet, int d, int m, int a, int contador)
{
    if(contador == 0)
    {
        vet = malloc(sizeof(Data));
    }
    else{
        vet = realloc(vet, contador+1 * sizeof(Data));
    }

    vet.dia = d;
    vet.mes = m;
    vet.ano = a;

    return vet;
}


void imprimeData(Data *dt, contador)
{
    for(int i = 0; i < contador; i++)
    {
        printf("\n%d/%d/%d", dt.dia,dt.mes,dt.ano);
    }
}

void liberaData( Data *dt)
{
    free(dt);
}


Pedido *criaPedido (Pedido *vet, char produto[], float quantidade, float valor, int contador)
{
    if(contador == 0)
    {
        vet = malloc(sizeof(Pedido));
    }
    else {
        vet = realloc(vet, (contador+1) * sizeof(Pedido));
    }

    strcpy(vet[contador].produto, produto);
    vet[contador].quantidade = quantidade;
    vet[contador].valor = valor;

    return vet;
}

void imprimePedido(Pedido *vet, int contador)
{

    for(int i = 0; i < contador; i++)
    {
        printf("\n|Produto: %s |\t |Quantidade %.2f |\t Valor: %.2f |\n", vet[i].produto, vet[i].quantidade, vet[i].valor);
    }

}

void liberaPedido(Pedido *p)
{
    free(p);
}

float calculaPedido(Pedido *vet, int numPessoas, int contador)
{
    float valorTotal = 0;

    for(int i = 0; i < contador; i++)
    {
        valorTotal += (vet[i].valor * vet[i].quantidade);
    }

    return (valorTotal / numPessoas) + (valorTotal * 0.08);
}
