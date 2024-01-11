#include <stdio.h>
#include <string.h>

int main() {
    char cumle[100];
    char arananKelime[50];
    char* kelime;

    printf("Bir cumle girin: ");
    fgets(cumle, 100, stdin);
    cumle[strlen(cumle) - 1] = '\0'; // fgets ile alýnan string'in sonunda '\n' karakteri olur. Bu karakteri '\0' ile deðiþtiriyoruz.

    printf("Aranacak kelimeyi girin: ");
    fgets(arananKelime, 50, stdin);
    arananKelime[strlen(arananKelime) - 1] = '\0'; // fgets ile alýnan string'in sonunda '\n' karakteri olur. Bu karakteri '\0' ile deðiþtiriyoruz.

    kelime = strtok(cumle, " "); // ayrac olarak boþluk karakterini kullanýyoruz

    while(kelime != NULL) {
        if(strcmp(kelime, arananKelime) == 0) {
            printf("Kelime bulundu: %s\n", kelime);
            return 0;
        }
        kelime = strtok(NULL, " ");
    }

    printf("Kelime bulunamadi.\n");
    return 0;
}

