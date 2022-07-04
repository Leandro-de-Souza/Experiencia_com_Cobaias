#include <stdio.h>

int main(){

    int N, ratos, sapos, coelhos, quantCobaias, total;
    char tipo;
    double percentualR, percentualS, percentualC;

    printf("Quantos casos de teste serao digitados? ");
    scanf("%d", &N);

	ratos = 0;
	sapos = 0;
	coelhos = 0;

    for (int i = 0; i < N; i++) {
        printf("Quantidade de cobaias: ");
        scanf("%d", &quantCobaias);
        printf("Tipo de cobaia: ");
        scanf(" %c", &tipo);

        if (tipo == 'R') {
            ratos = ratos + quantCobaias;
        }
        else if (tipo == 'S') {
            sapos = sapos + quantCobaias;
        }
        else {
            coelhos = coelhos + quantCobaias;
        }
    }

    total = ratos + sapos + coelhos;
    percentualC = ((double)coelhos / total) * 100.0;
    percentualR = ((double)ratos / total) * 100.0;
    percentualS = ((double)sapos / total) * 100.0;

	printf("\nRELATORIO FINAL:\n");
	printf("Total: %d cobaias\n", total);
	printf("Total de coelhos: %d\n", coelhos);
	printf("Total de ratos: %d\n", ratos);
	printf("Total de sapos: %d\n", sapos);
    printf("Percentual de coelhos: %.2lf\n", percentualC);
    printf("Percentual de ratos: %.2lf\n", percentualR);
    printf("Percentual de sapos: %.2lf\n", percentualS);



    return 0;
}
