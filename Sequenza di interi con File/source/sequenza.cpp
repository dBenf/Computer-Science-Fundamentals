#include "sequenza.h"

void apri_file(fstream& file, string nome){
	cout<<endl<<"----------APERTURA DEL FILE------------"<<endl;
	
	file.open(nome, ios::in);
	if(!file){
		cout<<"errore file"<<endl;
		exit(1);
	}
}

int riempi_vettore(fstream& f, vett v){
	cout<<endl<<"----------RIEMPIMENTO DEL VETTORE------------"<<endl;
	int i = 0;
	while(!f.eof()){
		f>>v[i];
		i++;
	}
	cout<<"Numero di elementi: "<<i<<endl;
	chiudi_file(f);
	return i;
}

int crea_vettore(vett v){
	cout<<endl<<"----------CREAZIONE DEL VETTORE DA CERCARE------------"<<endl;
	
	int dim;
	cout<<"inserisci la dimensione della sequenza da cercare: ";
	cin>>dim;
	for(int i = 0; i<dim; i++){
		cout<<"Elemento ["<<i<<"]: ";
		cin>>v[i];
	}
	return dim;
}

void ricerca_sequenza(vett vIn, vett v, int dimIn, int dim){
	cout<<endl<<"----------RICERCA DELLA SEQUENZA SCELTA ALL'INTERNO DEL VETTORE------------"<<endl;
	/*
	int count=0;
	for(int i = 0; i<dim; i++){
		cout<<"[DEBUG] Sono nel for di scorrimento del vettore totale"<<endl;
		cout<<"[DEBUG] Analizzo l'elemento "<<v[i]<<endl;
		for(int j = 0; j<dimIn; i++){
			cout<<"     [DEBUG] Controllo che l'elemento "<<v[i]<<" sia uguale a "<<vIn[j]<<endl;
			if(v[i+j]==vIn[j] && (i+j)<dim) {
				cout<<"           [DEBUG] Sono uguali"<<endl;
				count++;
			}
		}
	}
	*/
	
	int count=0;
	int num_occ = 0;
	for(int i = 0; i<dimIn; i++){
		int j=0;
		if(vIn[i]==v[j]){
			while(vIn[i+j]==v[j]){
				count++;
				j++;
			}
			
			if(count==dim){
				num_occ ++;
				cout<<"Trovata nuova occorrenza"<<endl;
			}
		}
		count=0;
	}
	
	cout<<"Numero di occorrenze del vettore nel file: "<<num_occ<<endl;
}

void chiudi_file(fstream& file){
	cout<<endl<<"----------CHIUSURA DEL FILE------------"<<endl;
	file.close();
}

void stampa_vettore(vett v, int dim){
	cout<<endl<<"----------STAMPA DEL VETTORE------------"<<endl;
	for(int i = 0; i<dim; i++){
		cout<<"Elemento ["<<i<<"]: "<<v[i]<<endl;
	}
}
