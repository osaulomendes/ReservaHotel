#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#include "FuncoesHotel.h"



int main()
{
    int escolha=0;
    setlocale(LC_ALL,"portuguese");
    printf("Bem vindo ao Hotel Manhattan.Digite o numero da opção que voce deseja \ne aperte enter: \nOpcao 1: Realizar Reserva \nOpcao 2: Excluir Reserva\nOpcao 3: Conferir Reserva\nOpcao 4: Sair\n");

    int q [2][5] = {1,2,3,3,2,2,2,2,2,2};

    struct Hotel h;

    int  i =0, j=0;
    for(i;i<2;i++){
        for(j;j<5;j++){
            h.quartos[i][j].numero_camas = q[i][j];
        }
    }

    for(i=0;i<2;i++){
        for(j=0;j<5;j++){
            printf("%d \n",h.quartos[i][j].numero_camas);
        }
    }

    /*

    scanf("%d",&escolha);
    switch(escolha)
    {
    case 1:
        reserva();
        break;
    }
    case 2:
    {
        excluir_reserva();
        break;
    }
    case 3:
    {
        conferir_reserva();
        break;
    }
    case 4:
    {
        return 0;

    }


    */


    return 0;
}
