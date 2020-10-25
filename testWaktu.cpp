#include <iostream>
#include "Waktu.h"

using namespace std;

int main (){
	// Membuat objek waktu pertama 
	Waktu t1(23,59,59);
	
	t1.cetakWaktu(); //23:59:59
	
	// mengganti waktu pada objek t1
	
	t1.setJam(12);
	t1.setMenit(34);
	t1.setDetik(22);
	
	t1.cetakWaktu(); //12:34:22
	
	cout << "Jam : " << t1.getJam() << endl; 
	cout << "Menit ke : " << t1.getMenit() << endl;
	cout << "Detik ke : " << t1.getDetik() << endl;
	
	// Membuat Objek Waktu ke dua
	
	Waktu t2; // default 
	
	t2.cetakWaktu(); // 00:00:00
	
	t2.setWaktu(1,2,3);
	
	t2.cetakWaktu(); // 01:02:03
	
	// Membuat objek waktu ke 3 dengan 1 argumen saja
	Waktu t3(12);
	t3.cetakWaktu(); // 12:00:00
	
	// Membuat objek waktu ke 4 untuk menguji fungsi waktuBerikutnya
	Waktu t4(23,59,58);
	t4.cetakWaktu(); // 23:59:58
	t4.detikBerikutnya(); // detik + 1
	t4.cetakWaktu(); // 23:59:59
	t4.detikBerikutnya(); // detik + 1
	t4.cetakWaktu(); // 00:00:00
	t4.detikBerikutnya(); // detik + 1
	t4.cetakWaktu(); // 00:00:01
	
	// Tidak ada validitas terhadap input waktu
	Waktu t5(23,59,88);
	t5.cetakWaktu(); // 23:59:88

};

/*
LATIHAN
Tambahkan fungsi berikut:
- detikSebelumnya(), 
- menitBerikutnya(),
- menitSebeumnya(), 
- jamBerikutnya(), 
- jamSebelumnya() pada kelas waktu.

DEADLINE : RABU, 14 Nov 2018 Pukul 08.00
*/
