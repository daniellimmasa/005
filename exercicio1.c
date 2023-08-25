#include<stdio.h>
#include<math.h>
int main(){
int num1, num2, soma, sub, mult;
float div;

printf("digite o primeiro numero ");
scanf("\n %d", &num1);

printf("digite o segundo numero ");
scanf("\n %d", &num2);

soma = num1 + num2;
sub = num1 - num2;
mult = num1 * num2;
div = (float)num1 / (float)num2;

printf( " a soma de %d + %d e: %d \n ", num1, num2, soma);
printf( " a sub de %d - %d e: %d \n ", num1, num2, sub);
printf( " a mult de %d * %d e: %d \n ",num1, num2, mult);
printf( " a div de %d / %d e: %.1f \n ",num1, num2, div);




    return 0;

}