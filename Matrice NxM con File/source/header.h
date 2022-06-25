#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
#define l 256
typedef char stringa[l];

void apertura_file(ifstream&, stringa);
void creazione_mat(ifstream& , int&, int &, stringa** &);
void riempimento_mat(ifstream&, stringa**,int,int);
void stampa_stessaL(stringa**,int,int);
void riordina(stringa**, int ,int);
int sommalung(stringa**, int, int);
void stampa(stringa**,int,int);
