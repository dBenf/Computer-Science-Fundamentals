// file cpp per l'implementazione delle funzioni

#include "matrici.h"


int apri_file(fstream& file, string nome){
	
	int dim;
	cout<<"inserisci il nome del file da aprire: ";
	cin>>nome;
	file.open(nome, ios::in);
	if(!file){
		cout<<"errore apertura file";
		exit(1);
	}
	
	file>>dim;
	
	cout<<"DIMENSIONE DELLA MATRICE: "<<dim<<endl;
	return dim;
	
}

void carica_matrice(fstream& f, int dim, Matrice m){
	for(int i = 0; i<dim; i++){
		for(int j = 0; j<dim; j++){
			f>>m[i][j];
		}
	}
	
	stampa_matrice(m, dim);
}

void check_dimensione(int d1, int d2){
	if(d1 == d2){
		cout<<"le due matrici hanno la stessa dimensione"<<endl;
	}
	else{
		cout<<"le due matrici hanno dimensione differente"<<endl;
		exit(1);
	}
}

void check_righe(Matrice m1, Matrice m2, int dim){
	
	int i1, i2;
	bool controllo=true;
	
	cout<<"-------CONTROLLO SULLE RIGHE DELLE MATRICI-------"<<endl;
		
	i1=0;
	while(i1<dim){
		for (int i2 = 0; i2<dim; i2++){
			for (int j = 0; j<dim; j++){
				if(m1[i1][j]!=m2[i2][j]){
					controllo=false;
				}
			}
			if(controllo){
				cout<<"Riga "<<i1<<" = Riga "<<i2<<endl;
			}
			controllo=true;
		}
		i1++;
	}
	
	cout<<"-----------------------------------------------"<<endl;
}

void check_colonne(Matrice m1, Matrice m2, int dim){
	
	int j1, j2;
	bool controllo=true;
	
	cout<<"-------CONTROLLO SULLE COLONNE DELLE MATRICI-------"<<endl;
		
	j1=0;
	while(j1<dim){
		for (int j2 = 0; j2<dim; j2++){
			for (int i = 0; i<dim; i++){
				if(m1[i][j1]!=m2[i][j2]){
					controllo=false;
				}
			}
			if(controllo){
				cout<<"Colonna "<<j1<<" = Colonna "<<j2<<endl;
			}
			controllo=true;
		}
		j1++;
	}
	
	cout<<"-----------------------------------------------"<<endl;
}

void stampa_matrice(Matrice m, int dim){
	
	cout<<"-------------------------"<<endl;
	cout<<"STAMPA MATRICE: "<<endl;
	for(int i = 0; i<dim; i++){
		for(int j=0; j<dim; j++){
			cout<<m[i][j]<<" ";
		}
		cout<<endl;
	}
	
	cout<<"-------------------------"<<endl;

}

void chiudi_file(fstream& file){
	cout<<endl<<"chiusura del file in corso..."<<endl;
	file.close();
}
