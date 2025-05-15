/* === src/carro.c === */
#include <stdio.h>
#include <string.h>
#include "carro.h"
#include "arquivo.h"

void cadastrarCarro() {
    Carro c;
    printf("Placa: "); fgets(c.placa, 10, stdin); strtok(c.placa, "\n");
    printf("Marca: "); fgets(c.marca, 20, stdin); strtok(c.marca, "\n");
    printf("Modelo: "); fgets(c.modelo, 20, stdin); strtok(c.modelo, "\n");
    printf("Ano: "); scanf("%d", &c.ano); getchar();
    printf("Cor: "); fgets(c.cor, 15, stdin); strtok(c.cor, "\n");
    strcpy(c.status, "Ativo");

    salvarCarroArquivo(c);
    printf("Carro cadastrado com sucesso!\n");
}

void listarCarros() {
    FILE *f = fopen("data/carros.txt", "r");
    if (!f) {
        printf("Nenhum carro cadastrado.\n");
        return;
    }

    Carro c;
    printf("\n--- Lista de Carros ---\n");
    while (fscanf(f, "%[^;];%[^;];%[^;];%d;%[^;];%[^\n]\n",
                  c.placa, c.marca, c.modelo, &c.ano, c.cor, c.status) == 6) {
        printf("%s | %s | %s | %d | %s | %s\n",
               c.placa, c.marca, c.modelo, c.ano, c.cor, c.status);
    }
    fclose(f);
}
