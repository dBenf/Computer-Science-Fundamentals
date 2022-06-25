#include "header.h"

void apertura_file(ifstream& file, stringa percorso)
{
	cout<<"Inserisci percorso file: \n";
	cin>>percorso;
	file.open(percorso, ios::in);
	if(!file)
		{
			cout<<"\nErrore in apertura";
			exit(1);
		}
}

void creazione_mat(ifstream& file, int&n, int &m, stringa** &mat)
{
	file>>n>>m;
	mat=new stringa*[n];
	for(int i=0; i<n; i++)
		mat[i]=new stringa[m];
}

void riempimento_mat(ifstream& file, stringa** mat, int n, int m)
{
	for(int i=0; i<n; i++)
		{
			for(int j=0; j<m; j++)
				file>>mat[i][j];
		}
}

void stampa_stessaL(stringa** mat,int n,int m)
{
	for(int i=0; i<n; i++)
		{
			for(int j=0; j<m; j++)
				{
					for(int k=i; k<n; k++)
						{
							for(int w=0; w<m; w++)
								{

									if(strlen(mat[i][j])==strlen(mat[k][w]))
										cout<<"La stringa in posizione "<<i<<","<<j<<" ha la stessa lunghezza di quella in posizione "<<k<<","<<w<<endl;
								}
						}
				}
		}
}

void riordina(stringa** mat, int n ,int m)
{ //bubble sort	
	stringa temp;
	bool scambio=true;
	while(scambio)
		{	scambio=false;
				for(int i=0; i<n-1; i++){ 
					if(sommalung(mat,i,m)>sommalung(mat,i+1,m))
						{
							for(int j=0; j<m; j++)
								{
									strcpy(temp,mat[i][j]);
									strcpy(mat[i][j],mat[i+1][j]);
									strcpy(mat[i+1][j],temp);
								}
							scambio=true;
						}
				}
		}
}

int sommalung(stringa** mat,int n, int m)
{	int somma=0;
		for(int j=0; j<m; j++)
			somma+=strlen(mat[n][j]);
	return somma;
}

void stampa(stringa** mat,int n ,int m)
{   cout<<endl;
	for(int i=0; i<n; i++)
		{
			for(int j=0; j<m; j++)
				cout<<mat[i][j]<<"  ";
			cout<<endl;
		}
}
