//
// Created by Pedro on 27/03/2022.
//

#ifndef PROJETO_FUNCAOCLIENTES_H
#define PROJETO_FUNCAOCLIENTES_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int qtd = 0;
int qtd_clientes = 0;
int pos_cliente = 0;
int flag_cliente = 0;
char nomeBusca[TAM];

int menu_clientes(){
    printf("+++++++++++++++++++++++++++++++\n");
    printf("++++ 1- Cadastrar clientes ++++\n");
    printf("++++ 2- Listar clientes    ++++\n");
    printf("++++ 3- Buscar             ++++\n");
    printf("++++ 4- Atualizar          ++++\n");
    printf("++++ 5- Voltar             ++++\n");
    printf("+++++++++++++++++++++++++++++++\n");

    printf("Digite uma opcao:");
    scanf("%d", &opcao);

    return opcao;
}

void cadastrar_cliente(){

    printf("Qtd de clientes: ");;
    scanf("%d", &qtd);

    if(qtd_clientes <= 0){
        //recebe as informações dos clientes
        for(int i = 0; i < qtd; i++){

            printf("Nome: ");
            fflush(stdin);
            gets(listaCliente[i].nomeCliente);

            printf("Codigo: ");
            fflush(stdin);
            gets(listaCliente[i].codCLiente);

            printf("CPF: ");
            fflush(stdin);
            gets(listaCliente[i].cpfCliente);

            printf("Telefone: ");
            fflush(stdin);
            gets(listaCliente[i].telefone);

            qtd_clientes++;
        }
    }else{
        //recebe as informações dos clientes
        for(int i = 0; i < qtd; i++){
            printf("qtd %d\n\n", qtd_clientes);

            printf("Nome: ");
            fflush(stdin);
            gets(listaCliente[qtd_clientes].nomeCliente);

            printf("Codigo: ");
            fflush(stdin);
            gets(listaCliente[qtd_clientes].codCLiente);

            printf("CPF: ");
            fflush(stdin);
            gets(listaCliente[qtd_clientes].cpfCliente);

            printf("Telefone: ");
            fflush(stdin);
            gets(listaCliente[qtd_clientes].telefone);

            qtd_clientes++;
        }
    }


}

void listar_clientes(){

    if(qtd_clientes == 0){

        printf("Nenhum cliente cadastrado!\n");

    }else{
        for(int i = 0; i < qtd_clientes; i++){

            printf("Nome: %s\n", listaCliente[i].nomeCliente);

            printf("Codigo: %s\n", listaCliente[i].codCLiente);

            printf("CPF: %s\n", listaCliente[i].cpfCliente);

            printf("Telefone: %s\n", listaCliente[i].telefone);

            printf("---------------------------------------\n");
        }
    }
}

void buscar_cliente(){
    pos_cliente = 0;
    flag_cliente = 0;

    if(qtd_clientes == 0){

        printf("Nenhum cliente cadastrado!\n");

    }else{
        printf("Digite o nome do cliente que deseja buscar: ");
        fflush(stdin);
        gets(nomeBusca);

        //verifica se existe algum cliente com o nome digitado
        for(int i =0 ; i < qtd_clientes; i++){
            if(strcmp(nomeBusca, listaCliente[i].nomeCliente) == 0){
                flag_cliente = 1;
                pos_cliente = i;
            }
        }

        if(flag_cliente){
            printf("Nome: %s\n", listaCliente[pos_cliente].nomeCliente);

            printf("Codigo: %s\n", listaCliente[pos_cliente].codCLiente);

            printf("CPF: %s\n", listaCliente[pos_cliente].cpfCliente);

            printf("Telefone: %s\n", listaCliente[pos_cliente].telefone);

            printf("---------------------------------------\n");
        }else{
            printf("Nenhum(a) %s encontrado(a) na lista!\n", nomeBusca);
        }
    }
}

void atualizar_cliente(){
    flag_cliente = 0;

    if(qtd_clientes > 0){
        printf("Digite o nome do cliente que deseja atualizar: ");
        fflush(stdin);
        gets(nomeBusca);

        //verifica se existe algum cliente com o nome digitado
        for(int i =0 ; i < qtd_clientes; i++){
            if(strcmp(nomeBusca, listaCliente[i].nomeCliente) == 0){
                flag_cliente = 1;
                pos_cliente = i;
            }
        }

        if(flag_cliente){

            printf("O que deseja atualizar?\n");

            printf("1- Nome: %s\n", listaCliente[pos_cliente].nomeCliente);

            printf("2- Codigo: %s\n", listaCliente[pos_cliente].codCLiente);

            printf("3- CPF: %s\n", listaCliente[pos_cliente].cpfCliente);

            printf("4- Telefone: %s\n", listaCliente[pos_cliente].telefone);

            scanf("%d", &opcao);

            if(opcao == 1){
                printf("Nome: ");
                fflush(stdin);
                gets(listaCliente[pos_cliente].nomeCliente);

            }else if(opcao == 2){
                printf("Codigo: ");
                fflush(stdin);
                gets(listaCliente[pos_cliente].codCLiente);

            }else if(opcao == 3){
                printf("CPF: ");
                fflush(stdin);
                gets(listaCliente[pos_cliente].cpfCliente);

            }else if(opcao == 4){
                printf("Telefone: ");
                fflush(stdin);
                gets(listaCliente[pos_cliente].telefone);

            }else{
                printf("opcao invalida!\n");
            }
        }else{
            printf("Nunhum(a) %s nao encontrado(a) na lista!\n", nomeBusca);
        }
    }else{
        printf("Nenhum cliente cadastrado!\n");
    }
}

#endif //PROJETO_FUNCAOCLIENTES_H
