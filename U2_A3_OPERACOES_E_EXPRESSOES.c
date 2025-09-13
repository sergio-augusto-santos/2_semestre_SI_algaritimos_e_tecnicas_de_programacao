#include <stdio.h>
#include <string.h>
#include <math.h> 

void mensagem() {
    printf("programa valor total do financiamento\n");
}

float jurosComposto(float principal, float taxa, float tempo) {
    // Fórmula: M = P * (1 + i)^n
    float montante = principal * pow(1 + taxa, tempo);
    return montante;
}

float resultadoFinanciamento(float parcela, int meses, float taxa) {
    float anos = meses / 12.0;
    float total = jurosComposto(parcela, taxa, anos);
    return total;
}

int main() {
    mensagem();
    int idade = 0;
    float parcela;
    float taxa = 0.05;
    int meses;
    char nome[50];
    // Variáveis compostas
    int vetor[3] = {10, 20, 30};
    float matriz[2][2] = {{1.1, 2.2}, {3.3, 4.4}};
    // Ponteiros
    int *ptr_idade = &idade;
    float *ptr_parcela = &parcela;
    char *ptr_nome = nome;
    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Digite o valor da parcela: ");
    scanf("%f", &parcela);
    printf("Digite o tempo em meses: ");
    scanf("%d", &meses);
    float resultado = resultadoFinanciamento(parcela, meses, taxa);
    float valorTotalSemJuros = parcela * meses;
    float valorTotalComJuros = resultado;
    printf("Nome: %s | Idade: %d\n", nome, idade);
    printf("Vetor: %d, %d, %d\n", vetor[0], vetor[1], vetor[2]);
    printf("Matriz: %.1f %.1f | %.1f %.1f\n", matriz[0][0], matriz[0][1], matriz[1][0], matriz[1][1]);
    printf("Ponteiro idade: %d | Ponteiro parcela: %.2f | Ponteiro nome: %s\n", *ptr_idade, *ptr_parcela, ptr_nome);
    printf("Valor final do financiamento após %d meses: R$ %.2f\n", meses, resultado);
    printf("Valor total pago sem juros: R$ %.2f\n", valorTotalSemJuros);
    printf("fim do programa\n");
    char repetir;
    printf("Deseja repetir o cálculo? (s/n): ");
    scanf(" %c", &repetir);
    if (repetir == 's' || repetir == 'S');
    return 0;
}