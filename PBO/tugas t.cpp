#include <iostream>
#include <cstdlib>
using namespace std;

class luas2d {
	public :
		float a,b,hasil;
	//	float p = 3.14;
		int pil;
	public :
		
		void persegi (){
			cout<<"masukkan sisi : ";
			cin>>a;
			hasil=a*a;
			cout<<hasil;
		}
		void persegipjg (){
			cout<<"masukkan panjang : ";
			cin>>a;
			cout<<"masukkan lebar : ";
			cin>>b;
			hasil=a*b;
			cout<<hasil;
		}
		void lingkaran (){
			cout<<"masukkan jari2 : ";
			cin>>a;
			hasil=3.14*a*a;
			cout<<hasil;
		}
		void segitiga (){
			cout<<"masukkan alas : ";
			cin>>a;
			cout<<"masukkan tinggi : ";
			cin>>b;
			hasil=a*b/2;
			cout<<hasil;
		}
		void tampil (){
			int pilih;
			cout<<"1. luas persegi ";
			cout<<"2. luas persegi panjang ";
			cout<<"3. luas lingkaran ";
			cout<<"4. luas segitiga ";
			cin>>pil;
			
			if (pilih==1){
				persegi();
			}
			if (pilih==2){
				persegipjg();
			}
			if (pilih==3){
				lingkaran();
			}
			if (pilih==4){
				segitiga();
			}
		}

};
class volum {
	public :
		float a,b,c,hasil;
		//float p=3.14;
		int pilih;
	public :
		void kubus () {
			cout<<"masukkan sisi : ";
			cin>>a;
			hasil=a*a*a;
			cout<<hasil;
		}
		void balok () {
			cout<<"masukkan panjang : ";
			cin>>a;
			cout<<"masukkan lebar : ";
			cin>>b;
			cout<<"masukkan tinggi : ";
			cin>>c;
			hasil=a*b*c;
			cout<<hasil;
		}
		void tabung (){
			cout<<"masukkan jari2 :";
			cin>>a;
			cout<<"masukkan tinggi :";
			cin>>b;
			hasil=3.14*a*a*b;
			cout<<hasil;
		}
		void tampil (){
			cout<<"1. volum kubus ";
			cout<<"2. volum balok ";
			cout<<"3. luas tabung ";
			cin>>pilih;
			
			if (pilih==1){
				kubus ();
			}
			if (pilih==2){
				balok ();
			}
			if (pilih==3){
				tabung ();
			}
		}
};
class menu {
	public :
		luas2d a;
		volum c;
		int pilihan;
		
	public :
		
		void menu1 (){
			cout<<"1. luas 2d ";
			cout<<"2. luas 3d ";
			cin>>pilihan;
			
			if (pilihan==1){
				a.tampil();
			}
			if (pilihan==2){
				c.tampil();
			}
		}
};
int main(int argc, char *argv[])
{
	menu t;
	
	t.menu1();
	system("pause");
	return 0;
}
