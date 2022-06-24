#include "impiegati.h"

void apri_file(fstream& f, string nome){
	f.open(nome, ios::in);
	if(!f){
		cout<<"errore apertura file"<<endl;
		exit(1);
	}
}

int riempi_vettore(fstream& f, ArrayImpiegati v){
	cout<<endl<<"--------------RIEMPIMENTO DEL VETTORE DA FILE--------------"<<endl;
	Impiegato imp;
	int i=0;
	while(!f.eof()){
		f>>imp.nome;
		f>>imp.cognome;
		f>>imp.stipendio;
		
		v[i]=imp;
		i++;
	}
	
	chiudi_file(f);
	cout<<"Numero di impiegati presenti nel file: "<<i<<endl;
	stampa_vettore(v, i);
	return i;
}


void trova_stipendio_max(ArrayImpiegati v, int dim){
	cout<<endl<<"-----------TROVO L'IMPIEGATO CHE GUADAGNA DI PIU'--------------"<<endl;
	int max = 0;
	int index = 0;
	for(int i = 0; i<dim; i++){
		if(v[i].stipendio > max){
			max = v[i].stipendio;
			index = i;
		}
	}
	
	cout<<"Lo stipendio massimo vale: "<<max<<endl;
	cout<<"Nome impiegato con stipendio massimo: "<<v[index].nome<<endl;
	cout<<"Cognome impiegato con stipendio massimo: "<<v[index].cognome<<endl;
}

int trova_stipendio_medio(ArrayImpiegati v, int dim){
	cout<<endl<<"----------------TROVO LO STIPENDIO MEDIO-----------------"<<endl;
	int media = 0;
	int somma = 0;
	for(int i = 0; i<dim; i++){
		somma = somma + v[i].stipendio;
	}
	
	media = somma / dim;
	cout<<"Stipendio medio: "<<media<<endl;
	return media;
}

void trova_impiegati_sopra_media(ArrayImpiegati v, int dim, int media){
	cout<<endl<<"---------------TROVO IMPIEGATI SOPRA LA MEDIA-----------------"<<endl;
	for(int i = 0; i<dim; i++){
		if(v[i].stipendio > media){
			cout<<"Nome: "<<v[i].nome<<endl;
			cout<<"Cognome: "<<v[i].cognome<<endl;
			cout<<endl;
		}
	}
}

void stampa_vettore(ArrayImpiegati v, int dim){
	cout<<endl<<"---------------STAMPA DEGLI IMPIEGATI-----------------"<<endl;
	for(int i = 0; i<dim; i++){
		cout<<"Nome: "<<v[i].nome<<"   Cognome: "<<v[i].cognome<<"   Stipendio: "<<v[i].stipendio<<endl;
	}
}

void chiudi_file(fstream& f){
	cout<<"chiusura del file in corso...";
	f.close();
}
