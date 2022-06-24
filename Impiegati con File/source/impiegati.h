#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

#define N 100

typedef struct{
	string nome;
	string cognome;
	int stipendio;
}Impiegato;

typedef Impiegato ArrayImpiegati[N];

void apri_file(fstream& f, string nome);
int riempi_vettore(fstream& f, ArrayImpiegati v);
void trova_stipendio_max(ArrayImpiegati v, int dim);
int trova_stipendio_medio(ArrayImpiegati v, int dim);
void trova_impiegati_sopra_media(ArrayImpiegati v, int dim, int media);
void stampa_vettore(ArrayImpiegati v, int dim);
void chiudi_file(fstream& f);
