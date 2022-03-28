//
// Created by Pedro on 27/03/2022.
//

#ifndef PROJETO_FUNCAOPEDIDOS_H
#define PROJETO_FUNCAOPEDIDOS_H

int qtd_pedidos = 0;

int menu_pedidos(){
    printf("+++++++++++++++++++++++++++++++\n");
    printf("++++ 1- Cadastrar pedido  ++++\n");
    printf("++++ 2- Listar pedidos    ++++\n");
    printf("++++ 3- Voltar             ++++\n");
    printf("+++++++++++++++++++++++++++++++\n");

    printf("Digite uma opcao:");
    scanf("%d", &opcao);

    return opcao;
}

void cadastrar_pedido(){

    /*// criando a variável ponteiro para o arquivo
    FILE *pont_arq;

    //abrindo o arquivo
    pont_arq = fopen("arquivo.txt", "a");

    // fechando arquivo
    fclose(pont_arq);

    //mensagem para o usuário
    printf("O arquivo foi criado com sucesso!\n");
    system("pause");*/

    flag_cliente = 0;
    flag_produto = 0;
    int idBusca = 0;

    printf("Nome de quem esta fazendo o pedido: ");
    fflush(stdin);
    gets(nomeBusca);

    //verifica se existe algum cliente com o nome digitado
    for(int i =0 ; i < qtd_clientes; i++){
        if(strcmp(nomeBusca, listaCliente[i].nomeCliente) == 0){
            flag_cliente = 1;
            pos_cliente = i;
        }
    }

    //caso o cliente exista
    if(flag_cliente){

        printf("ID do produto: ");
        scanf("%d", &idBusca);

        //verifica se ha algum produto com o id digitado
        for(int i = 0; i < qtd_produtos; i++){
            if(idBusca == listaProdutos[i].idProduto){
                flag_produto = 1;
                pos_produto = i;
            }
        }

        if(flag_produto){

            printf("Quantidade deste item: ");
            scanf("%d", &qtd_pedidos);

            if(qtd_pedidos > listaProdutos[pos_produto].qtdEstoque){
                printf("Estoque insuficiente!\n\n");

            }else{

                listaPedidos->valorTotal = (qtd_pedidos * listaProdutos[pos_produto].valorUnitario);
                listaProdutos[pos_produto].qtdEstoque -= qtd_pedidos;

                //imprime os dados para confirmação
                printf("\n");
                printf("************   RESUMO DO PEDIDO   ***********\n");
                printf("********************************************\n");
                printf("Cliente: (%s - %s)\n", listaCliente[pos_cliente].nomeCliente, listaCliente[pos_cliente].codCLiente);
                /*fprintf(filePedidos, "%s\n", listaCliente[pos_cliente].nomeCliente);
                fprintf(filePedidos, "%s\n", listaCliente[pos_cliente].codCLiente);*/

                printf("Codigo do produto: %d \n", listaProdutos->idProduto);
                //fprintf(filePedidos, "%d\n", listaPedidos->idPedido);

                printf("Quantidade do produto: %d \n", qtd_pedidos);
                //fprintf(filePedidos, "%d\n", qtd_pedidos);

                printf("Valor total do pedido: R$%.2lf \n", listaPedidos->valorTotal);
                //fprintf(filePedidos, "%.2f", listaPedidos->valorTotal);

                //system("pause");
            }

        }else{
            printf("Id %d nao encontrado na lista!\n", idBusca);
        }



    }else{
        printf("%s nao encontrado na lista!\n", nomeBusca);
    }
}


#endif //PROJETO_FUNCAOPEDIDOS_H
