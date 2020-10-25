#include <iostream>
using namespace std;

class mobil
{
	float harga; //atribut
	
	public:
		//method
		void input_harga()
		{
			cout << "Masukkan harga\t: ";
			cin >> harga;
		}
		void klakson()
		{
			cout << "Beep .. Beep !" << endl;
		}
		void cetak_harga()
		{
			cout << "Harga mobil\t: " << harga << endl;
		}
};

int main()
{
	mobil fortuner;
	fortuner.input_harga();
	fortuner.cetak_harga();
	fortuner.klakson();
	return 0;		
}  
