/* === include/carro.h === */
#ifndef CARRO_H
#define CARRO_H

typedef struct {
    char placa[10];
    char marca[20];
    char modelo[20];
    int ano;
    char cor[15];
    char status[10];
} Carro;

void cadastrarCarro();
void listarCarros();

#endif