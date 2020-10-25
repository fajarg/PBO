#include <iostream>

#include "Lingkaran.h" // kelas Lingkaran 

using namespace std;

int main (){
	// membuat objek Lingkaran pertama
	Lingkaran Bulat1 (7 , "Putih");
	
	cout << "Jari2 Lingkaran 1 : " << Bulat1.getJari2() << endl;
	cout << "Warna Lingkaran 1 : " << Bulat1.getWarna() << endl;
	cout << "Luas Lingkaran 1 : " << Bulat1.getLuasLingkaran() << endl;
		
	// mengganti atribut pada lingkaran pertama
	Bulat1.setJari2(14);
	Bulat1.setWarna("Biru");
	
	cout << "Jari2 Lingkaran 1 : " << Bulat1.getJari2() << endl;
	cout << "Warna Lingkaran 1 : " << Bulat1.getWarna() << endl;
	cout << "Luas Lingkaran 1 : " << Bulat1.getLuasLingkaran() << endl;
		
	// membuat objek lingkaran kedua dengan default konstraktor yang dibuat di header
	
	Lingkaran Bulat2;
	
	cout << "Jari2 Lingkaran 2 : " << Bulat2.getJari2() << endl;
	cout << "Warna Lingkaran 2 : " << Bulat2.getWarna() << endl;
	cout << "Luas Lingkaran 2 : " << Bulat2.getLuasLingkaran() << endl;
	
	return 0;

};

