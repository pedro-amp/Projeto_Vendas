//
// Created by Pedro on 27/03/2022.
//

#ifndef PROJETO_FUNCAOPRODUTOS_H
#define PROJETO_FUNCAOPRODUTOS_H

int qtd_produtos = 0;
int flag_produto = 0;
int pos_produto = 0;

int menu_produto(){
    printf("+++++++++++++++++++++++++++++++\n");
    printf("++++ 1- Cadastrar produto  ++++\n");
    printf("++++ 2- Listar produtos    ++++\n");
    printf("++++ 3- Voltar             ++++\n");
    printf("+++++++++++++++++++++++++++++++\n");

    printf("Digite uma opcao:");
    scanf("%d", &opcao);

    return opcao;
}

void cadastrar_produtos(){
    qtd = 0;

    printf("Qtd de produtos: ");
    scanf("%d", &qtd);

    if(qtd_produtos <= 0){
        //recebe as informações dos produtos
        for(int i = 0; i < qtd; i++){

            printf("Nome: ");
            fflush(stdin);
            gets(listaProdutos[i].nomeProduto);

            printf("ID: ");
            scanf("%d", &listaProdutos[i].idProduto);

            printf("Valor unitario: ");
            scanf("%f", &listaProdutos[i].valorUnitario);

            printf("Estoque: ");
            scanf("%d", &listaProdutos[i].qtdEstoque);

            printf("Descricao: ");
            fflush(stdin);
            gets(listaProdutos[i].descricao);

            qtd_produtos++;
        }
    }else{
        //recebe as informações dos produtos
        for(int i = 0; i < qtd; i++){
            printf("Nome: ");
            fflush(stdin);
            gets(listaProdutos[qtd_produtos].nomeProduto);

            printf("ID: ");
            scanf("%d", &listaProdutos[qtd_produtos].idProduto);

            printf("Valor unitario: ");
            scanf("%f", &listaProdutos[qtd_produtos].valorUnitario);

            printf("Estoque: ");
            scanf("%d", &listaProdutos[qtd_produtos].qtdEstoque);

            printf("Descricao: ");
            fflush(stdin);
            gets(listaProdutos[qtd_produtos].descricao);

            qtd_produtos++;
        }
    }
}

void listar_produtos(){

    if(qtd_produtos == 0){

        printf("Nenhum produto cadastrado!\n");

    }else{
        for(int i = 0; i < qtd_produtos; i++){

            printf("Nome: %s\n", listaProdutos[i].nomeProduto);

            printf("ID: %d\n", listaProdutos[i].idProduto);

            printf("Valor unitario: %.2f\n", listaProdutos[i].valorUnitario);

            printf("Estoque: %d\n", listaProdutos[i].qtdEstoque);

            printf("Descricao: %s\n", listaProdutos[i].descricao);

            printf("---------------------------------------\n");
        }
    }
}

#endif //PROJETO_FUNCAOPRODUTOS_H
