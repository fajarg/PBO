#ifndef WAKTU_H
#define WAKTU_H

// Syntaks kode diatas meyakinkan bawha header waktu telah didefinisikan
// Fungsi Syntaks untuk mencegah file header dimasukkan lebih dari satu kali ke dalam file implementasi 

// Membuat kelas waktu

class Waktu{
private:
	int jam; // 0 - 23
	int menit; // 0 - 59
	int detik; // 0 - 59
public:
	//jangan lupa buat konstraktor
	Waktu(int j = 0, int m = 0, int d = 0);
	
	//deklarasikan setter dan getter
	void setJam(int j);
	int getJam() const;
	
	void setMenit (int m);
	int getMenit() const;
	
	void setDetik(int d);
	int getDetik() const;
	
	void setWaktu (int j, int m, int d); // fungsi untuk set waktu 
	void cetakWaktu () const; // fungsi untuk menampilkan waktu yang telah diset
	void detikBerikutnya(); // fungsi untuk menampilkan detik berikutnya (+1 detik)
};

#endif