//
//  Header.h
//  LinkedList
//
//  Created by Mehmet TIRPAN on 3.11.2022.
//


#ifndef SL_H_
#define SL_H_
#include <stdio.h>
#include <stdlib.h>

// ilk işaretçisi bağlantılı listenin başlangıç düğümünü gösteren işaretçi. Derste basl ile gösterdiğimiz düğüm.
// sll singly linked list yani tbl

typedef struct sll{
    int val;
    struct sll *arka;
}node;


// Listenin Sonuna Ekleme fonksiyonu
void ekle(node *ilk, node *yeni){
    if(ilk==NULL){
        ilk=yeni;
    }
    else{
        while(ilk->arka!=NULL)
            ilk=ilk->arka;
        ilk->arka=yeni;
    }
}

// Verilen değeri listede arayan fonksiyon
node* bul(node *ilk, int deger){
    if(ilk==NULL){
        printf("Liste boş, aranan değer bulunamadı\n");
        return NULL;
    }
    else{
        do{
            if(ilk->val==deger){
                printf("Aranan değer bulundu: %d\n",ilk->val);
                return ilk;
            }
            else ilk=ilk->arka;
        }while(ilk!=NULL);
        printf("Aranan değer listede yok\n");
        return NULL;
    }
}

//Tüm silme durumlarını gözönüne alarak verilen değeri listede arayıp silen fonksiyon
node* sil(node *ilk, int deger){
    //Tüm silme durumlarını gözönüne alarak verilen değeri listede arayıp silen kodu yazınız.
 node *temp;
 node *iter = ilk;

 if(ilk -> val == deger)
 {
     temp = ilk;
     ilk = ilk -> arka;
     free(temp);
     return ilk;
 }
 while(iter -> arka != NULL && iter -> arka->val !=deger)
 {
     iter = iter -> arka;
 }

 if(iter -> arka == NULL)
 {
     printf("sayi bulunmadi\n");
     return ilk;
 }
 temp = iter -> arka;
 iter -> arka = iter -> arka-> arka;
 free(temp);
 return ilk;
}

//Yeni bir bağlantılı liste düğümü oluşturan fonksiyon. Düğüme işaret eden pointerı return ediyor.
node *yenidugum(int x){
    node *yeni= (node *)malloc(sizeof(node));
    yeni->arka=NULL;
    yeni->val=x;
    return yeni;
}

//Listeyi ekrana yazdıran fonksiyon
void yazdir(node *ilk){
    while( ilk != NULL)
        {
            printf("%d ", ilk ->val);
            ilk = ilk -> arka;

        }
        printf("\n");
    //Listeyi baştan sonra ekrana yazdıracak şekilde kodlayınız.

}


#endif /* SL_H_ */
