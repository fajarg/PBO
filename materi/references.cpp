#include <iostream>

using namespace std;

void swap (int *n1 , int *n2){
	int temp = *n1;
	*n1 = *n2; 
	*n2 = temp;
};

int main (){
	
	// reference
	// reference digunakan untuk membuat variabel alias
	// alamat memori antara variabel asli dengan aliasnya sama
	// tanda & (dan) digunakan untuk alamat memori

	int angka = 30;
	int &refer = angka;
	
	cout << "angka: " << angka << " refer to: " << refer << endl; 
	
	angka--;
	
	cout << "angka: " << angka << " refer to: " << refer << endl; 
	
	refer *= 2;
	
	cout << "angka: " << angka << " refer to: " << refer << endl; 
	
	cout << "cetak alamat dari angka: " << &angka << endl;
	
	cout << "cetak alamat dari refer: " << &refer << endl;
	
	// pointer
	// pointer digunakan untuk menyimpan alamat pada suatu variabel
	// pointer memiliki alamat yang beda dengan variabel yang ditunjuk alamatnya
	// tipe data pointer dan variabel nya harus sama
	// pointer diawali dengan * (bintang)
	
	int *pointer = &angka;
	
	cout << "nilai dari angka: " << angka << endl;
	
	// akan menampilkan alamat dari variabel angka
	cout << "nilai dari *pointer : " << pointer << endl;
	
	cout << "alamat memori dari angka: " << &angka << endl;
	
	cout << "alamat memori dari *pointer " << &pointer << endl;
	
	// Fungsi Pointer digunakan untuk Mata ajar SDA (Struktur data dan algoritma)
	// menunjuk node selanjutnya
	// pointer juga disebut sebagai dynamic array
	
	// pointer dan array
	
	const int size = 5;
	
	int array [size] = {1,3,5,7,9};
    
	cout << " cetak nilai arrai indeks ke 0: " << array[0] << endl;
	
	for (int i = 0 ; i < size ; ++i){
		cout <<  "Cetak Nilai dari array index ke : " << i << " = " << array[i] << " " << endl;
	};
	
	int *pointerArray = &array[0];
	
	cout << "Cetak nilai pointer array adalah: " << *pointerArray << endl;
	cout << "Cetak nilai pointer array adalah: " << *pointerArray+1 << endl;
	cout << "Cetak nilai pointer array adalah: " << *(pointerArray+1) << endl;
	
	for (int j = 0 ; j < size ; ++j ){
		cout <<  "Cetak Nilai dari array index ke : " << j << " = " << *(pointerArray+j) << " " << endl;
	};
	
	// Fungsi Array sebagai pointer, tidak perlu membuat variabel pointer untuk mengakses array
	for ( int k = 0; k < size ; ++k){
		cout << "Cetak Nilai dari array tanpa pointer index ke : " << k << " = " << *(array+k) << " " << endl;	
	};	
	
	// Parameter pada pointer
	int num1 = 100;
	int num2 = 50;
	
	cout << "Cetak nilai sebelum swap adalah: " << num1 << " dan " << num2 << endl;
	
	swap (&num1, &num2);
	
	cout << "Cetak nilai setelah swap adalah: " << num1 << " dan " << num2 << endl;

};