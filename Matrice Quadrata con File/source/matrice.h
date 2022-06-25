#include<iostream>
#include<fstream>
#include<math.h>
#define size 75
using namespace std;

typedef char stringa[size];

//Elenco prototipi delle funzioni.
void Apertura(fstream &FILE);
void Dimensione(fstream &FILE,int vettore[],int &,int );
void Carica_Stampa(int vettore[], int **MAT,int &);
