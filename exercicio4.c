#include <stdio.h>

int main() {
    float valorEmReais, cotacaoDolar, valorEmDolares;
    
   
    printf("Digite o valor em reais: ");
    scanf("%f", &valorEmReais);
    
    printf("Digite a cotacao do dolar: ");
    scanf("%f", &cotacaoDolar);
    
  
    valorEmDolares = valorEmReais / cotacaoDolar;
    
  
    printf("O valor em dólares é: %.2f\n", valorEmDolares);
    
    return 0;
}
