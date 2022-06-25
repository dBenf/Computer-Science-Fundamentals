#include "record.h"

void Lettura(ifstream &FILE, lista ELENCO[], int &i){
	i=0;
	while(!FILE.eof()){
		FILE>>ELENCO[i].nome;
		FILE>>ELENCO[i].numero;
		i++;
	}
	
	cout<<"Ecco il tuo file : \n";
	Stampa(ELENCO, i);
	
	//Chiusura file
	FILE.close();

}

void Ordina(lista ELENCO[],int dim){
	bool scambia=true;
	lista variabile;
		
	while(scambia==true){
		scambia=false;
		for(int i=0; i<dim-1; i++){
			if(strcmp(ELENCO[i].nome, ELENCO[i+1].nome)>0) 
			{    													//Inserisco lo string compare per confrontare le stringhe e metterle in ordine alfabetico.
			variabile=ELENCO[i];                                    //Se restituisce 0 sono uguale , <0 se la 1<2(precede) e >0 se 1>2(segue).
		    ELENCO[i]=ELENCO[i+1];
		    ELENCO[i+1]=variabile;
			scambia=true;
			}
		} 	dim--;
	}
	
}

bool Verifica_Ordine(lista ELENCO[], int dim){
	bool ordine=true ;
	int valore;
	 	for(int i=0; i<dim; i++){
		valore=strcmp(ELENCO[i].nome,ELENCO[i+1].nome);
			if(valore>0) { 
			ordine=false;
			}
	   
	}		return ordine;
}

void Stampa(lista ELENCO[],int dim) {
	for(int i=0; i<dim; i++){
		cout<<ELENCO[i].nome<<" \n";
		cout<<ELENCO[i].numero<<"\n\n";
	}
}

void Apertura(ifstream &FILE){
	percorso route;
	cout<<"Inserire il percorso del file : ";
	cin.get(route,size);
	FILE.open(route);
	
	if(!FILE){
		cout<<"\nERRORE. File non trovato! ";
		exit(1);
	}
}

void Elimina(lista ELENCO[], int &dim) {
	for(int i=0; i<dim; i++){
		for(int j=i+1; j<dim; j++){
			if(strcmp(ELENCO[i].nome, ELENCO[j].nome)==0 && ELENCO[i].numero==ELENCO[j].numero){
				for(int k=j; k<dim-1; k++){
					ELENCO[k]=ELENCO[k+1];
				} dim--; j--;
			}
		}
	}	
}
