//
// Created by Pedro on 13/03/2022.
//

#ifndef SISTEMA_VENDAS_DADOS_H
#define SISTEMA_VENDAS_DADOS_H

typedef struct {
    char nomeProduto[30], nomeAlteracao[30], idProduto[10], idAlteracao[10], nomeMaiorProduto[30], nomeMenorProduto[30];
    double valorProduto, valorAlteracao, valorMaiorProduto, valorMenorProduto, codProduto;
    int estoqueProdutos;
}infoProdutos;

typedef struct {
    char nomeCliente[50], codCliente[10], cpfCliente[12], telCliente[12];
}infoClientes;

typedef struct {
    char idPedido[30];
    int qtdPedidos;
    double valorTotalPedido;
}infoPedidos;

#endif //SISTEMA_VENDAS_DADOS_H
