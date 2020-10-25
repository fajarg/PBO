#include<iostream>
using namespace std;

class barang
{
	protected :
		int a;
	public :
		void cetak()
		{
			cout << "a\t: ";
			cin >> a;
			cout << a << endl;
		}
};

class meja : public barang
{
	protected :
		int b;
};

int main()
{
	meja my_desk;
	my_desk.cetak();
	return 0;
}
