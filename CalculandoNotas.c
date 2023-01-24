#include <stdio.h>

int main() {
    float nota, somaNotas = 0, media;
    int contNotas = 0, continuar;

    do {
        printf("Informe a nota: ");
        scanf("%f", &nota);
        somaNotas += nota;
        contNotas++;

        printf("Deseja continuar digitando notas? (1 - sim / 0 - nao): ");
        scanf("%d", &continuar);
    } while (continuar != 0);

    media = somaNotas / contNotas;

    printf("Media das notas: %.2f\n", media);

    return 0;
}
