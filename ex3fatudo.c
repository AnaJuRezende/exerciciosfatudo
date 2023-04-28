#include <stdio.h>

int main() {
    int vnum[10];
    int i, x, temp;

    for (i = 0; i < 10; i++) {
        printf("Preencha o %d valor: ", i + 1);
        scanf("%d", &vnum[i]);

        for (x = 0; x < i; x++) {
            if (vnum[x] == vnum[i]) {
                printf("Número %d já existe! \n", vnum[i]);
                i--;
                break;
            }
        }
    }
    for (i = 0; i < 10; i++) {
        for (x = i + 1; x < 10; x++) {
            if (vnum[i] > vnum[x]) {
                temp = vnum[i];
                vnum[i] = vnum[x];
                vnum[x] = temp;
            }
        }
    }

    printf("Números preenchidos em ordem crescente: ");
    for (i = 0; i < 10; i++) {
        printf("%d, ", vnum[i]);
    }

    return 0;
}
