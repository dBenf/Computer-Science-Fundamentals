#include <iostream>
#include <fstream>
#include <cstring>
#include "math.h"
using namespace std;

#define N 200

typedef int Array[N];

void apri_file(fstream& f);
int leggi_file(fstream& f, Array vett);
void conta_zeri(Array vett, int dim);
int crea_pari(Array v, Array vpari, int dim);
int crea_dispari(Array v, Array vdisp, int dim);
void riempi_file(fstream& f, Array v, int dim);
void trova_max(Array v, int dim);
void trova_min(Array v, int dim);
void chiudi_file(fstream& f);

