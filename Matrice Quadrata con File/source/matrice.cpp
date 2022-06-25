#include "matrice.h"

void Apertura(fstream &FILE){
	stringa percorso;
	cout<<"Inserisci il percorso del file : ";
	cin>>percorso;
		if(!FILE){
			cout<<"\nERRORE! File non esatto.";
			exit(1);
		}
	FILE.open(percorso);
}

void Dimensione(fstream &FILE,int vettore[],int &l,int LUNG){
	int i=0;
	while(!FILE.eof()){
		FILE>>vettore[i];
		i++;LUNG++;
	}
	l=(int)sqrt(LUNG);
	if(l*l!=LUNG){
		cout<<"\nErrore! La matrice non e' quadrata!";
		exit(1);
	}
	
}

void Carica_Stampa(int vettore[], int **MAT,int &l){
	int k=0,i,j;
	
	//Allocazione dinamica
	MAT=new int*[l];
	for(i=0; i<l; i++){
		MAT[i]=new int [l];
	}
	
	//Stampa della matrice.
	cout<<"\nLa tua matrice e' : \n";
	for(i=0; i<l; i++){
		for(j=0; j<l; j++){
			MAT[i][j]=vettore[k];
			k++;
		}
	}
	
	for(i=0; i<l; i++){
		for(j=0; j<l; j++){
			cout<<MAT[i][j]<<" ";
		} cout<<endl;
	}
	
	//Deallocazione dinamica
	for(i=0; i<l; i++){
		delete[] MAT[i];
	}
	delete[] MAT;
}
