#include <stdio.h>

int main(){
int vnum[10];
int i, x;

for (i=0; i<10; i++){
    printf("Preencha o %d valor: ", i+1);
    scanf("%d", &vnum[i]);
        for(x=0; x<i; x++){
            if(vnum[x]==vnum[i]){
                printf("Número %d existe \n", vnum[i]);
                i--;
                break;
            }
        }
}
printf("Números preenchidos: ");
for(i=0; i<10; i++){
    printf("%d, ", vnum[i]);
}
return 0;
}