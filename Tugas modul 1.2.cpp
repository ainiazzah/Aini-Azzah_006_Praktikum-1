#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int kode[5] = {001, 002, 003, 004, 005};
	string nama[5] = {"Penghapus", "Pensil", "Buku", "Rautan", "Penggaris"};
	int jumlah[5] = {4, 3, 2, 3, 5};
	int harga[5] = {1000, 1500, 2000, 1000, 500};
	int total[5];
	int jml_itm = 0;
	int total_harga = 0;
	
	cout<<"Kode\tNama\t\tJumlah\tHarga\tTotal\n";
	for(int a=0; a<5; a++)
	{
		total[a] = jumlah[a] * harga[a];
		cout<<setfill('0')<<setw(3)<<kode[a]<<"\t"<<nama[a]<<"    \t"<<jumlah[a]<<"\t"<<harga[a]<<"\t"<<total[a]<<"\n";
		jml_itm += jumlah[a];
		total_harga += total[a];
	}
	
	cout<<"Jumlah item = "<<jml_itm<<endl;
	cout<<"Total Pembelian = "<<total_harga;
}
