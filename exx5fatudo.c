#include <stdio.h>
#include <stdlib.h> // necessario para a funçao system()

int main(){
    int alunos[50], matricula, nota1, nota2;
    int i=0, j=0;

    printf("----------------------------\n");
    printf("==== Cadastro de alunos ==== \n");
    printf("----------------------------\n");

    printf("Digite sua matricula ou 0 para sair: ");
    scanf("%d", &matricula);

    while ((matricula != 0) && (i<50)) {
        alunos[j++] = matricula;

        printf("Nota1: ");
        scanf("%d", &nota1);
        alunos[j++] = nota1;

        printf("Nota2: ");
        scanf("%d", &nota2);
        alunos[j++] = nota2;

        system("clear");
        printf("----------------------------\n");
        printf("==== Cadastro de alunos ==== \n");
        printf("----------------------------\n");

        printf("Digite sua matricula ou 0 para sair: ");
        scanf("%d", &matricula);
        i++;
    }

    system("clear");
    printf("----------------------------\n");
    printf("==== Cadastro de alunos ==== \n");
    printf("----------------------------\n");

    for (j = 0; j < i*3; j+=3) {
        printf("matricula: %d nota1: %d nota2: %d\n", alunos[j], alunos[j+1], alunos[j+2]);
    }
    return 0;
}
