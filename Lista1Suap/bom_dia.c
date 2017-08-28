#include <stdio.h>

void mensagem(char nome[]) {
    printf("Bom dia, %s", nome);
}

int main() {
    char nome[]="Giovanna Nogueira";
    mensagem(nome);

    return 0;
}