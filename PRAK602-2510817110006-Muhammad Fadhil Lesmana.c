#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int zetsu[1000];

    for (int i = 0; i < n; i++) {
        scanf("%d", &zetsu[i]);
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", zetsu[i] * (i + 1));
    }
    return 0;
}
