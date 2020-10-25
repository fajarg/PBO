#include <iostream>
#include <conio.h>
using namespace std;

float penjumlahan (float a, float b){
	float hasil;
	hasil = a+b;
	return hasil;
};

float perkalian (float c, float d){
	float hasil;
	hasil = c*d;
	return hasil;
};

float pembagian (float e, float f){
	float hasil;
	hasil = e/f;
	return hasil;
};

float pengurangan (float g, float h){
	float hasil;
	hasil = g-h;
	return hasil;
};

int main(){
	int menu;
	float a,b,c,d,e,f,g,h;
	menu:
	cout << "====================================================="<<endl;
	cout << " KALKULATORKU "<<endl;
	cout << "1. Penjumlahan"<<endl;
	cout << "2. Perkalian"<<endl;
	cout << "3. Pengurangan"<<endl;
	cout << "4. Pembagian"<<endl;
	cout << "====================================================="<<endl;
	cout << "Pilihanmu : ";
	cin >> menu;
	cout << "====================================================="<<endl;
		if (menu==1){
	cout << "PENJUMLAHAN"<<endl;
	cout << "a : ";
	cin >>  a;
	cout << endl;
	cout << "b : ";
	cin >> b;
	cout << endl;
	cout << penjumlahan(a,b);
	getch();
	system("cls");
	goto menu;
}
	if (menu==2){
		cout << "PERKALIAN"<<endl;
		cout << "a : ";
		cin >> c;
		cout << endl;
		cout << " b : ";
		cin >> d;	
		cout <<	endl;
		cout << perkalian(c,d);
		getch();
		system("cls");
		goto menu;
	}
	if (menu==3){
		cout << "PENGURANGAN" <<endl;
		cout << "a : ";
		cin >> g;
		cout << endl;
		cout << "b : ";
		cin >> h;
		cout << endl;
		cout << pengurangan (g,h);
		getch();
		system("cls");
		goto menu;
	}
	if (menu==4){
		cout << "PEMBAGIAN"<<endl;
		cout << "a : ";
		cin >> e;
		cout << endl;
		cout << "b : ";
		cin >> f;
		while (f==0){
			cout << "Bilangan Kedua Tidak Boleh 0"<<endl;
			cout << "Masukkan Ulangan Bilangan b "<< endl;
			cout << " b : ";
			cin >> f;
		}
		cout << endl;
		cout << pembagian(e,f);	
		getch();
		system("cls");
		goto menu;
	}
	else{
		cout << "ERROR!";
		getch();
		system("cls");
		goto menu;
	}
	return 0;
}
