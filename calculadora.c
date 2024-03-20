#include <stdio.h>

float soma(float num1, float num2) {
    float resultado = num1 + num2;
    printf("Resultado: %.2f\n", resultado);
    return resultado;
}
float subtracao(float num1, float num2) {
    float resultado = num1 - num2;
    printf("Resultado: %.2f\n", resultado);
    return resultado;
}
float multiplicacao(float num1, float num2) {
    float resultado = num1 * num2;
    printf("Resultado: %.2f\n", resultado);
    return resultado;
}
float divisao(float num1, float num2) {
    if (num2 != 0) {
        float resultado = num1 / num2;
        printf("Resultado: %.2f\n", resultado);
        return resultado;
    } else {
        printf("Erro! Divisão por zero.\n");
        return 0;
    }
}

char Escolha_Operador() {
  char operador;
  float num1, num2, resultado;
  printf("Digite a operação (+, -, *, /): ");
  scanf("%c", &operador);
  printf("Digite o primeiro número: ");
  scanf("%f", &num1);
  printf("Digite o segundo número: ");
  scanf("%f", &num2);
    switch (operador) {
        case '+':
            soma(num1, num2);
            break;
        case '-':
            subtracao(num1, num2);
            break;
        case '*':
            multiplicacao(num1, num2);
            break;
        case '/':
            divisao(num1, num2);
            break;
        default:
            printf("Operador inválido.\n");
                }
  return 0;
}
int main() {
  Escolha_Operador();
  return 0;
}
