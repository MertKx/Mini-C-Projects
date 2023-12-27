#include <stdio.h>

int main() {
    int boy_kilo[10][2];
    int i, toplam_boy = 0, toplam_kilo = 0;
    for( i = 0; i < 10; i++) {
        printf("Ogrenci boyunu girin: " , i+1);
        scanf("%d", &boy_kilo[i][0]);
        toplam_boy += boy_kilo[i][0];
        printf("Ogrenci kilosunu girin: " , i);
        scanf("%d", &boy_kilo[i][1]);
        toplam_kilo += boy_kilo[i][1];
    }
    printf("Ortalama boy: %d", toplam_boy / 10);
    printf("Ortalama kilo: %d\n", toplam_kilo / 10);
    
    return 0;
}
