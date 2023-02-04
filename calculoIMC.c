#include <stdio.h>
#include <math.h>

float calcularImc(float peso, float altura) {
    return peso / pow(altura, 2);
}

int main() {
    float peso, altura, imc;

    printf("Digite seu peso (em kg): ");
    scanf("%f", &peso);

    printf("Digite sua altura (em metros): ");
    scanf("%f", &altura);

    imc = calcularImc(peso, altura);

    printf("Seu IMC é: %.2f\n", imc);

    if (imc < 18.5) {
        printf("Você está abaixo do peso\n");
    } else if (imc >= 18.5 && imc < 25) {
        printf("Seu peso está dentro da faixa saudável\n");
    } else if (imc >= 25 && imc < 30) {
        printf("Você está com sobrepeso\n");
    } else if (imc >= 30 && imc < 35) {
        printf("Você está com obesidade grau I\n");
    } else if (imc >= 35 && imc < 40) {
        printf("Você está com obesidade grau II (severa)\n");
    } else {
        printf("Você está com obesidade grau III (mórbida)\n");
    }

    return 0;
}
