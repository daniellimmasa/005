#include <stdio.h>

int main() {
    float custoFabrica, percentualDistribuidor, percentualImpostos, custoConsumidor;
    
    percentualDistribuidor = 0.28;   
    percentualImpostos = 0.45;       
    
    
    printf("Digite o custo de fábrica do carro: ");
    scanf("%f", &custoFabrica);
    
    
    custoConsumidor = custoFabrica + (custoFabrica * percentualDistribuidor) + (custoFabrica * percentualImpostos);
    
    
    printf("O custo final ao consumidor e: %.2f\n", custoConsumidor);
    
    return 0;
}
