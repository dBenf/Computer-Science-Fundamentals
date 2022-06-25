#include<iostream>
#include<fstream>
#include<string.h>
#define size 256
#define max 100
using namespace std;
typedef char percorso [size];
typedef struct record{
	percorso nome;
	int numero;
}lista;

//Elenco prototipi
void Apertura(ifstream &);
void Lettura(ifstream &, lista[], int &);
void Ordina(lista[] ,int );
void Stampa(lista[] ,int );
bool Verifica_Ordine(lista[], int );
void Elimina (lista[], int&);
