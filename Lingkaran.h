// File ini merupakan Header yang berisikan deklaasi variabel dari kelas Lingkaran yang akan kita buat..

// Kebanyakan software engineer memisahkan antara deklarasi variabel dengan implementasi kelas pada file yang berbeda..

// Deklarasi variabel berfungsi sebagai interface yang dikembangkan oleh programmer yang dapat diberikan kepada user, 

// sedangkan implementasi dapat diberikan dalam bentuk objek atau library. 

// Untuk lebih jelas, perhatikan contoh header berikut ini: 

#include <string>
// Jika kita tidak ingin menggunakan strcpy

using namespace std;

// Deklarasi kelas lingkaran

class Lingkaran {
private: //akses modifier kita set private 
	
	//kita akan membuat banyak lingkaran yang memiliki ukuran dan warna yang berbeda, maka
	//data atribut yang dibutuhkan kelas lingkaran adalah jari-jari dan warna;
	double jari2; 
	string warna;
	
public: 
	
	// Jangan Lupa kita buat konstraktor untuk kelas Lingkaran
	// Pada materi ini kita akan membuat konstraktor dengan default argumen
	// Artinya jika objek Lingkaran dibuat, maka default ukuran dan warnanya sudah ditentukan
	Lingkaran(double jari2 = 1.0 , string warna = "Merah");
	
	// Setelah membuat konstraktor, kita buat deklarasi setter dan getter data atribut pada kelas Lingkaran 
	// jari-jari
	void setJari2 (double jari2);
	double getJari2() const;
	// Fungsi Anggota konstan yang dideklarasikan dengan keyword "const" pada akhir fungsi merupakan fungsi yang tidak dapat dirubah 
	
	// warna
	void setWarna (string warna);
	string getWarna() const;
	
	// selain jari-jari dan warna, kita juga membutuhkan ukuran atau luas area dari lingkaran
	double getLuasLingkaran() const;
};

// Pada kelas ini, hanya terdiri dari deklarasi variabel dan fungsi saja,
// untuk implementasi kita akan membuat pada file terpisah