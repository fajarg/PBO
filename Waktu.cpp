#include <iostream>
#include "Waktu.h"
#include <iomanip>

using namespace std;

// implementasikan konstraktor

Waktu :: Waktu (int j, int m, int d){
	jam = j;
	menit = m;
	detik = d;
};

// implementasikan setter dan getter
void Waktu::setJam(int j){
	jam = j;
}; 

int Waktu::getJam() const {
	return jam;
};

void Waktu:: setMenit(int m){
	menit = m;
};

int Waktu :: getMenit() const {
	return menit;
};

void Waktu :: setDetik(int d){
	detik = d;
};

int Waktu:: getDetik() const{
	return detik;
};

void Waktu :: setWaktu (int j, int m, int d){
	jam = j;
	menit = m;
	detik = d;
};

void Waktu :: cetakWaktu() const {
	cout << setfill('0'); //membutuhkan iomanip 
	cout << setw(2) << jam // set panjang digit menjadi 2 agar format waktu menjadi 00:00:00
		 << ":" 
		 << setw(2) << menit
		 << ":" 
		 << setw(2) << detik
		 << endl;
};

void Waktu :: detikBerikutnya(){
	// increment detik
	++detik;
	
	if (detik >= 60){
		detik = 0;
		++menit;
	}
	
	if (menit >= 60){
		menit = 0;
		++jam;
	}
	
	if (jam >= 24){
		jam = 0;
	}

};

