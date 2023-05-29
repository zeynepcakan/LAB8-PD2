#include <stdio.h>

typedef struct {
    double real;
    double imag;
} ComplexNumber;

ComplexNumber toplaKarmasik(ComplexNumber a, ComplexNumber b) {
    ComplexNumber toplam;
    toplam.real = a.real + b.real;
    toplam.imag = a.imag + b.imag;
    return toplam;
}

int main() {
    ComplexNumber sayi1, sayi2, toplam;

    printf("1. karmasik sayiyi girin : \n");
    printf("gercel kisim = ");
    scanf("%lf", &sayi1.real);
    printf("imajinal kisim = ");
    scanf("%lf", &sayi1.imag);

    printf("2. karmasik sayiyi girin : \n");
    printf("gercel kisim = ");
    scanf("%lf", &sayi1.real);
    printf("imajinal kisim = ");
    scanf("%lf", &sayi1.imag);

    toplam = toplaKarmasik(sayi1, sayi2);

    printf("Toplam: %.2lf + %.2lfi", toplam.real, toplam.imag);

    return 0;
}
