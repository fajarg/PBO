#include <iostream>
#include <string.h>

using namespace std;

// polymorphism = banyak bentuk

// Polymorphism terjadi ketika terdapat sebuah hierarki class yang berhubungan dengan inheritance

// jenis polymorphism ada 2

// Trivia (Overloading)
   // -- Nama fungsi sama pada kelas yang sama dengan 3 ciri yang membedakannya (jumlah, letak, dan tipe argumen)

// True (Overriding) 
   // -- Nama fungsi sama pada kelas berbeda (virtual)

// Contoh Polymorphism

// class induk 
class Burung {
	
protected: 
	int jumlahKaki;
	char warna[100];
	
public: 
	
	// Constructor Burung	
	Burung(){
		cout << "Ini adalah constructor Burung" << endl;
	};
	
	// setter dan getter	
	void setJumlahKaki(int jk){
		jumlahKaki  = jk;
	};
	
	int getJumlahKaki(){
		return jumlahKaki;
	};
	
	void setWarna (char w[100]){
		strcpy (warna,w);
	};
	
	char *getWarna(){
		return warna;
	};
	
	// Trivia Polymorphism - Overrloading 	
	//1
	void makan(int x){
		cout << "Burung makan sebanyak " << x << " wadah" << endl;
	};
	
	//2
	void makan(int x , char y[100]){
		cout << "Burung makan " << y << " sebanyak " << x << " wadah" << endl; 
	};
	
	//3
	void makan(char y[100], int x){
		cout << "Burung makan " << y << "." << endl; 
	};
	
	//4
	void makan (char x[100]){
		cout << "Burung makan " << x << " !" << endl;
	};
	
	// True Polymomrphism - Overrriding
	//A
	virtual void terbang (){
	//void terbang (){
		cout << "Hewan terbang identik dengan Burung" << endl;
	};
	
	//*
	//pure virtual fungtion (PVF) = fungsi virtual yang tidak memiliki body
	//deklarasi PVF adalah =0 (samadengan nol)
	//semua objek yang merupakan class turunan dari Burung harus memiliki fungsi terebut
	
	virtual void tidur() = 0 ;
};

// class turunan pertama

class Merpati : public Burung {

public: 
	Merpati(){
		cout << "Ini adalah constructor Burung Merpati" << endl;
	};
	
	// True Polymomrphism - Overrriding
	//B
	void terbang(){
		cout << "Burung Merpati terbang tinggi" << endl;
	};
	
	//*
	virtual void tidur(){
		cout << "Burung Merpati tidur" << endl;	
	};
	//
};

// class turunan kedua

class Hantu : public Burung {

public: 
	Hantu(){
		cout << "Ini adalah constructor Burung Hantu" << endl;
	};
	
	//*
	virtual void tidur(){
		cout << "Burung Hantu tidur" << endl;	
	};
	//

};

// class turunan ketiga

class Gagak : public Burung {

public:
	Gagak(){
		cout << "Ini adalah constructor Burung Gagak" << endl;
	};
	
	//*
	virtual void tidur(){
		cout << "Burung Gagak tidur" << endl;	
	};
	//
};

int main (){
	
	//Membuat objek Merpati
	Merpati m;
	
	//Memanggil Fungsi Overoading
	//1
	m.makan(5);
	
	//2
	m.makan(2,"Cacing");
	
	//3
	m.makan("Cacing",3);
	
	//4
	m.makan("Cacing");
	
	//Membuat objek Hewan dengan pointer dan operator new 
	// Syntaks: nama_class_induk *nama_objek = new nama_class_turunan();
	Burung *hewan = new Merpati();
	
	//Jika menggunakan pointer, maka operasi dot(.) diganti dengan operasi panah (->)
	hewan -> terbang();
	
	//Membuat baru objek hewan2
	Burung *hewan2 = new Hantu();
	
	//Memanggil fungsi tidur dari objek Burung Hantu
	hewan2 -> tidur(); 
	
	//Mengganti objek hewan dari Merpati dengan Gagak
	hewan = new Gagak();
	
	//Memanggil Fungsi Tidur dari Gagak 
	hewan -> tidur();
	
	//End of Code//
	
};
