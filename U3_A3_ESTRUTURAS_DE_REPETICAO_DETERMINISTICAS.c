#include <stdio.h> 
int main() { 
int num, fatorial = 1; 
printf("Digite um número inteiro positivo: "); 
scanf("%d", &num); 
if (num < 0) { 
printf("Número inválido.\n"); 
} else { 
int i = num; 
do { 
fatorial *= i; 
i--; 
} while (i > 0); 
printf("O fatorial de %d é: %d\n", num, fatorial); 
} 
return 0; 
} 