//
// Created by Pedro on 27/03/2022.
//

#ifndef PROJETO_PRODUTOS_H
#define PROJETO_PRODUTOS_H
#define TAM 30

typedef struct {
    char nomeProduto[TAM];
    int idProduto;
    float valorUnitario;
    int qtdEstoque;
    char descricao[TAM];

}infoProdutos;

infoProdutos* listaProdutos;

#endif //PROJETO_PRODUTOS_H
