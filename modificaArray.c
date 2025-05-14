#include <stdio.h>
#include <stdlib.h>
#include "modificaArray.h"
#include "menu.h"

// genera un numero casuale da 1 a 100 (da rendere dinamico in futuro)
int generaNumeroCasuale() {
    int numeroCasuale = rand() % 100 + 1;
    
    return numeroCasuale;
}
// riempie l'array desiderato con numeri casuali
void caricaArray(int array[], int dimensione) {
    for (int i = 0; i < dimensione; i++) {
        array[i] = generaNumeroCasuale();
    }
}
// stampa il contenuto dell'array
void stampaArray(int array[], int dimensione) {
    printf("\t");
    for (int i = 0; i < dimensione; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

// ordina l'array in ordine crescente
void ordinaArray(int array[], int dimensione) {
    int temp; // variabile di "appoggio" usata per scambiare i valori nell'array originale, senza crearne uno nuovo
    
    for (int i = 0; i < dimensione - 1; i++) {
        for (int j = i + 1; j < dimensione; j++) {
            if (array[j] < array[i]) {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}

// cerca il valore inserito dall'utente all'interno dell'array selezionato
void ricercaBinaria(int array[], int dimensione, int valoreInserito) {
    int inizio = 0;
    int fine = dimensione - 1;
    int centro =  dimensione / 2;
    int numeroTrovato = 0;  // variabile che uso per controllare se il numero inseirto e' stato trovato
    
    do {
        centro = (inizio + fine) / 2;
        
        if (valoreInserito == array[centro]) {
            numeroTrovato = 1; // se il numero viene trovato assegno il valore 1 alla variabile e il ciclo si interrompe
        } else if (valoreInserito > array[centro]) {
            inizio = centro + 1;
        } else {
            fine = centro - 1;
        }
    } while (inizio <= fine && numeroTrovato != 1); // se inizio e fine si incontrano vuol dire che non ci sono piu' valori da controllare e il ciclo si interrompe
                                                    // se il numero viene trovato il ciclo si interrompe
    if (numeroTrovato == 1) {
        printf("\n\tIl numero che hai scelto e' in posizione %d\n", centro);
    } else {
        printf("\n\tNumero non trovato\n");
    }
    
}