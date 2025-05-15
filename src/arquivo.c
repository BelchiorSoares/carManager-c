/* === src/arquivo.c === */
#include <stdio.h>
#include "arquivo.h"

void salvarCarroArquivo(Carro c) {
    FILE *f = fopen("data/carros.txt", "a");
    if (!f) {
        printf("Erro ao salvar arquivo.\n");
        return;
    }
    fprintf(f, "%s;%s;%s;%d;%s;%s\n", c.placa, c.marca, c.modelo, c.ano, c.cor, c.status);
    fclose(f);
}