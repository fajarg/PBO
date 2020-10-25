#include "Lingkaran.h" 
// Kita membutuhkan interface header kelas lingkaran untuk impementasinya
// Kita sudah membuat kelas Lingkaran dengan deklarasi variabel

// Implementasikan konstraktor 
Lingkaran :: Lingkaran (double r , string w){
	jari2 = r;
	warna = w;
};

// implementasi tidak bisa membuat default konstraktor
// class scope resolution operator (::) karena implementasi berada di luar kelas Lingkaran, maka kita perlu menggunakan operator (::)

// Implementasi Setter dan getter

void Lingkaran :: setJari2 (double r) {
	jari2 = r;
}; 

double Lingkaran :: getJari2 () const {
	return jari2;
};

void Lingkaran :: setWarna (string w){
	warna = w;
};

string Lingkaran :: getWarna () const {
	return warna;
};

double Lingkaran :: getLuasLingkaran () const{
	return jari2 * jari2 * 3.14 ;
};

