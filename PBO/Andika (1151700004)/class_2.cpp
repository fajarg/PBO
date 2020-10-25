#include <iostream>
using namespace std;

class kalkulator
{
	public :
	float a, b, hasil_kali, hasil_tambah, hasil_kurang, hasil_bagi;
	
	public :
	float tambah()
	{
		cout << "Tambah\n";
		cout << "Masukkan angka a\t: ";
		cin >> a;
		cout << "Masukkan angka b\t: ";
		cin >> b;
		hasil_tambah = a + b;
		cout << "Hasil Tambah\t: " << hasil_tambah << endl;
		return hasil_tambah;
	}	
	float kurang()
	{
		cout << "Kurang\n";
		cout << "Masukkan angka a\t: ";
		cin >> a;
		cout << "Masukkan angka b\t: ";
		cin >> b;
		hasil_kurang = a - b;
		cout << "Hasil kurang\t: " << hasil_kurang << endl;
		return hasil_kurang;
	}
	float kali()
	{
		cout << "Kali\n";
		cout << "Masukkan angka a\t: ";
		cin >> a;
		cout << "Masukkan angka b\t: ";
		cin >> b;
		hasil_kali = a * b;
		cout << "Hasil kali\t: " << hasil_kali << endl;
		return hasil_kali;
	}
	float bagi()
	{
		cout << "Bagi\n";
		cout << "Masukkan angka a\t: ";
		cin >> a;
		cout << "Masukkan angka b\t: ";
		cin >> b;
		hasil_bagi = a / b;
		cout << "Hasil bagi\t: " << hasil_bagi << endl;
		return hasil_bagi;
	}

	void semua()
	{
		int x;
		kalkulator c;
		cout << "Kalkulator\n";
		cout << "1. Tambah\n";
		cout << "2. Kurang\n";
		cout << "3. Kali\n";
		cout << "4. Bagi\n";
		cout << "Masukkan pilihan\t: ";
		cin >> x;
		
		switch(x)
		{
			case 1 : 
				c.tambah();
				break;
			case 2 : 
				c.kurang();
				break;
			case 3 : 
				c.kali();
				break;
			
			case 4 : 
				c.bagi();
				break;
			default :
				cout << "\nTidak ada pilihan, program selesai";
				break;
		}
	}
	
};

int main()
{
	kalkulator a;
	a.semua();
}  
