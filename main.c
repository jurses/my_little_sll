//["dato"|*]->["dato"|*]->["dato"|*]
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct nodo_t{
    struct nodo_t* next;
    int dato;
};

struct nodo_t* crea_lista(const int);
void poner_dato(struct nodo_t*);
void imprimir(struct nodo_t*);

struct nodo_t* crea_lista(const int max){
    int i=0;

    struct nodo_t *aux, *head;
    head=aux;
/*
    for(;i<max;i++){
        printf("%d",i);
        aux->next=malloc(sizeof(struct nodo_t));
        aux=aux->next;
    }
*/
    aux->next=NULL;

    return head;
}

void poner_dato(struct nodo_t* n){
    srand(time(NULL));
    n->dato=rand()%23;

    if(n->next=NULL)
        return;
    else
        poner_dato(n->next);
}

void imprimir(struct nodo_t* n){
    printf("%p: %d\n", n, n->dato);
    if(n->next=NULL)
        return;
    else
        imprimir(n->next);
}

int main(int argc, char* argv[]){    
    void* head = crea_lista(8);
    
    //poner_dato(head);
    //imprimir(head);
}
