#include <iostream>
#include "sculptor.h"

using namespace std;

int main(void)
{
   Sculptor *i;
   char* nome;
   nome ="bandeira_do_brasil.off"; /// definir nome de saida do arquivo

    ///retirar comentarios conforme a figura que preferir fazer


    ///Bandeira do Brasil
    ///Caixa verde externa
   i = new Sculptor(31,31,31);
   i ->setColor(0.25,1,0,1);
   i ->putBox(0,30,0,30,0,30);
   i ->cutBox(1,29,1,29,0,29);
   ///Caixa amarela
   i ->setColor(1,1,0,1);
   i ->putBox(3,27,3,27,3,27);
   i ->cutBox(4,26,4,26,3,26);
   ///Esfera Central
   i ->setColor(0,0,1,1);
   i ->putSphere(15,15,15,5);
   ///Estrelas
   i ->setColor(1,1,1,1);
   i ->putVoxel(20,20,20);
   i ->putVoxel(5,20,20);
   i ->putVoxel(20,5,20);
   i ->putVoxel(23,25,15);
   i ->putVoxel(8,25,15);
   i ->putVoxel(8,8,15);
   i->writeOFF(nome);


   ///TRONO
    /*
   i = new Sculptor(10,10,10);///0 ---9 em todas as direcoes
   i->setColor(0,1,1, 1); /// cor setada para b = 1, g=1, a = 1
   i->putBox(0,9,0,9,0,9); ///caixa completa
   i->cutBox(1,8,1,9,1,9);
   i->writeOFF(nome);*/


   ///Melancia
   /*
   i = new Sculptor(31,31,51); ///define novo escultor
   i->setColor(0,1,0,1); ///define cor para vermelho
   i->putEllipsoid(15,15,15,10,10,15);
   i->setColor(1,0,0,1);
   i->putEllipsoid(15,15,15,9,9,14);
   i->cutEllipsoid(15,15,15,8,8,13);
   i->cutBox(0,30,0,30,0,5);
   i->writeOFF(nome);*/
    return 0;
};

