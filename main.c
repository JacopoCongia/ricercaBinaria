/*
Prove con Algoritmo Selection Sort
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "modificaArray.h"
#include "menu.h"

int main()
{
    srand(time(0));
    
    int arrayDisordinato[20];
    int dimensioneArray = sizeof(arrayDisordinato) / sizeof(arrayDisordinato[0]);
    int scelta;
    int valoreInserito;
    
    do {
        system("clear"); // pulisce la console
        
        caricaArray(arrayDisordinato, dimensioneArray);
        printf("\n\tArray con numeri casuali da 1 a 100:\n");
        stampaArray(arrayDisordinato, dimensioneArray);
        
        ordinaArray(arrayDisordinato, dimensioneArray);
        printf("\n\tArray ordinato:\n");
        stampaArray(arrayDisordinato, dimensioneArray);
        
        valoreInserito = richiediValore();
        ricercaBinaria(arrayDisordinato, dimensioneArray, valoreInserito);
        
        do {
            scelta = stampaMenu();
            
            if (scelta < 1 || scelta > 2) {
                printf("\tScelta non valida. Inserisci 1 per continuare o 2 per uscire.\n");
            }
        } while (scelta < 1 || scelta > 2);
        
    } while (scelta == 1);

    return 0;
}