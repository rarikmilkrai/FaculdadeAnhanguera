#include <stdio.h>

int main() {
    float salarioBruto, inss, ir, salarioLiquido;

    printf("Informe o salario bruto: ");
    scanf("%f", &salarioBruto);

    //Calculo do INSS
    if (salarioBruto <= 1045) {
        inss = salarioBruto * 0.075;
    } else if (salarioBruto <= 2089.60) {
        inss = salarioBruto * 0.09;
    } else if (salarioBruto <= 3134.40) {
        inss = salarioBruto * 0.12;
    } else {
        inss = salarioBruto * 0.14;
    }

    //Calculo do IR
    float salarioBase = salarioBruto - inss;
    if (salarioBase <= 1903.98) {
        ir = 0;
    } else if (salarioBase <= 2826.65) {
        ir = (salarioBase * 0.075) - 142.80;
    } else if (salarioBase <= 3751.05) {
        ir = (salarioBase * 0.15) - 354.80;
    } else if (salarioBase <= 4664.68) {
        ir = (salarioBase * 0.225) - 636.13;
    } else {
        ir = (salarioBase * 0.275) - 869.36;
    }

    //Calculo do salario liquido
    salarioLiquido = salarioBruto - inss - ir;

    printf("Salario liquido: R$%.2f\n", salarioLiquido);

    return 0;
}
