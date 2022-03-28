#include <stdio.h>
#include "cliente.h"
#include "produtos.h"
#include "pedidos.h"
#include "menuPrincipal.h"
#include "funcaoClientes.h"
#include "funcaoProdutos.h"
#include "funcaoPedidos.h"

#include "windows.h"

int main() {

    //inicializa o programa e mostra o menu principal
    inicio();

    listaCliente = malloc(qtd * sizeof (infoClientes));
    listaProdutos = malloc(qtd * sizeof (infoProdutos));
    listaPedidos = malloc(qtd * sizeof (infoPedidos));

    while(1){

        opcao = 0;
        printf("\n\n");
        opcao = menu_principal();

        //CLIENTES
        if(opcao == 1){

            opcao = 0;
            printf("\n\n");
            menu_clientes();

            //CADASTRAR CLIENTE
            if(opcao == 1){

                opcao = 0;
                printf("\n\n");
                cadastrar_cliente();

            //LISTAR CLIENTES
            }else if(opcao == 2){

                opcao = 0;
                printf("\n\n");
                listar_clientes();

            //BUSCAR CLIENTE
            }else if(opcao == 3){

                opcao = 0;
                printf("\n\n");
                buscar_cliente();

            //ATUALIZAR CLIENTE
            }else if(opcao == 4){

                opcao = 0;
                printf("\n\n");
                atualizar_cliente();

            }else if(opcao == 5){

                //SAIR DO MENU DE CLIENTE
                printf("Voltando...");
                Sleep(1000);

            }else{

                //OPCAO INVALIDA
                printf("Opcao invalida!\n");
                Sleep(1000);
            }

        //PRODUTOS
        }else if(opcao == 2){

            opcao = 0;
            printf("\n\n");
            opcao = menu_produto();

            if(opcao == 1){

                opcao = 0;
                //CADASTRAR PRODUTOS
                printf("\n\n");
                cadastrar_produtos();

            }else if(opcao == 2){

                opcao = 0;
                //LISTAR PRODUTOS
                printf("\n\n");
                listar_produtos();

            }else if(opcao == 3){

                //SAIR DO MENU PRODUTOS
                printf("Voltando...");
                Sleep(1000);

            }else{

                //OPCAO INVALIDA
                printf("Opcao invalida!\n");
                Sleep(1000);

            }

        //PEDIDO
        }else if(opcao == 3){

            opcao = 0;
            printf("\n\n");
            menu_pedidos();

            if(opcao == 1){

                opcao = 0;
                //CADASTRAR PEDIDO
                printf("\n\n");
                cadastrar_pedido();

            }else if(opcao == 2){

                printf("Voltando...\n");
                Sleep(1000);

            }else{

                //OPCAO INVALIDA
                printf("Opcao invalida!\n");
                Sleep(1000);

            }

        }else if(opcao == 3){

            //SAIR DO PROGRAMA
            printf("Ate breve!\n");
            break;

        }else{

            //OPCAO INVALIDA
            printf("Opcao invalida!\n");
            Sleep(1000);

        }
    }

    return 0;
}
