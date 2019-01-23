#include<iostream>
using namespace std;

int main()
{
	int bil1,bil2,bil3,terbesar;
	cout<<"Nama  = Danu Adiputra"<<endl;
	cout<<"NIM   = 311810929"<<endl;
	cout<<"Kelas = 18.B.2"<<endl<<endl;
	cout<<"Masukkan bilangan 1 : ";cin>>bil1;
	cout<<"Masukkan bilangan 2 : ";cin>>bil2;
	cout<<"Masukkan bilangan 3 : ";cin>>bil3;
	{
		if(bil1>bil2)
		terbesar=bil1;
		else
		terbesar=bil2;
		if(bil3>terbesar)
		terbesar=bil3;
		cout<<endl;
		cout<<"Nilai terbesar = "<<terbesar;
	}
}
