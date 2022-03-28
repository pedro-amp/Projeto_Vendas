//
// Created bchy Pedro on 27/03/2022.
//

#ifndef PROJETO_CLIENTE_H
#define PROJETO_CLIENTE_H
#define TAM 30

typedef struct {
    char nomeCliente[TAM];
    char codCLiente[TAM];
    char cpfCliente[TAM];
    char telefone[TAM];

}infoClientes;

infoClientes* listaCliente;

#endif //PROJETO_CLIENTE_H
