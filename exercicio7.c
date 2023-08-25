#include <stdio.h>

int main() {
    int anos, meses, dias;

    // Leitura da idade em anos, meses e dias
    printf("Digite a idade em anos: ");
    scanf("%d", &anos);

    printf("Digite a idade em meses: ");
    scanf("%d", &meses);

    printf("Digite a idade em dias: ");
    scanf("%d", &dias);

    // Cálculo da idade total em dias
    int idadeEmDias = (anos * 365) + (meses * 30) + dias;

    // Exibição da idade em dias
    printf("A idade total em dias é: %d dias\n", idadeEmDias);

    return 0;
}
