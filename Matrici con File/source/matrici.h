// file header con le definizioni delle funzioni

#include <iostream>
#include <fstream>
using namespace std;

#define N 100

typedef int Matrice[N][N];


int apri_file(fstream& file, string nome);
void carica_matrice(fstream& f, int dim, Matrice m);
void check_dimensione(int d1, int d2);
void check_righe(Matrice m1, Matrice m2, int dim);
void check_colonne(Matrice m1, Matrice m2, int dim);
void stampa_matrice(Matrice m, int d);
void chiudi_file(fstream& file);

