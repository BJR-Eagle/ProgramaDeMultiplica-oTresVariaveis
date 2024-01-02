#include <stdio.h>

//Declara as variaveis
int n1, n2, n3, produto;

int main()
{

    //Coletar Valores da variavel n1
    printf("Digite o valor de n1:");
    scanf("%d", &n1);

    //Erro caso o valor de n1 seja 0
    if(n1 == 0) {
        return printf("O valor tem que ser diferente de 0");
    } else {

        //Coletar Valores da variavel n2
        printf("Digite o valor de n2:");
        scanf("%d", &n2);

        //Erro caso o valor de n2 seja 0
        if(n2 == 0) {
            printf("O valor tem que ser diferente de 0");
        } else {

            //Coletar Valores da variavel n3
            printf("Digite o valor de n3:");
            scanf("%d", &n3);

            //Erro caso o valor de n3 seja 0
            if(n3 == 0) {
                printf("O valor tem que ser diferente de 0");
            } else {
                //realizar multiplicação das variaveis n1, n2 e n3
                produto = (n1 * n2 * n3);

                //Imprimir em tela o resultado obtido
                printf("O produto é: ");
                printf("%d", produto);
            }
        }
    }
    return 0;
}