#include <iostream>
using namespace std;

struct name{
	string nama;
	string namabelakang;
	string alamat;
	string Kecamatan;
	string Kelurahan;
	string RT;
	string RW;
};

int main (){
	name a;
	cout << "Nama Depan Anda : ";
	cin >> a.nama;
	cout << endl;
	cout << "Nama Belakang Anda : ";
	cin >> a.namabelakang;
	cout << endl;
	cout << "Alamat Anda : ";
	cin >> a.alamat;
	cout << endl;
	cout << "Kecamatan Anda : ";
	cin >> a.Kecamatan;
	cout << endl;
	cout << "Kelurahan Anda : ";
	cin >> a.Kelurahan;
	cout << endl;
	cout << "RT Anda : ";
	cin >> a.RT;
	cout << endl;
	cout <<"RW Anda : ";
	cin >> a.RW;
	cout << endl;
	cout << endl;
	cout << "====================================================================" <<endl;
	cout << endl;
	cout << a.nama <<" "<< a.namabelakang << endl;
	cout << a.alamat << " " << a.RT << " " << a.RW << " " << a.Kelurahan << " " << a.Kecamatan;
	return 0;
}
