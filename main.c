#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include "dados.h"
#include "windows.h"

// função principal
int main( ) {
    //definir o idioma para o portugues
    setlocale(LC_ALL, "Portuguese");

    //global
    int opcao = 0;

    //variaveis para clientes
    int qtdClientes = 0, qtdCadastrados = 0, flag_cliente = 0, posCliente = 0;
    char codAux[10], nomeBusca[50];

    infoClientes clientes[qtdClientes];
    infoPedidos pedidos[30];
    infoProdutos produtos[30];

    //variáveis para pedidos
    int flag_pedido = 0, posAuxPedido = 0;

    //variáveis para produtos
    int qtdProdutos = 0, qtdProdutosCadastrados = 0, codProduto = 0;


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

                    qtdCadastrados += qtdClientes;

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
                system("pause");

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
                system("pause");

            }
            else if(opcao == 3){
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
                system("pause");

            }
            else if(opcao == 4){
                flag_cliente = 0;
                posCliente = 0;
                int op = 0;

                if(qtdClientes > 0){
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
                        printf("1 -Nome do cliente: %s \n", clientes[posCliente].nomeCliente);
                        printf("2- CPF do cliente: %s \n", clientes[posCliente].cpfCliente);
                        printf("3- Telefone do cliente: %s \n", clientes[posCliente].telCliente);
                        printf("4-  Voltar ao menu principal\n");
                        printf("---------------------------------------------------\n");

                        printf("O que deseja atualizar? ");
                        scanf("%d", &op);

                        while(1){
                            if(op == 1){
                                printf("Novo nome: \n");
                                fflush(stdin);
                                gets(clientes[posCliente].nomeCliente);

                                //informacoes atualizadas
                                printf("DADOS DE(A) %s\n", nomeBusca);
                                printf("---------------------------------------------------\n");
                                printf("Codigo do cliente: %s \n", clientes[posCliente].codCliente);
                                printf("Nome do cliente: %s \n", clientes[posCliente].nomeCliente);
                                printf("CPF do cliente: %s \n", clientes[posCliente].cpfCliente);
                                printf("Telefone do cliente: %s \n", clientes[posCliente].telCliente);
                                printf("---------------------------------------------------\n");
                                break;

                            }else if(op == 2){
                                printf("Novo CPF: \n");
                                fflush(stdin);
                                gets(clientes[posCliente].cpfCliente);

                                //informacoes atualizadas
                                printf("DADOS DE(A) %s\n", nomeBusca);
                                printf("---------------------------------------------------\n");
                                printf("Codigo do cliente: %s \n", clientes[posCliente].codCliente);
                                printf("Nome do cliente: %s \n", clientes[posCliente].nomeCliente);
                                printf("CPF do cliente: %s \n", clientes[posCliente].cpfCliente);
                                printf("Telefone do cliente: %s \n", clientes[posCliente].telCliente);
                                printf("---------------------------------------------------\n");
                                break;

                            }else if(op == 3){
                                printf("Novo telefone: \n");
                                fflush(stdin);
                                gets(clientes[posCliente].telCliente);

                                //informacoes atualizadas
                                printf("DADOS DE(A) %s\n", nomeBusca);
                                printf("---------------------------------------------------\n");
                                printf("Codigo do cliente: %s \n", clientes[posCliente].codCliente);
                                printf("Nome do cliente: %s \n", clientes[posCliente].nomeCliente);
                                printf("CPF do cliente: %s \n", clientes[posCliente].cpfCliente);
                                printf("Telefone do cliente: %s \n", clientes[posCliente].telCliente);
                                printf("---------------------------------------------------\n");
                                break;

                            }else if(op == 4){
                                break;
                            }else{
                                printf("Opcao invalida!\n");
                                break;
                            }
                        }
                    }else{
                        printf("Nenhuma pessoa cadastrada com esse nome!\n\n");
                    }
                }else{
                    printf("Nenhuma pessoa cadastrada!\n\n");
                }
                system("pause");

            }
            else if(opcao == 5){
                printf("Função a ser implementada!");
                system("pause");
            }
            else if(opcao == 6){
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
                printf("Codigo do cliente que esta fazendo o pedido: \n");
                fflush(stdin);
                gets(codAux);

                for(int i = 0; i < qtdClientes; i++){
                    if(strcmp(codAux, clientes[i].codCliente) == 0){
                        flag_pedido = 1;
                        posCliente = i;
                    }
                }

                if(flag_pedido){
                    flag_pedido = 0;

                    printf("Codigo do produto: \n");
                    scanf("%d", &codProduto);

                    for(int i = 0; i < qtdProdutosCadastrados; i++){
                        if(codProduto == produtos[i].codProduto) {
                            flag_pedido = 1;
                            posAuxPedido = i;
                        }
                    }

                    if(flag_pedido){
                        printf("Quantidade: ");
                        scanf("%d", &qtdProdutos);

                        if(qtdProdutos > produtos->estoqueProdutos[posAuxPedido]){
                            printf("Estoque insuficiente!\n");
                            printf("-----------------------------------------\n");
                        }else{
                            pedidos->valorTotalPedido = qtdProdutos * produtos[posAuxPedido].valorProduto;
                            break;
                        }
                        //imprime os dados para confirmação
                        printf("************   RESUMO DO PEDIDO   ***********\n");
                        printf("********************************************\n");
                        printf("Codigo do cliente: %s \n", clientes[posCliente].codCliente);
                        printf("Codigo do produto: %f \n", produtos->codProduto);
                        printf("Quantidade do produto: %d \n", qtdProdutos);
                        printf("Valor total do pedido: R$%.2lf \n", pedidos->valorTotalPedido);
                        system("pause");
                    }

                }else{
                    printf("Pessoa nao existente!\n");
                    break;
                }

            }
            else if (opcao == 2) {
                printf("Funcao a ser implementada!");
            }
            else if (opcao == 3) {
                printf("Funcao a ser implementada!");
            }

            */
        }else if(opcao == 3){
            //printf("Atualizando Funcionalidades!\n");

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

                for(int i = 0; i < qtdProdutos; i++){
                    printf("Id do produto: \n");
                    fflush(stdin);
                    gets(produtos[i].idProduto);

                    printf("Nome do produto: \n");
                    fflush(stdin);
                    gets(produtos[i].nomeProduto);

                    printf("Quantidade em estoque: \n");
                    scanf("%d", &produtos[i].estoqueProdutos[i]);

                    printf("Valor do produto: \n");
                    scanf("%lf", &produtos[i].valorProduto);
                    printf("-----------------------------------------\n\n");
                }

                //imprime os dados para confirmação
                printf("************  DADOS CADASTRADOS  ***********\n");
                printf("********************************************\n");
                for(int i = 0; i < qtdProdutos; i++){
                    printf("ID do produto: %s \n", produtos[i].idProduto);
                    printf("Nome do produto: %s \n", produtos[i].nomeProduto);
                    printf("Quantidade em estoque: %d\n", produtos[i].estoqueProdutos[i]);
                    printf("Valor do produto: %.2lf \n", produtos[i].valorProduto);
                    printf("-----------------------------------------\n");
                }

                qtdProdutosCadastrados += qtdProdutos;

                system("pause");
            }
            else if (opcao == 2) {
                for(int i = 0; i  < qtdProdutosCadastrados; i++){
                    printf("ID do produto: %s \n", produtos[i].idProduto);
                    printf("Nome do produto: %s \n", produtos[i].nomeProduto);
                    printf("Quantidade em estoque: %d\n", produtos[i].estoqueProdutos[i]);
                    printf("Valor do produto: %.2lf \n", produtos[i].valorProduto);
                    printf("-----------------------------------------\n");
                }
                system("pause");

            }
            else if (opcao == 3) {
                break;
                system("pause");
            }

        }else if(opcao == 4){
            printf("Ate breve, Drikarts!");
            break;
        }
    }
    return 0;
}
