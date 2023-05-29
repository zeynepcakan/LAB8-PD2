#include <stdio.h>

typedef struct {
    char ad[50];
    char soyad[50];
    int numara;
} Ogrenci;

int main() {
    Ogrenci ogrenciler[100];
    int ogrenciSayisi,i;

    printf("Kac ogrenci bilgisi gireceksiniz? ");
    scanf("%d", &ogrenciSayisi);

    
    for ( i = 0; i < ogrenciSayisi; i++) {
        printf("Ogrenci %d:\n", i + 1);
        printf("Ad: ");
        scanf("%s", ogrenciler[i].ad);
        printf("Soyad: ");
        scanf("%s", ogrenciler[i].soyad);
        printf("Numara: ");
        scanf("%d", &ogrenciler[i].numara);
    }
    system("cls");//ekran temizleme kodu

    printf("Ogrenci Bilgileri:\n\n");
    for ( i = 0; i < ogrenciSayisi; i++) {
        printf("Ogrenci %d:\n", i + 1);
        printf("Ad: %s\n", ogrenciler[i].ad);
        printf("Soyad: %s\n", ogrenciler[i].soyad);
        printf("Numara: %d\n\n", ogrenciler[i].numara);
        printf("\n");
    }

    return 0;
}
