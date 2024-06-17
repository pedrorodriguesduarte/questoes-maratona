#include <stdio.h>

int main() {
    char resultado;
    int vitorias = 0;

    // FAZER LEITURA DOS 6 JOGOS
    for (int i = 0; i < 6; i++) {
        printf ("\n DIGITE O RESULTADO DO JOGO COM V OU P : ");
        scanf(" %c", &resultado);
        if (resultado == 'V') {
            vitorias += 1;
        }
    }

    // MOSTRAR QUAL GRUPO E DPS DA LEITURA
    if (vitorias == 5 || vitorias == 6) {
        printf(" PARABENS VOCE ESTA NO GRUPO 1 \n");
    } else if (vitorias == 3 || vitorias == 4) {
        printf(" PARABENS VOCE ESTA NO GRUPO 2 \n");
    } else if (vitorias == 1 || vitorias == 2) {
        printf(" PARABENS VOCE ESTA NO GRUPO 3 \n");
    } else {
        printf(" VOCE DEVE PRATICAR UM POUCO MAIS \n");
    }

    return 0;
}
