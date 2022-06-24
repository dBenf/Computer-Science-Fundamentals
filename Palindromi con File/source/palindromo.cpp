#include "palindromo.h"

void inizializza_vettore(Array v){
	for(int i = 0; i< N; i++){
		v[i]=0;
	}
}

bool ricerca(int e, Array vett){
	bool trovato=false;
	int i = 0;
	while(vett[i]!=0 && trovato==false){
		if(vett[i]==e) {
			trovato=true;
		}
		i++;
	}
	return trovato;
}

bool checkPalindromo(int e){
	bool palindromo = true;
	e = abs(e);
	int ncifre = 0;
	int cifre[50];
	
	//divido il numero in un vettore di cifre
	while(e>0){
		cifre[ncifre] = e % 10;
		ncifre++;
		e = int(e/10);
	}
	
	
	//controllo se il vettore di cifre è palindromo
	int i = 0;
	while(i<ncifre/2 && palindromo==true){
		if(cifre[i]!=cifre[ncifre-1-i]){
			palindromo = false;	
		}
		i++;
	}
	
	return palindromo;
}

void insert_vettore(int e, Array vett){
	int i = 0;
	while(vett[i]!=0){
		i++;
	}
	vett[i]=e;
	cout<<"ho inserito l'elemento "<<vett[i]<< " nel vettore in posizione "<<i;
}

void leggi_file(fstream& file, Array vettPal, Array vettNonPal){
	
	string F;
	int e;
	cout<<"inserisci il nome del file da aprire: ";
	cin>>F;
	file.open(F, ios::in);
	if(!file){
		cout<<"errore apertura file";
		exit(1);
	}
	
	while(!file.eof()){
		file>>e;
		if(ricerca(e, vettPal)==false && checkPalindromo(e)==true){
			insert_vettore(e, vettPal);
			cout<<" palindromo"<<endl;
		}
		
		if(ricerca(e, vettNonPal)==false && checkPalindromo(e)==false){
			insert_vettore(e, vettNonPal);
			cout<<" non palindromo"<<endl;
		}
	}
	
	file.close();
}

//ordinamento tramite Insection Sort
void ordina_vettore(Array vett){
	int temp;
	int i = 1;
	int j;
	
	while(vett[i]!=0) { 
		temp=vett[i]; 
        j=i-1;
        
		while((vett[j]>temp) && (j>=0)) { 
			vett[j+1]=vett[j]; 
            j--;
        }
		 
		vett[j+1]=temp; 
		i++;
	} 
	
}

void stampa_vettore(Array v, string tipoVett){
	int i = 0;
	cout<<"Stampo il vettore di tipo "<<tipoVett<<endl;
	while(v[i]!=0){
		cout<<"Pos["<<i<<"] Elemento: "<<v[i]<<endl;
		i++;
	}
}

void scrivi_file(Array vett, fstream& file){
	string nome;
	cout<<"inserisci il nome del file da aprire per la scrittura: ";
	cin>>nome;
	
	file.open(nome, ios::out);
	if(!file){
		cout<<"errore apertura file 2 di output";
		exit(1);
	}
	
	int i=0;
	while(vett[i]!=0){
		file<<vett[i]<<endl;
		i++;
	}
	file.close();
}

void stampa(fstream& file, string nome){
	int temp;
	file.open(nome, ios::in);
	if(!file){
		cout<<"errore apertura file da stampare";
		exit(1);
	}
	
	cout<<"Stampa del file "<<nome<<endl;
	while(!file.eof()){
		file>>temp;
		cout<<temp<<endl;
	}
	
	file.close();
	cout<<endl<<"--------------------------"<<endl;
}
