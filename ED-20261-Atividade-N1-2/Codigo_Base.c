/*----------------------------------------------------------------------------------*/
/*FATEC-Ipiranga                                                                    */        
/*ADS - Estrutura de Dados                                                          */
/*Id da Atividade: N1-2                                                             */
/*Objetivo: Estado de memória                                                       */
/*                                                                                  */
/*Autor: SposatoDev                                                                 */                                                                */
/*----------------------------------------------------------------------------------*/

#include <stdio.h>

// Imprime o número invertido (versão iterativa)
void imprimirInvertido(int numero) {
    if (numero == 0) {
        printf("0");
        return;
    }

    printf("Resultado: ");
    for (; numero > 0; numero /= 10) {
        int digito = numero % 10;
        printf("%d", digito);
    }
    printf("\n");
}

int main(void) {
    int valor = 54321;

    printf("Numero original: %d\n", valor);
    imprimirInvertido(valor);

    return 0;
}
