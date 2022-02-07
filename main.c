#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>


// função principal
int main( ) {
    //definir o idioma para o portugues
    setlocale(LC_ALL, "Portuguese");


    // declaração de variáveis

    //global
    int opcao = 0;

    //variáveis para produto
    char nomeProduto[50], nomeAlteracao[50], idProduto[100], idAlteracao[100], nomeMaiorProduto[50], nomeMenorProduto[50];

    //variáveis para pedidos
    char idPedido[100];
    int qtdPedidos = 0;
    double valorTotalPedido = 0;

    //variáveis para clientes
    int qtdClientes = 1;
    char nomeCliente[qtdClientes][50], codCliente[10], ruaCliente[50], bairroCliete[50], cidadeCliente[50];
    int cpfCliente, telCliente, codBusca;

    //variáveis para produtos
    double valorProduto = 0, valorAlteracao = 0, valorMaiorProduto = 0, valorMenorProduto = 0, codProduto = 0;



    // verifica qual a opção escolhida e realiza a tarefa
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
                printf("Codigo do cliente: ");
                scanf("%s", codCliente);

                printf("Nome do cliente: ");
                for(int i  = 0; i < qtdClientes; i++){
                    gets(nomeCliente[i]);
                }

                printf("CPF do cliente: ");
                scanf("%d", cpfCliente);

                printf("Telefone do cliente: ");
                scanf("%d", telCliente);

                //mostra as informações para ver se está correta
                printf("************  DADOS CADASTRADOS  ***********\n");
                printf("********************************************\n");
                printf("Código do cliente: %s \n", codCliente);
                for(int i = 0; i < qtdClientes; i++){
                    printf("Nome do cliente: %s \n", nomeCliente[i]);
                }
                printf("CPF do cliente: %d \n", cpfCliente);
                printf("Telefone do cliente: %d \n", telCliente);

                //printf("Deseja salvar? (s/n): \n");

            }
            else if(opcao == 2){
                printf("Função a ser implementada!");
            }
            else if(opcao == 3){
                printf("Função a ser implementada!");
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
            //parte da gerencia de pedidos
            printf("\n\n");
            printf("************  GERENCIAR PEDIDOS   ***********\n");
            printf("*  1-  Cadastrar pedido                     *\n");
            printf("*  2-  Listar pedidos de um cliente         *\n");
            printf("*  3-  Listar pedidos de um determinado dia *\n");
            printf("*  4-  Voltar ao menu principal             *\n");
            printf("*********************************************\n");

            // recebe a opção desejada
            printf("Opcao: \n");
            scanf("%d", &opcao);

            if(opcao == 1){
                //adiciona um novo pedido
                printf("Código do cliente que está fazendo o pedido: \n");
                scanf("%s", codCliente);

                printf("Quantidade de produtos pedidos: ");
                scanf("%d", &qtdPedidos);

                printf("Código do produto: \n");
                scanf("%s", codProduto);

                //verifica e armazena qual o maior valor do produtose o nome dele
                if (valorProduto > valorMaiorProduto) {
                    strcpy(nomeMaiorProduto, nomeProduto);
                    valorMaiorProduto = valorProduto;
                } else if (valorProduto < valorMaiorProduto) {
                    strcpy(nomeMenorProduto, nomeProduto);
                    valorMenorProduto = valorProduto;
                }

                //imprime os dados para confirmação
                printf("************   DADOS DO PEDIDO   ***********\n");
                printf("********************************************\n");
                printf("Código do cliente: %s \n", codCliente);
                printf("Código do produto: %s \n", codProduto);
                printf("Quantidade do produto: %s \n", qtdPedidos);
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
            else if (opcao == 4) {
                printf("Função a ser implementada!");
            }


        }else if(opcao == 3){
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
                printf("Id do produto: \n");
                scanf("%s", &idProduto);

                printf("Nome do produto: \n");
                scanf("%s", nomeProduto[50]);

                printf("Valor do produto: \n");
                scanf("%lf", &valorProduto);

                //imprime os dados para confirmação
                printf("************  DADOS CADASTRADOS  ***********\n");
                printf("********************************************\n");
                printf("ID do produto: %s \n", idProduto);
                printf("Nome do produto: %s \n", nomeProduto);
                printf("Valor do produto: %.2lf \n", valorProduto);
            }
            else if (opcao == 2) {
                printf("Função a ser implementada!");
            }
            else if (opcao == 3) {
                printf("Função a ser implementada!");
            }

        }else if(opcao == 4){
            printf("Ate breve, Drikarts!");
            break;
        }

        printf("Ate breve, Drikarts!");


        return 0;
    }
}