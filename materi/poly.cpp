#include <iostream>

using namespace std;

class Musuh{
protected: 
	int serangan;
	
public:
	//Setter dan Getter
	
	void setSerangan (int s){
		serangan = s;
	};
	
	int getSerangan(){
		return serangan;
	};
	
	virtual void serang (){
	};


};

class Kurcaci1 : public Musuh {
public:
	void serang(){
		cout << "Kurcaci 1 telah menyerang anda sebesar "<< serangan << " serangan" <<endl;
	};


};

class Kurcaci2 : public Musuh {
public:
	void serang(){
		cout << "Kurcaci 2 telah menyergap anda sebesar "<< serangan << " serangan" <<endl;
	};


};


int main (){
	//inisialisasi objek
	Kurcaci1 k1;
	Kurcaci2 k2;
	
	//Menyimpan alamat musuh dengan pointer
	Musuh *musuh1 = &k1;
	Musuh *musuh2 = &k2;
	
	k1.setSerangan(10);
	k2.setSerangan(20);
	
	//isi nilai serangan
	//musuh1 -> setSerangan(10);
	//musuh2 -> setSerangan(20);
	
	//musuh melakukan serangan
	//k1.serang();
	//k2.serang();
	
	//menggunakan operator virtual musuh bisa menyerang
	musuh1 -> serang();
	musuh2 -> serang();

};