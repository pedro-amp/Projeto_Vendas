//
// Created by Pedro on 27/03/2022.
//

#ifndef PROJETO_MENUPRINCIPAL_H
#define PROJETO_MENUPRINCIPAL_H
int opcao = 0;


void inicio() {
    printf(" //////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("               SEJA BEM VINDO A DRICAPAPER.PERSONALIZADOS\n");
    printf("\n");
    printf(" //////////////////////////////////////////////////////////////////////\n\n");
}

int menu_principal(){
    printf("++++++++++++++++++++\n");
    printf("++++ 1- Cliente ++++\n");
    printf("++++ 2- Produto ++++\n");
    printf("++++ 3- Pedido  ++++\n");
    printf("++++++++++++++++++++\n");

    printf("Digite uma opcao:");
    scanf("%d", &opcao);

    return opcao;
}

#endif //PROJETO_MENUPRINCIPAL_H
