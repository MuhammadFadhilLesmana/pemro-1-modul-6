#include <stdio.h>

int main() {
    int n1, n2;
    scanf("%d %d", &n1, &n2);

    if (n1 != n2) {
        printf("Jumlah tidak sama");
        return 0;
    }

    int baris1[n1], baris2[n2], hasil[n1];
    for (int i = 0; i < n1; i++) {
        scanf("%d", &baris1[i]);
    }

    for (int i = 0; i < n2; i++) {
        scanf("%d", &baris2[i]);
    }

    for (int i = 0; i < n1; i++) {
        hasil[i] = baris1[i] * baris2[i];
    }

    for (int i = 0; i < n1; i++) {
        printf("%d ", hasil[i]);
    }
    return 0;
}
