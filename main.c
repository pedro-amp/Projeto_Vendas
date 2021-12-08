#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// função principal
int main( )
{
    // declaração de variáveis
    int opcao = 0;
    char nomeProduto[50], nomeAlteracao[50], idProduto[100], idAlteracao[100], nomeMaiorProduto[50], nomeMenorProduto[50];
    double valorProduto = 0, valorAlteracao = 0, valorMaiorProduto = 0, valorMenorProduto = 0;



    // verifica qual a opção escolhida e realiza a tarefa
    while(1) {

        // menu com as opções
        printf("\n\n");
        printf("************  MENU  ***********\n");
        printf("*  1-  Cadastrar produto      *\n");
        printf("*  2-  Alterar produto        *\n");
        printf("*  3-  Excluir produto        *\n");
        printf("*  4-  Valor do maior produto *\n");
        printf("*  5-  Valor do menor produto *\n");
        printf("*  6-  Nome do produto de maior valor *\n");
        printf("*  7-  Nome do produto de menor valor *\n");
        printf("*  8-  Sair                   *\n");
        printf("*******************************\n");

        // recebe a opção desejada
        printf("Opcao: \n");
        scanf("%d", &opcao);

        if(opcao == 1){
            //adiciona um novo produto
            printf("Id do produto: \n");
            scanf("%s", &idProduto);

            printf("Nome do produto: \n");
            scanf("%s", nomeProduto);

            printf("Valor do produto: \n");
            scanf("%lf", &valorProduto);


            if(valorProduto > valorMaiorProduto){
                strcpy(nomeMaiorProduto, nomeProduto);
                valorMaiorProduto = valorProduto;
            }else if(valorProduto < valorMaiorProduto){
                strcpy(nomeMenorProduto, nomeProduto);
                valorMenorProduto = valorProduto;
            }

            //imprime os dados para confirmação
            printf("ID do produto: %s \n", idProduto);
            printf("Nome do produto: %s \n", nomeProduto);
            printf("Valor do produto: %.2lf \n", valorProduto);





        }else if(opcao == 2){
            //alterar um novo produto
            printf("Id do produto: \n");
            scanf("%d", &idAlteracao);
        }else if(opcao == 3){
            printf("Vai ser implementado!");
        }else if (opcao == 4){
            printf("Valor do produto mais caro: %s", valorMaiorProduto);
        }else if(opcao == 5){
            printf("Valor do produto mais caro: %s", valorMenorProduto);
        }else if(opcao == 6){
            printf("Nome do produto mais caro: %s", nomeMaiorProduto);
        }else if(opcao == 7){
            printf("Nome do produto mais barato: %s", nomeMenorProduto);
        }else if(opcao == 8){
            break;
        }
    }
    printf("Ate breve, Drikarts!");


    return 0;
}
