#include "header.h"


int main() {
	stringa percorso;
	stringa **mat;
	ifstream file;
	int n, m;
	
	apertura_file(file,percorso);
	creazione_mat(file,n,m,mat);
	riempimento_mat(file,mat,n,m);
	
	file.close();
	
	stampa_stessaL(mat,n,m);
	stampa(mat,n,m);
	riordina(mat,n,m);
	stampa(mat,n,m);
	
	for(int i=0; i<n; i++)
		delete[] mat[i];
	delete[] mat;
}
