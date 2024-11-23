#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int a, b, c;
    float deltaSonucu;

    printf("Lutfen a, b, c degerlerini sirasiyla giriniz: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("Girdiginiz degerler: %d %d %d\n", a, b, c);

    deltaSonucu = (b * b) - (4 * a * c);

    printf("Delta sonucu: %.2f\n", deltaSonucu);

    if (deltaSonucu >= 0) {
        printf("Delta pozitif veya sifira esit, kokler gercek sayilardir.\n");
    } else {
        printf("Delta negatif, kokler karmaþýk sayýlardýr.\n");
    }

    return 0;
}


