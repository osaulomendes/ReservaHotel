#ifndef FUNCOESHOTEL_H_INCLUDED
#define FUNCOESHOTEL_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct Quarto
{
    int numero_quarto;
    float diaria;
    int numero_camas;
    _Bool ocupado;
    struct Cliente ;
};

struct Hotel
{
    struct Quarto quartos[2][5];
};

struct Cliente
{
    int CPF;
};

/*
_Bool reserva();

_Bool excluir_reserva();

_Bool conferir_reserva();
*/


#endif // FUNCOESHOTEL_H_INCLUDED
