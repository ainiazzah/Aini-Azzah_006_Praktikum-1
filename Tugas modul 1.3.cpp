#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int nData;
	cout<<"Masukkan banyaknya data = ";
	cin>>nData;
	
	int data[nData];
	double rata;
	int jumlah;
	
	for(int a=1; a<nData+1; a++)
	{
		cout<<"Data ["<<a<<"] = "; cin>>data[a];
	}
	
	for(int b=1; b<nData+1; b++)
	{
		jumlah += data[b];
	}
	
	rata = jumlah / nData;
	
	cout<<"Banyaknya data = "<<nData<<endl;
	cout<<"Rata - rata = "<<rata<<endl;
	cout<<"Jumlah = "<<jumlah<<endl;
	
	double sigma = sigma + sqrt(data[nData] - rata);
	double sd = sqrt(sigma/nData);
	cout<<"Sigma = "<<sd;
	
}
