#include <stdio.h>
#include <stdlib.h>

int main()
{

    int v[10];
    int i;

    for (i = 0; i < 10; i++)
    {
        printf("Insira um número: ");
        scanf("%d", &v[i]);
    }

    printf("Números armazenados: ");
    for (i = 0; i < 10; i++){
    
        printf("%d,", v[i]);
    }

}
