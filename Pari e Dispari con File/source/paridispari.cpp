#include "paridispari.h"

void apri_file(fstream& f){
	string nome;
	cout<<"inserisci il nome del file di ingresso: ";
	cin>>nome;
	
	f.open(nome, ios::in);
	if(!f){
		cout<<"errore apertura file"<<endl;
		exit(1);
	}
}

int leggi_file(fstream& f, Array vett){
	cout<<"---------RIEMPIMENTO DEL VETTORE--------------"<<endl;
	int i=0;
	while(!f.eof()){
		f>>vett[i];
		i++;
	}
	cout<<"dimensione del vettore: "<<i<<endl;
	
	chiudi_file(f);
	
	return i;
}

void conta_zeri(Array vett, int dim){
	cout<<"---------CONTEGGIO DEGLI ZERI--------------"<<endl;
	int cont=0;
	for(int i =0; i<dim; i++){
		if(vett[i]==0){
			cont++;
		}
	}
	cout<<"Numero di valori pari a 0: "<<cont<<endl;
}

int crea_pari(Array v, Array vpari, int dim){
	cout<<"---------CREAZIONE VETTORE PARI--------------"<<endl;
	
	int numpari=0;
	for(int i =0; i<dim;i++){
		if(v[i]%2==0 && v[i]!=0){
			vpari[numpari]=v[i];
			numpari++;
		}
	}
	
	cout<<"Array elementi pari: "<<endl;
	for(int i =0; i<numpari; i++){
		cout<<vpari[i]<<" ";
	}
	
	cout<<endl;
	
	return numpari;
}

int crea_dispari(Array v, Array vdisp, int dim){
	cout<<"---------CREAZIONE VETTORE DISPARI--------------"<<endl;

	int numdispari=0;
	for(int i =0; i<dim;i++){
		if(v[i]%2==1 && v[i]!=0){
			vdisp[numdispari]=v[i];
			numdispari++;
		}
	}
	
	cout<<"Array elementi dispari: "<<endl;
	for(int i =0; i<numdispari; i++){
		cout<<vdisp[i]<<" ";
	}
	
	cout<<endl;
	
	return numdispari;
}

void riempi_file(fstream& f, Array v, int dim){
	string nome;
	cout<<"inserisci il nome del file da riempire: ";
	cin>>nome;
	
	f.open(nome, ios::out);
	if(!f){
		cout<<"errore apertura file"<<endl;
		exit(1);
	}
	
	for(int i=0; i<dim; i++){
		f<<v[i]<<" ";
	}
	
	chiudi_file(f);
}

void trova_max(Array v, int dim){
	cout<<"---------TROVO IL MASSIMO DEI PARI--------------"<<endl;

	int max = 0;
	for(int i =0; i<dim; i++){
		if(v[i]>max){
			max=v[i];
		}
	}
	cout<<"Numero Pari Massimo: "<<max<<endl;
}

void trova_min(Array v, int dim){
	cout<<"---------TROVO IL MINIMO DEI DISPARI--------------"<<endl;

	int min = 1000;
	for(int i =0; i<dim; i++){
		if(v[i]<min){
			min=v[i];
		}
	}
	cout<<"Numero Dispari Minimo: "<<min<<endl;
}

void chiudi_file(fstream& f){
	cout<<"chiusura del file in corso..."<<endl;
	f.close();
}
