#include <stdio.h>
#include <stdlib.h>
#include "pedido.h"

int main()
{

    char resposta;

    int numPedidos = 0;
    int numEncontros = 0;
    int numDatas = 0;
    int d;
    int m;
    int a;
    char produto[30];
    float quantidade;
    float valor;
    int pedidos[numPedidos];
    Pedido *vet;
    Encontro *vetEncontro;
    Data *vetData;
    float valorTotal = 0;
    do
    {

        setbuf(stdin, NULL);
        printf("\nCadastro de Pedido: ");

        printf("\n\nInforme o nome do produto: ");
        scanf("%[^\n]s", produto);

        printf("\nInforme a quantidade deste produto: ");
        scanf("%f", &quantidade);

        printf("\nInforme o valor deste produto: ");
        scanf("%f", &valor);

        setbuf(stdin, NULL);

        valorTotal += (quantidade * valor);

        vet = criaPedido(vet, produto, quantidade, valor, numPedidos);

        printf("\nInforme a data (__/__/____: ");
        scanf("%d/%d/%d", &d, &m, &a);
        vetData = dataNova(vetData, d, m, a, numDatas);

        numPedidos++;

        numDatas++;

        printf("\n\nDeseja cadastrar mais um produto? (S/N): ");
        setbuf(stdin, NULL);
        scanf(" %c", &resposta);
    }
    while (resposta == 'S' || resposta == 's');

    imprimePedido(vet, numPedidos);
    imprimeData(vetData, numDatas);


    char respostaEncontro;


    char local[30];
    float custoEncontro;

    do
    {
        printf("\n\nQual o local do encontro? ");
        scanf("%[^\n]s", local);

        printf("\nInforme a data (__/__/____: ");
        scanf("%d/%d/%d", &d, &m, &a);

        printf("Qual o custo do encontro? ");
        scanf("%f", &custoEncontro);


        numEncontros++;

        vetEncontro = novoEncontro();

        printf("Deseja criar mais um encontro?");
        scanf("%[^\n]s", respostaEncontro);
    }
    while(respostaEncontro == 'S' || respostaEncontro == 's');

    imprimeEncontro(vetEncontro, numEncontros);

    int numPessoas;

    printf("\n\nDividir em quantas pessoas? ");
    scanf("%d", &numPessoas);

    printf("\n\n-->O valor por pessoa eh: %.2f<--", calculaPedido(vet, numPessoas, numPedidos));


    printf("Programa encerrado.\n");

    return 0;
}
