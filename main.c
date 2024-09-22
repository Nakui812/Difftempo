#include <stdio.h>

int main(void) {
    int ora1, minuti1, secondi1;
    int ora2, minuti2, secondi2;
    int totaleSecondi1, totaleSecondi2, differenza;

    printf("Inserisci il primo orario (ore minuti secondi): ");
    scanf("%d %d %d", &ora1, &minuti1, &secondi1);

    printf("Inserisci il secondo orario (ore minuti secondi): ");
    scanf("%d %d %d", &ora2, &minuti2, &secondi2);

    totaleSecondi1 = ora1 * 3600 + minuti1 * 60 + secondi1;
    totaleSecondi2 = ora2 * 3600 + minuti2 * 60 + secondi2;

    if (totaleSecondi1 > totaleSecondi2) {
        differenza = totaleSecondi1 - totaleSecondi2;
    } else {
        differenza = totaleSecondi2 - totaleSecondi1;
    }

    printf("La differenza in secondi e': %d\n", differenza);

    return 0;
}
