//
//  main.c
//  LinkedList
//
//  Created by Mehmet TIRPAN on 3.11.2022.
//
#include <stdio.h>
#include "sl.h"

int main(){
    node *ilk=NULL;
    ilk=yenidugum(8);
    ekle(ilk,yenidugum(7));
    ekle(ilk,yenidugum(6));
    ekle(ilk,yenidugum(5));
    ekle(ilk,yenidugum(4));
    ekle(ilk,yenidugum(3));
    ekle(ilk,yenidugum(2));
    ekle(ilk,yenidugum(1));
    yazdir(ilk);
    ilk=sil(ilk,8);
    ilk=sil(ilk,1);
    yazdir(ilk);
    ilk=sil(ilk,4);
    yazdir(ilk);
    ekle(ilk,yenidugum(10));
    yazdir(ilk);
    ilk=sil(ilk,14);
}
