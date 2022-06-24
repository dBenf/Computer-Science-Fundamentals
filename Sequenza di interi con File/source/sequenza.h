#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

#define N 250

typedef int vett[N];

void apri_file(fstream& file, string nome);
int riempi_vettore(fstream& f, vett v);
int crea_vettore(vett v);
void ricerca_sequenza(vett vIn, vett v, int dimIn, int dim);
void chiudi_file(fstream& file);
void stampa_vettore(vett v, int dim);
