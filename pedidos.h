//
// Created by Pedro on 27/03/2022.
//

#ifndef PROJETO_PEDIDOS_H
#define PROJETO_PEDIDOS_H
#define TAM 30

typedef struct {
    int idPedido;
    int idProduto;
    char nomeProduto[TAM];
    char nomeCliente[TAM];
    float valorTotal;
}infoPedidos;

infoPedidos* listaPedidos;

#endif //PROJETO_PEDIDOS_H
