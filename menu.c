#include <stdio.h>
#include <stdlib.h>
#include "modificaArray.h"
#include "menu.h"

// nei menu non uso caratteri unicode perche' OnlineGDB ha spesso problemi a visualizzarli correttamente
int selezionaOrdinamento() {
    
    int scelta;
    
    do {
        printf("\n\t--------------------------------\n");
        printf("\tScegli l'ordinamento dei numeri:\n");
        printf("\t--------------------------------\n\n");
        printf("\t1. Crescente\n");
        printf("\t2. Decrescente\n");
        scanf("%d", &scelta);
        
        if (scelta < 1 || scelta > 2) {
            printf("\tDevi scegliere un numero compreso tra 1 e 2\n\n");
        }
    } while (scelta < 1 || scelta > 2);
    
    return scelta;
}

int stampaMenu() {
    int scelta;
    
    printf("\n\t---------------------\n");
    printf("\tSeleziona un'opzione:\n");
    printf("\t---------------------\n\n");
    printf("\t1. Genera e ordina un nuovo array\n");
    printf("\t2. Esci dal programma\n\n");
    printf("\t---------------------\n");
    
    scanf("%d", &scelta);
    if (scelta == 2) {
        printf("\tHai scelto di uscire dal programma\n");
    }
    
    return scelta;
}

int richiediValore() {
    int valoreInserito;
    
    do {
        printf("\n\tInserisci un valore da 1 a 100 per scoprire se e' presente nell'array e in quale posizione\n");
        scanf("%d", &valoreInserito);
    } while (valoreInserito < 1 || valoreInserito > 100);
    
    return valoreInserito;
}