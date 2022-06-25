#include "nomi.h"

//Funzione di apertura del file.
void Apertura(fstream &FILE){
	stringa percorso;
	cout<<"Inserire il percorso del file : ";
	cin>>percorso;
		if(!FILE){
			cout<<"\nErrore! Inserire un file valido. \n";
			exit(1);
		}
	FILE.open(percorso);	
}
	
//Funzione di caricamento del file.
void Caricamento(fstream &FILE, stringa elenco[], int &contatore){
	int i=0;
	while(!FILE.eof()){
		FILE>>elenco[i];
		i++;contatore++;
	}
}	

//Funzione di elimazione dei doppioni.
void Elimina(stringa elenco[], int &contatore){
	for(int i=0; i<contatore; i++){
		for(int j=i+1; j<contatore; j++){
			if(strcmp(elenco[i],elenco[j])==0){
				for(int k=j; k<contatore-1; k++){
				strcpy(elenco[k],elenco[k+1]);
				} j--;contatore--;
			}
		}
	}
}

//Funzione di ricerca dei nomi maschili e femminili.
void Ricerca(stringa elenco[], int contatore, stringa maschio[], stringa femmina[]){
	int f=0 , m=0;
	for(int i=0; i<contatore; i++){
		if(strstr(elenco[i], "o\0")!=NULL){
			strcpy(maschio[m],elenco[i]);
			m++;
		}
	
		else{ strcpy(femmina[f],elenco[i]);
			  f++;
		}
	}
	cout<<"\nIl file contiene "<<m<<" nomi maschili diversi (";
		for(int a=0; a<m; a++){
			cout<<maschio[a]<<" ";
		} 
	cout<<") e "<<f<<" nomi femminili diversi (";
		for(int b=0; b<f; b++){
			cout<<femmina[b]<<" ";
		} 
	cout<<" ).";
}	
