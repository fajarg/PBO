#include<iostream>
using namespace std;

class toko
{
	protected :
		int harga=100;
	public :
		void input()
		{
			cout << "\nIni tidak di cetak";
		}
};

class sembako : public toko
{
	public :
		toko a;
	public :
		void cetak()
		{
			cout << "Harga beras\t: " << harga;
			a.input();
		}
};

int main()
{
	sembako beras;
	beras.cetak();
	beras.input();
}
