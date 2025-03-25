#include <stdio.h>

#include <stdio.h>

int main()
{
    int numero = 0;
    char resposta;

    while (1)
    {
        printf("Numero: %d\n", numero);
        printf("Deseja continuar? (S/N): ");
        scanf(" %c", &resposta);

        if (resposta == 'N' || resposta == 'n')
        {
            printf("Encerrando o programa.\n");
            break;
        }
        else if (resposta == 'S' || resposta == 's')
        {
            numero++;
        }
        else
        {
            printf("Entrada inválida! Digite S para continuar ou N para sair.\n");
        }
    }

    return 0;
}