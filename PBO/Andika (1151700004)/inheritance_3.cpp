#include<iostream>
using namespace std;

class barang
{
	protected :
	//	string warna="coklat";
		string warna;
		int n,p,l,t,harga,total;		
};

class meja : public barang
{
	public :
		void mejadis()
		{
			cout << "===========================\n";
			cout << "\tPilihan\n";
			cout << "===========================\n";
			cout << "1) Input sendiri\n";
			cout << "2) Default\n";
			cout << "===========================\n";
			cout << "Masukkan pilihan\t: ";
			cin >> n;
			harga = 5000;
			switch(n)
			{
				case 1 : 
					cout << "Masukkan warna\t\t: ";
					cin >> warna;
					cout << "Panjang\t\t: ";
					cin >> p;
					cout << "Lebar\t\t: ";
					cin >> l;
					cout << "Tinggi\t\t: ";
					cin >> t;
					cout << "===========================\n";
					cout << "Warna yang dipilih\t\t: " << warna;
					total = p*t*l*harga;
					cout << "\nHarga yang harus dibayar\t: " << total <<endl;
					break;
				default :
					cout << "Panjang\t\t: ";
					cin >> p;
					cout << "Lebar\t\t: ";
					cin >> l;
					cout << "Tinggi\t\t: ";
					cin >> t;
					
					cout << "===========================\n";	
					cout << "Warna yang dipilih\t\t: " << warna;
					total = p*t*l*harga;
					cout << "\nHarga yang harus dibayar\t: " << total <<endl;
					break;					
			}
		}
};

class kursi : public barang
{
		public :
		void kursidis()
		{
			cout << "===========================\n";
			cout << "\tPilihan\n";
			cout << "===========================\n";
			cout << "1) Input sendiri\n";
			cout << "2) Default\n";
			cout << "===========================\n";
			cout << "Masukkan pilihan\t\t: ";
			cin >> n;
			harga = 7000;
			switch(n)
			{
				case 1 : 
					cout << "Masukkan warna\t\t: ";
					cin >> warna;
					cout << "Panjang\t\t: ";
					cin >> p;
					cout << "Lebar\t\t: ";
					cin >> l;
					cout << "Tinggi\t\t: ";
					cin >> t;
					cout << "===========================\n";
					cout << "Warna yang dipilih\t\t: " << warna;
					total = p*t*l*harga;
					cout << "\nHarga yang harus dibayar\t: " << total << endl;
					break;
				default :		
					cout << "Panjang\t\t: ";
					cin >> p;
					cout << "Lebar\t\t: ";
					cin >> l;
					cout << "Tinggi\t\t: ";
					cin >> t;
					cout << "===========================\n";	
					cout << "Warna yang dipilih\t\t: " << warna;
					total = p*t*l*harga;
					cout << "\nHarga yang harus dibayar\t: " << total <<endl;
					break;					
			}
		}
};

class cabinet : public barang
{
	public :
		void cabdis()
		{
			cout << "===========================\n";
			cout << "\tPilihan\n";
			cout << "===========================\n";
			cout << "1) Input sendiri\n";
			cout << "2) Default\n";
			cout << "===========================\n";
			cout << "Masukkan pilihan\t\t: ";
			cin >> n;	
			harga = 10000;
			switch(n)
			{
				case 1 : 
					cout << "Masukkan warna\t\t: ";
					cin >> warna;
					cout << "Panjang\t\t: ";
					cin >> p;
					cout << "Lebar\t\t: ";
					cin >> l;
					cout << "Tinggi\t\t: ";
					cin >> t;
					cout << "\n===========================\n";
					cout << "Warna yang dipilih\t\t: " << warna ;
					total = p*t*l*harga;
					cout << "\nHarga yang harus dibayar\t: " << total << endl;
					break;
				default :
					cout << "Panjang\t\t: ";
					cin >> p;
					cout << "Lebar\t\t: ";
					cin >> l;
					cout << "Tinggi\t\t: ";
					cin >> t;
					cout << "===========================\n";	
					cout << "Warna yang dipilih\t\t: " << warna;
					total = p*t*l*harga;
					cout << "\nHarga yang harus dibayar\t: " << total <<endl;
					break;							
			}
		}	
};

class menu : public barang
{
	public :
		meja a;
		kursi b;
		cabinet c;
	public :
		void men()
		{
			cout << "\tDaftar Menu\n";
			cout << "===========================\n";
			cout << "1) Meja\n";
			cout << "2) Kursi\n";
			cout << "3) Cabinet\n";
			cout << "===========================\n";
			cout << "Masukkan pilihan\t: ";
			cin >> n;
			switch(n)
			{
				case 1 : a.mejadis(); break;
				case 2 : b.kursidis(); break;
				case 3 : c.cabdis(); break;
				default : cout << "tidak ada pilihan, program exit"; break;
			}
		}
};
int main()
{
	menu k;
	k.men();
	return 0;
	system ("pause")
}
