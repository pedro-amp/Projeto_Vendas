#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include "dados.h"

// função principal
int main( ) {
    //definir o idioma para o portugues
    setlocale(LC_ALL, "Portuguese");

    //global
    int opcao = 0, qtdClientes = 0, qtdCadastrados = 0, flag_cliente = 0, posCliente = 0;
    char codAux[10], nomeBusca[50];

    infoClientes clientes[qtdClientes];
    infoPedidos pedidos[30];
    infoProdutos produtos[30];

    //variáveis para pedidos
    /*char idPedido[100];
    int qtdPedidos = 0, codAux = 0, flag = 0;
    double valorTotalPedido = 0;*/

    //variáveis para clientes
    //int qtdClientes = 1, cpfCliente[qtdClientes][12], telCliente[qtdClientes][11], codBusca;
    //char nomeCliente[qtdClientes][50], codCliente[qtdClientes][10];

    //variáveis para produtos
    //double valorProduto = 0.0, valorAlteracao = 0, valorMaiorProduto = 0.0, valorMenorProduto = 0, codProduto = 0.0;


    // MENU GERAL
    while (1) {

        //menu com as opções
        printf("\n\n");
        printf("************  MENU  ***********\n");
        printf("*  1-  Gerenciar Cliente      *\n");
        printf("*  2-  Gerenciar Pedidos      *\n");
        printf("*  3-  Gerenciar Produtos     *\n");
        printf("*  4-  Sair                   *\n");
        printf("*******************************\n");

        // recebe a opção desejada
        printf("Opcao: \n");
        scanf("%d", &opcao);

        //SERÁ IMPLEMENTADO A FUNÇÃO DE CADASTRAR MAIS CLINTES E ARMAZENÁ-LOS EM UMA MATRIZ
        if (opcao == 1) {
            //parte da gerencia de clientes
            printf("\n\n");
            printf("************  GERENCIAR CLIENTE  ***********\n");
            printf("*  1-  Cadastrar cliente                   *\n");
            printf("*  2-  Listar cliente cadastrados          *\n");
            printf("*  3-  Buscar clietes cadastrados          *\n");
            printf("*  4-  Atualizar clientes cadastrados      *\n");
            printf("*  5-  Excluir cliente cadastrado          *\n");
            printf("*  6-  Voltar ao menu principal            *\n");
            printf("********************************************\n");

            // recebe a opção desejada
            printf("Opcao: \n");
            scanf("%d", &opcao);

            if (opcao == 1) {
                printf("************  CADASTRAR CLIENTE  ***********\n");
                printf("********************************************\n");

                printf("Quantos clientes deseja cadastrar?");
                scanf("%d", &qtdClientes);

                for(int i = 0; i < qtdClientes; i++){
                    printf("Codigo do cliente: ");
                    scanf("%s", clientes[i].codCliente);

                    printf("Nome do cliente: ");
                    fflush(stdin);
                    gets(clientes[i].nomeCliente);

                    printf("CPF do cliente: ");
                    fflush(stdin);
                    gets(clientes[i].cpfCliente);

                    printf("Telefone do cliente: ");
                    fflush(stdin);
                    gets(clientes[i].telCliente);

                    printf("\n---------------------------------------------\n\n");

                    qtdCadastrados++;

                }

                //mostra as informações para ver se está correta
                printf("************  DADOS CADASTRADOS  ***********\n");
                printf("********************************************\n");

                for(int i = 0; i < qtdClientes; i++){
                    printf("Codigo do cliente: %s \n", clientes[i].codCliente);
                    printf("CPF do cliente: %s \n", clientes[i].cpfCliente);
                    printf("Telefone do cliente: %s \n", clientes[i].telCliente);
                    printf("\n---------------------------------------------------\n");
                }

            }
            else if(opcao == 2){
                printf("************  CLIENTES CADASTRADOS  ***********\n");
                printf("************************************************\n");
                if(qtdCadastrados > 0){
                    for(int i = 0; i < qtdClientes; i++){
                        printf("Codigo do cliente: %s \n", clientes[i].codCliente);
                        printf("Nome do cliente: %s \n", clientes[i].nomeCliente);
                        printf("CPF do cliente: %s \n", clientes[i].cpfCliente);
                        printf("Telefone do cliente: %s \n", clientes[i].telCliente);
                        printf("---------------------------------------------------\n");
                    }
                }else{
                    printf("Nenhuma pessoa cadastrada!\n\n");
                }
            }
            else if(opcao == 3){
                //printf("Função a ser implementada!");
                printf("Digite o cliente que deseja buscar:");
                fflush(stdin);
                gets(nomeBusca);

                for(int i = 0; i < qtdClientes; i++){
                    if(strcmp(nomeBusca, clientes[i].nomeCliente) == 0){
                        flag_cliente = 1;
                        posCliente = i;
                    }
                }

                if(flag_cliente){
                    printf("DADOS DE(A) %s\n", nomeBusca);
                    printf("---------------------------------------------------\n");
                    printf("Codigo do cliente: %s \n", clientes[posCliente].codCliente);
                    printf("Nome do cliente: %s \n", clientes[posCliente].nomeCliente);
                    printf("CPF do cliente: %s \n", clientes[posCliente].cpfCliente);
                    printf("Telefone do cliente: %s \n", clientes[posCliente].telCliente);
                    printf("---------------------------------------------------\n");
                }
            }
            else if(opcao == 4){
                printf("Função a ser implementada!");
            }
            else if(opcao == 5){
                printf("Função a ser implementada!");
            }
            else if(opcao == 6){
                printf("Função a ser implementada!");
            }


        } else if (opcao == 2) {
            printf("Atualizando Funcionalidades!\n");
            /*
            //parte da gerencia de pedidos
            printf("\n\n");
            printf("************  GERENCIAR PEDIDOS   ***********\n");
            printf("*  1-  Cadastrar pedido                     *\n");
            printf("*  2-  Listar pedidos de um cliente         *\n");
            printf("*  3-  Voltar ao menu principal             *\n");
            printf("*********************************************\n");

            // recebe a opção desejada
            printf("Opcao: \n");
            scanf("%d", &opcao);

            if(opcao == 1){
                //adiciona um novo pedido
                printf("Código do cliente que está fazendo o pedido: \n");
                fflush(stdin);
                gets(codAux);

                for(int i = 0; i < qtdClientes; i++){
                    if(strcmp(codAux, clientes[i].codCliente) == 0){
                        flag_pedido = 1;
                    }
                }

                if(flag_pedido){
                    printf("Digite 0 para terminar o pedido!\n");
                    while(1){
                        printf("Código do produto: \n");
                        scanf("%d", &codProduto);

                        for(int i = 0; i < qtdProdutos; i++){
                            if(codProduto == produtos[i].codProduto){
                                printf("Quantidade: ");
                                scanf("%d", &qtdProdutos);

                                if(qtdProdutos > produtos->estoqueProdutos){
                                    printf("Estoque insuficiente!\n");
                                    printf("-----------------------------------------\n");
                                }else{

                                }
                            }
                        }
                    }
                }else{
                    printf("Pessoa nao existente!\n");
                }

                //verifica e armazena qual o maior valor do produtose o nome dele
                for(int i = 0; qtdProdutos; i++){
                    if (produtos[i].valorProduto > produtos[i].valorMaiorProduto) {
                        strcpy(produtos[i].nomeMaiorProduto, produtos[i].nomeProduto);
                        produtos[i].valorMaiorProduto = produtos[i].valorProduto;
                    } else if (produtos[i].valorProduto < produtos[i].valorMaiorProduto) {
                        strcpy(produtos[i].nomeMenorProduto, produtos[i].nomeProduto);
                        produtos[i].valorMenorProduto = produtos[i].valorProduto;
                    }
                }


                //imprime os dados para confirmação
                printf("************   DADOS DO PEDIDO   ***********\n");
                printf("********************************************\n");
                printf("Código do cliente: %d \n", codAux);
                printf("Código do produto: %f \n", codProduto);
                printf("Quantidade do produto: %d \n", qtdPedidos);
                //calcula o valor total do pedido
                valorTotalPedido = valorProduto * qtdPedidos;
                printf("Valor total do pedido: R$%.2lf \n", valorTotalPedido);

            }
            else if (opcao == 2) {
                printf("Função a ser implementada!");
            }
            else if (opcao == 3) {
                printf("Função a ser implementada!");
            }

            */
        }else if(opcao == 3){
            printf("Atualizando Funcionalidades!\n");
            /*
            //parte da gerencia de produtos
            printf("\n\n");
            printf("************  GERENCIAR PRODUTOS   ***********\n");
            printf("*  1-  Cadastrar produto                     *\n");
            printf("*  2-  Listar produtos                       *\n");
            printf("*  3-  Voltar ao menu principal              *\n");
            printf("**********************************************\n");

            // recebe a opção desejada
            printf("Opcao: \n");
            scanf("%d", &opcao);

            if(opcao == 1){
                //adiciona um novo produto
                printf("Digite quantos produtos voce quer adicionar!\n");
                scanf("%d", &qtdProdutos);

                if(qtdProdutos > produtos->estoqueProdutos){
                    printf("Estoque insuficiente!\n");
                    printf("-----------------------------------------\n");
                }else{
                    for(int i = 0; i < qtdProdutos; i++){
                        printf("Id do produto: \n");
                        fflush(stdin);
                        gets(produtos[i].idProduto);

                        printf("Nome do produto: \n");
                        fflush(stdin);
                        gets(produtos[i].nomeProduto);

                        printf("Valor do produto: \n");
                        scanf("%lf", &produtos[i].valorProduto);
                    }
                }



                //imprime os dados para confirmação
                printf("************  DADOS CADASTRADOS  ***********\n");
                printf("********************************************\n");
                for(int i = 0; i < qtdProdutos; i++){
                    printf("ID do produto: %s \n", produtos[i].idProduto);
                    printf("Nome do produto: %s \n", produtos[i].nomeProduto);
                    printf("Valor do produto: %.2lf \n", produtos[i].valorProduto);
                    printf("-----------------------------------------\n");
                }
            }
            else if (opcao == 2) {
                printf("Função a ser implementada!");
            }
            else if (opcao == 3) {
                printf("Função a ser implementada!");
            }
            */
        }else if(opcao == 4){
            printf("Ate breve, Drikarts!");
            break;
        }
    }
    return 0;
}
