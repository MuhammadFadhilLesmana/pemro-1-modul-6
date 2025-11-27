#include <stdio.h>

int main() {
    int baris, kolom;
    scanf("%d %d", &baris, &kolom);

    int total = baris * kolom;
    int angka[1000];

    for(int i = 0; i < total; i++) {
        scanf("%d", &angka[i]);
    }

    int index = 0;
    for(int i = 0; i < baris; i++) {
        for(int j = 0; j < kolom; j++) {
            printf("%d ", angka[index]);
            index++;
        }
        printf("\n");
    }
    return 0;
}
