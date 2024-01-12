#include <stdio.h>

void tersCevir(char str[]) {
    int n,i = 0;
    while (str[n] != '\0') {
        n++;
    }

    for (i = n - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
}

int main() {
    char str[] = "Merhaba ben mert nasilsiniz bugun?";
    tersCevir(str);
    return 0;
}

