
#include <stdio.h>

int main() {
    float custoMercadoria, valorFrete, despesasEventuais, valorVenda, lucro ,custoTotal, percentualLucro;
    
    
    printf("Digite o custo da mercadoria: ");
    scanf("%f", &custoMercadoria);
    
    printf("Digite o valor do frete: ");
    scanf("%f", &valorFrete);
    
    printf("Digite o valor das despesas eventuais: ");
    scanf("%f", &despesasEventuais);
    

     custoTotal = custoMercadoria + valorFrete + despesasEventuais;
    
   
    printf("Digite o valor de venda: ");
    scanf("%f", &valorVenda);
    
    
    lucro = valorVenda - custoTotal;
  percentualLucro = (lucro / custoTotal) * 100;
    

    printf("\nResumo:\n");
    printf("Custo Total: %.2f\n", custoTotal);
    printf("Lucro: %.2f\n", lucro);
    printf("Percentual de Lucro: %.2f%%\n", percentualLucro);
    
    return 0;
}


