#include <fstream>
#include <math.h>
#include <iostream>
#include <cstring>

using namespace std;

#define N 250

typedef int Array[N];

void inizializza_vettore(Array v);
void leggi_file(fstream& file, Array vettPal, Array vettNonPal);
bool ricerca(int e, Array vett);
bool checkPalindromo(int e);
void insert_vettore(int e, Array vett);
void ordina_vettore(Array vett);
void stampa_vettore(Array v, string tipoVett);
void scrivi_file(Array vett, fstream& file);
void stampa(fstream& file, string nome);


