/*

Siano dati due file testo contenenti la dimensione e gli elementi di una matrice quadrata di numeri interi. 
Scrivere un programma che individui le righe e le colonne delle due matrici contenenti gli stessi elementi. 
Ad esempio:

mat1:
3
1 2 3
4 5 6
1 2 4

mat2:
3
1 2 3
4 2 3
1 2 3

La riga 0 di  mat1 è uguale alle riga 0  e alla riga 2 di mat2; la colonna 0 di mat1 è uguale alla colonna 0 di mat2.

*/

#include "matrici.h"

int main(){
	
	// leggo la dimensione delle matrici
	// creo due matrici della dimensione letta
	// leggo dal file le matrici
	// riempio le due matrici con i due file
	
	// fai il controllo sulle righe e stampa le righe uguali
	
	// fai il controllo sulle colonne e stampa le colonne uguali
	
	fstream f;
	string nome1;
	string nome2;
	Matrice m1;
	Matrice m2;
	
	int dimensione = apri_file(f, nome1);
	carica_matrice(f, dimensione, m1);
	chiudi_file(f);
	
	int dimensione2 = apri_file(f, nome2);
	carica_matrice(f, dimensione2, m2);
	chiudi_file(f);
	
	check_dimensione(dimensione, dimensione2);
	
	check_righe(m1, m2, dimensione);
	check_colonne(m1, m2, dimensione);
	
}
