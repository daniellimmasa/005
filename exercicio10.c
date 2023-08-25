#include <stdio.h>

int main() {
    int numCarrosVendidos;
    float valorTotalVendas, salarioFixo, valorPorCarro, salarioFinal;
    float comissaoPorVenda, comissaoPorVendasTotal;

    
    printf("Digite o número de carros vendidos: ");
    scanf("%d", &numCarrosVendidos);
    
    printf("Digite o valor total das vendas: ");
    scanf("%f", &valorTotalVendas);
    
    printf("Digite o salário fixo: ");
    scanf("%f", &salarioFixo);
    
    printf("Digite o valor por carro vendido: ");
    scanf("%f", &valorPorCarro);
    
    
    comissaoPorVenda = valorPorCarro * 0.05; 
    comissaoPorVendasTotal = comissaoPorVenda * numCarrosVendidos;
    
    
    salarioFinal = salarioFixo + comissaoPorVendasTotal + (valorTotalVendas * 0.05); 
    
    
    printf("O salário final do vendedor é: %.2f\n", salarioFinal);
    
    return 0;
}
