#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Dados(char nome[], char curso[], long long matricula, char *d[], int x) {
    printf("%s \n", nome);
    printf("%s \n", curso);
    printf("%lli \n", matricula);
    int i;

    for(i = 0; i < x  ; i++) {
        printf("%s,\0", d[i]);
    }

}

int main() {

    char nome[101];
    printf("Digite seu nome: ");
    scanf("%s", nome);

    char curso[101];
    printf("Digite seu curso: ");
    scanf("%s", &curso);

    long long matricula;
    printf("Digite sua matrícula: ");
    scanf("%lli", &matricula);


    int teste;
    printf("Digite quantas disciplinas: ");
    scanf("%i", &teste);
    char *disciplina[teste];
    for (int i=0; i < teste; i++) {
        disciplina[i] = malloc(100);
    	scanf("%s", disciplina[i]);
    }

    Dados(nome, curso, matricula, disciplina, teste);

    return 0;
}
