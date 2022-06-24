/*

Sia assegnato un file F1 con un proprio nome e contenente  
una sequenza di numeri interi. Nell''ipotesi che la sequenza sia costituita da molti valori nulli, 
scrivere un programma modulare che generi due file F2 e F3, il primo contenente i valori dispari, 
mentre il secondo quelli pari (eccetto lo zero), della sequenza di partenza. Effettuare anche il 
calcolo e la relativa stampa a video del numero di elementi nulli, del massimo dei numeri pari e 
del minimo dei numeri dispari.

F1: 0 3 15 0 0 7 8 0 9 0 11 44 21 0 0 0 0 0 0 0 
F2: 3 15 7 9 11 21
F3: 8 44
Nulli: 12
Max: 44, Min: 3

*/


#include "paridispari.h"


int main() {
	
	// apro il file in ingresso
	// metto tutto il file in due vettore,
	// funzione per contare gli zeri
	// metto tutti i non nulli in due vettori, pari e dispari
	// funzione per contare il massimo dei pari
	// funzione per contare il minimo dei dispari
	
	
	fstream file;
	int dim;
	Array v, vPari, vDispari;
	
	apri_file(file);
	dim = leggi_file(file, v);
	conta_zeri(v,dim);
	
	int Npari = crea_pari(v,vPari,dim);
	int Ndispari = crea_dispari(v,vDispari, dim);
	
	trova_max(vPari, Npari);
	trova_min(vDispari, Ndispari);
	
	riempi_file(file,vPari,Npari);
	riempi_file(file,vDispari,Ndispari);
	
	return 0;
}
