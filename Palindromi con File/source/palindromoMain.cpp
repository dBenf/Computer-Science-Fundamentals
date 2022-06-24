/*
TESTO DEL PROBLEMA
------------------


-assegnato un file di valori interi definisci il percorso e nome da tastiera
-genera un secondo file con i soli valori palindromi con nome inserito da tastiera
-genera un terzo file con i valori non palindromi con nome inserito da tastiera
-in tutti e due i casi non considerare le ripetizioni e il file deve essere ordinato in ordine crescente
-verificare la correttezza effettuando la stampa del secondo e del terzo file


*/

#include "palindromo.h"

int main() {
	
	//---------------OPERAZIONI DA FARE--------------------------
	
	// inizializzo due vettori che riempio dal file
	// leggo i numeri dal file di ingresso
	
	// per ogni numero che leggo
		// se il numero non c'è nel file 2 ed è palindromo 
			// metto in file 2
		// se il numero non c'è nel file 3 e non è palindromo
			// metto in file 3
			
	// ordino e stampo il file dei valori palindromi
	// ordino e stampo il file dei valori non palindromi
	
	//-----------------------------------------------------------
	
	
	fstream file;
	Array vettPal;
	Array vettNonPal;
	
	
	
	inizializza_vettore(vettPal);
	inizializza_vettore(vettNonPal);
	
	leggi_file(file, vettPal, vettNonPal);
	
	stampa_vettore(vettPal, "PALINDROMI");
	stampa_vettore(vettNonPal, "NON PALINDROMI");
	
	ordina_vettore(vettPal);
	cout<<"FILE PALINDROMI: ";
	scrivi_file(vettPal, file);
	
	ordina_vettore(vettNonPal);
	cout<<"FILE NON PALINDROMI: ";
	scrivi_file(vettNonPal, file);
	
	stampa(file, "outPal.txt");
	stampa(file, "outNoPal.txt");
 	
	
	return 0;
}
