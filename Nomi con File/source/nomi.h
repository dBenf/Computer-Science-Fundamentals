#include<iostream>
#include<fstream>
#include<string.h>
#define size 75
using namespace std;
typedef char stringa[size];

//Elenco prototipi delle funzioni.
void Apertura(fstream &);
void Caricamento(fstream &, stringa elenco[],int &);
void Elimina (stringa elenco[],int&);
void Ricerca (stringa elenco[],int,stringa maschio[] ,stringa femmina[]);
