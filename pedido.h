#ifndef PEDIDO_H_INCLUDED
#define PEDIDO_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct pedido Pedido;

typedef struct encontro Encontro;

typedef struct data Data;

Pedido *criaPedido (Pedido *vet, char produto[], float quantidade, float valor, int contador);

void imprimePedido(Pedido *vet, int contador);

void liberaPedido(Pedido *p);

float calculaPedido(Pedido *vet, int numPessoas, int contador);

void imprimeData(Data *dt, int contador);

Data *dataNova(Data *vet, int d, int m, int a, int contador);

void liberaData( Data *dt);

#endif // PEDIDO_H_INCLUDED
