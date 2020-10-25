#include<iostream>
using namespace std;
struct nama{
	string n;
	string alamat;
	string kecamatan;
	string kelurahan;
	string rt;
	string rw;
};
main()
{
	nama a;
	cout << "==============================\n\n";
	cout << "Masukkan Inputan\t:\n\n";
	cout << "Masukkan Nama\t: ";
	cin >> a.n;
	cout << "Alamat\t\t: ";
	cin >> a.alamat;
	cout << "Kecamatan\t: ";
	cin >> a.kecamatan;
	cout << "Kelurahan\t: ";
	cin >> a.kelurahan;
	cout << "RT\t\t: ";
	cin >> a.rt;
	cout << "RW\t\t: ";
	cin >> a.rw;
	
	cout << "\n==============================\n";
	
	cout << "\nData yang di input\t:\n\n";
	cout << "Nama\t\t: " << a.n << endl;
	cout << "Alamat\t\t: " << a.alamat << endl;
	cout << "Kcamatan\t: " << a.kecamatan << endl;
	cout << "Kelurahan\t: " << a.kelurahan << endl;
	cout << "RT\t\t: " << a.rt << endl;
	cout << "RW\t\t: " << a.rw << endl;
	
	return 0;
}
