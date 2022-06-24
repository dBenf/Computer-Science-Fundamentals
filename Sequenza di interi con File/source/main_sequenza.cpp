/*

Sia assegnato un file contenente una sequenza di numeri interi molto lunga.


Scrivere un programma che richiesto il nome del file da tastiera e l’immissione di una 
sequenza di numeri di cui viene preventivamente fornita la lunghezza (maggiore di uno), 
verifichi non solo la presenza della sequenza all’interno del file ma anche quante volte 
essa ricorre nel caso fosse presente.

Ad esempio con il file miofile.txt contenente:
23 45 21 33 12 33 22 44 66 45 21 33 12 11 876 11 45 21 33 12 13
E la sequenza di 4 numeri
45 21 33 12

Il programma deve fornire in uscita un messaggio del tipo:
La sequenza è presente 3 volte.
Il programma deve essere scritto in C++, modulare ed eventualmente con libreria


*/


#include "sequenza.h"


int main() {
	
	// apertura del file
	// inserimento del file in un vettore
	// creazione di un vettore per la sequenza da cercare
	// ricerca della sequenza
	// stampa del risultato
	
	fstream file;
	vett v_ing;
	vett v_da_cercare;
	string nome;
	
	cout<<"inserisci il nome del file di ingresso: ";
	cin>>nome;
	apri_file(file, nome);
	
	int dim_file_ing = riempi_vettore(file, v_ing);
	int dim_seq_cercare = crea_vettore(v_da_cercare);
	ricerca_sequenza(v_ing, v_da_cercare, dim_seq_cercare, dim_file_ing);
	
	return 0;
}
