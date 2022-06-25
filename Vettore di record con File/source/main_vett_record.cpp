#include "record.h"

//FUNZIONE PRINCIPALE
int main(){
	ifstream file;
	lista elenco[max];
	int contatore;
	
	Apertura(file);
	Lettura(file,elenco,contatore);
	
	if(!Verifica_Ordine(elenco,contatore)){
		Ordina(elenco,contatore);
	}
	
	cout<<"\nEcco il tuo file ordinato senza doppioni : \n";
	Elimina(elenco, contatore);
	Stampa(elenco,contatore);
	
	cout<<"\n\n\n";
	system("PAUSE");
}


