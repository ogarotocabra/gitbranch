#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "");
    float nm1,nm2;
    char operador;
    printf("Digite o primeiro n�mero: ");
    scanf("%f", &nm1);
    setbuf(stdin, NULL);
    printf("\nEscolha o operador:");
    scanf("%c", &operador);
    printf("\nDigite o segundo n�mero: ");
    scanf("%f", &nm2);

    switch(operador)
    {
        case '+':
            printf("\nResultado: %.2f", nm1+nm2);
            break;

        case '-':
            printf("\nResultado: %.2f", nm1-nm2);
            break;


