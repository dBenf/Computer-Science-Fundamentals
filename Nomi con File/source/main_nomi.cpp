#include "nomi.h"

int main (){
	
	fstream file;
	stringa lista[size],uomo[size],donna[size];
	int dim;
	
	Apertura(file);
	Caricamento(file,lista,dim);
	Elimina(lista,dim);
	Ricerca(lista,dim,uomo,donna);
	
	file.close();
	cout<<"\n\n\n";
	system("PAUSE");
}
