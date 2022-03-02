#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int MatriksA[5][5], MatriksB[5][5], hasil[5][5];
	int a, b, c, m, n, p, q, jumlah = 0;
	
	cout<<"Jumlah baris Matriks A = ";
	cin>>m;
	cout<<"Jumlah kolom Matriks A = ";
	cin>>n;
	cout<<"Jumlah baris Matriks B = ";
	cin>>p;
	cout<<"Jumlah kolom Matriks B = ";
	cin>>q;
	
	if(n != p){
		cout<<"\n\nMatiks tidak dapat dikalikan satu sama lain\nJumlah ordo tidak sama\n";
	} else{
		
		cout<<"\nMasukkan elemen Matriks A\n";
		for(int a=0; a<m; a++){
			for(int b=0; b<n; b++){
				cout<<"Elemen baris ke-"<<a<<" kolom ke-"<<b<<" = ";
				cin>>MatriksA[a][b];
			}
		}
		cout<<"\n#####  MATRIKS A  #####\n";
		for(int a=0; a<m; a++){
			for(int b=0; b<n; b++){
				cout<<MatriksA[a][b]<<"\t";
			}
			cout<<"\n";
		}
		
		cout<<"\nMasukkan elemen Matriks B\n";
		for(int a=0; a<p; a++){
			for(int b=0; b<q; b++){
				cout<<"Elemen baris ke-"<<a<<" kolom ke-"<<b<<" = ";
				cin>>MatriksB[a][b];
			}
		}
		cout<<"\n#####  MATRIKS B  #####\n";
		for(int a=0; a<p; a++){
			for(int b=0; b<q; b++){
				cout<<MatriksB[a][b]<<"\t";
			}
			cout<<"\n";
		}
		
		for(int a=0; a<m; a++){
			for(int b=0; b<q; b++){
				for(int c=0; c<p; c++){
					jumlah = jumlah + MatriksA[a][c] * MatriksB[c][b];
				}
				hasil[a][b] = jumlah;
				jumlah = 0;
			}
		}
		
		cout<<"\nHasil perkalian Matriks A dan Matriks B =\n";
		for(int a=0; a<m; a++){
			for(int b=0; b<n; b++){
				cout<<hasil[a][b]<<"\t";
			}
			cout<<"\n";
		}
		
	}
	
	return 0;
}
