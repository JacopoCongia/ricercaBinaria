// Prototipi

// genera un numero casuale da 1 a 100 (da rendere dinamico in futuro)
int generaNumeroCasuale();
// riempie l'array desiderato con numeri casuali
void caricaArray(int array[], int dimensione);
// stampa il contenuto dell'array
void stampaArray(int array[], int dimensione);
// dato un array, l'indice iniziale, la dimensione dell'array e la scelta massimoOMinimo restituisce l'indice del valore massimo o minimo
int trovaIndice(int array[], int indiceIniziale, int dimensione, int crescenteODecrescente);
// ordina l'array in ordine crescente o decrescente in base alla scelta dell'utente (da implementare)
void ordinaArray(int array[], int dimensione);
// ricerca binaria o dicotomica
void ricercaBinaria(int array[], int dimensione, int valoreInserito);