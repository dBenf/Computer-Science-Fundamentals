#include "matrice.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	fstream file;
	int dim,array[size],lung=0;
	int **mat;
	
	Apertura(file);
    Dimensione(file,array,dim,lung);
	Carica_Stampa(array,mat,dim);


	//Chiusura del file.
	file.close();

	cout<<"\n\n\n";
	system("PAUSE");
}
