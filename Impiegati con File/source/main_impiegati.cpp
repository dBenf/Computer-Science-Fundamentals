/*

Sia dato un file testo contenente nome, cognome e stipendio degli impiegati del Dipartimento di Informatica.
Dopo aver costruito un array di record contenente le informazioni presenti su file, si determini, stampando a video:

1. il nome e cognome dell''impiegato che guadagna di più
2. lo stipendio medio degli impiegati del dipartimento e il nome e cognome degli impiegati che guadagno di più dello stipendio medio.

esempio:

impiegati.txt

angelo chianese 1000
antonio picariello 800
lucio sansone 1200
vincenzo moscato 600
carlo sansone 900

output:

l''impiegato che guadagna di più è Lucio Sansone
lo stipendio medio è: 900

Gli impiegati che guadagnano più della media sono:
Angelo Chianese, Lucio Sansone.


*/

#include "impiegati.h"


int main() {
	
	// leggi dal file le informazioni
	// inserisci le informazioni nel vettore di impiegati
	// calcola il massimo stipendio degli impiegati e stampa il nome e cognome
	// calcola lo stipendio medio
	// stampa il nome e cognome degli impiegati che guadagnano più della media 
	
	string nome_file;
	fstream f;
	ArrayImpiegati imp;
	
	cout<<"inserisci il nome del file da aprire: ";
	cin>>nome_file;
	apri_file(f, nome_file);
	int numImpiegati = riempi_vettore(f, imp);
	trova_stipendio_max(imp, numImpiegati);
	
	int mediaStip = trova_stipendio_medio(imp, numImpiegati);
	trova_impiegati_sopra_media(imp, numImpiegati, mediaStip);
	
	
	return 0;
}
