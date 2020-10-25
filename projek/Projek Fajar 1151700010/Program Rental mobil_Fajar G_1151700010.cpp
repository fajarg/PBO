#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

int kia=5, ayla=5, agya=5, jazz=5, avanza=5, xenia=5, ertiga=5, innova=5;
int elf=3, travello=3, hiace=3;
long int pemasukan = 0;

class rental_mobil {	
	protected :
		string nam ;
		string alm;
		string no;
		
};
class peminjam : public rental_mobil{
	public :
		
		void nama (){
			cout<<"masukkan nama peminjam \t: ";
		    cin>>nam;
		}
		void alamat (){
			cout<<"masukkan alamat \t: ";
			cin>>alm;
		}
		void no_telp (){
			cout<<"masukkan no_telp \t: ";
			cin>>no;
		}
		void tampil_peminjam (){
			cout<<"nama peminjam  \t\t: "<<nam <<endl;
			cout<<"alamat peminjam  \t: "<<alm<<endl;
			cout<<"no telpon peminjam \t: "<<no<<endl;
		}
		
};

class mobil_kecil : public rental_mobil {
	public :
		void Kia_picanto (string k, int kp){
			cout<<"-------informasi tentang mobil------"<<endl<<endl;
			cout<<"nama mobil : "<< k <<endl;
			cout<<"harga sewa : Rp "<< kp <<"/hari"<<endl;
		}
		void Ayla (string a, int ay){
			cout<<"-------informasi tentang mobil------"<<endl<<endl;
			cout<<"nama mobil : "<< a <<endl;
			cout<<"harga sewa : Rp "<<ay<<"/hari"<<endl;
		}
		void Agya (string ag, int agy){
			cout<<"-------informasi tentang mobil------"<<endl<<endl;
			cout<<"nama mobil : "<< ag <<endl;
			cout<<"harga sewa : Rp "<< agy <<"/hari"<<endl;
		}
		void jazz (string j, int ja){
			cout<<"-------informasi tentang mobil------"<<endl<<endl;
			cout<<"nama mobil : "<< j <<endl;
			cout<<"harga sewa : Rp "<< ja <<"/hari"<<endl;
		}
		void avanza (string av, int ava){
			cout<<"-------informasi tentang mobil------"<<endl<<endl;
			cout<<"nama mobil : "<< av <<endl;
			cout<<"harga sewa : Rp "<< ava <<"/hari"<<endl;
		}
		void xenia (string x, int xe){
			cout<<"-------informasi tentang mobil------"<<endl<<endl;
			cout<<"nama mobil : "<< x <<endl;
			cout<<"harga sewa : Rp "<< xe <<"/hari"<<endl; 
		}
		void ertiga (string e, int er){
			cout<<"-------informasi tentang mobil------"<<endl<<endl;
			cout<<"nama mobil : "<< e <<endl;
			cout<<"harga sewa : Rp "<< er <<"/hari"<<endl;
		}
		void innova (string i, int in){
			cout<<"-------informasi tentang mobil------"<<endl<<endl;
			cout<<"nama mobil : "<< i <<endl;
			cout<<"harga sewa : Rp "<< in <<"/hari"<<endl;
		}
};
class mobil_besar : public rental_mobil {
	public :
		void elf (string el, int elff){
			cout<<"-------informasi tentang mobil------"<<endl<<endl;
			cout<<"nama mobil : "<< el <<endl;
			cout<<"harga sewa : Rp "<< elff <<"/hari"<<endl;
		}
		void kia_travello (string kt, int ktr){
			cout<<"-------informasi tentang mobil------"<<endl<<endl;
			cout<<"nama mobil : "<< kt <<endl;
			cout<<"harga sewa : Rp "<< ktr <<"/hari"<<endl;
		}
		void hiace (string h, int hi){
			cout<<"-------informasi tentang mobil------"<<endl<<endl;
			cout<<"nama mobil : "<< h <<endl;
			cout<<"harga sewa : Rp "<< hi <<"/hari"<<endl;
		}
};
class info_mobil : public rental_mobil {
	int pilihan;
	int pil_kembali;
	public :
		
		mobil_kecil a;
		mobil_besar b;
		
		void mobil_biasa (){
			cout<<"----------mobil biasa-----------"<<endl<<endl;
			cout<<"1. KIA picanto"<<endl;
			cout<<"2. Ayla"<<endl;
			cout<<"3. Agya"<<endl;
			cout<<"4. Honda Jazz"<<endl;
			cout<<"5. Avanza"<<endl;
			cout<<"6. Xenia"<<endl;
			cout<<"7. Ertiga"<<endl;
			cout<<"8. Innova"<<endl;
			cout<<"masukkan pilihan anda : ";
			cin>>pilihan;
			switch (pilihan)
			{
				case 1 :
					{
						system ("cls");
						a.Kia_picanto("KIA Picanto",390000);
						break;
						
					}
				case 2 :
					{
						system ("cls");
						a.Ayla("Ayla",390000);
						break;
					}
				case 3 :
					{
						system ("cls");
						a.Agya("Agya",390000);	
						break;
					}
				case 4 :
					{
						system ("cls");
						a.jazz("Honda Jazz",500000);
						break;
					}
				case 5 :
					{
						system ("cls");
						a.avanza("Avanza",450000);
						break;
					}
				case 6 :
					{
						system ("cls");
						a.xenia("Xenia",450000);
						break;
					}
				case 7 :
					{
						system ("cls");
						a.ertiga("Ertiga",450000);
						break;
					}
				case 8 :
					{
						system ("cls");
						a.innova("Innova",650000);
						break;
					}
				default :
					{
						system ("cls");
						cout<<"menu pilihan tidak ada"<<endl<<endl;
						break;
					}
			}
		}
		
		void minibus (){
			cout<<"-------------minibus--------------"<<endl<<endl;
			cout<<"1. Isuzu Elf"<<endl;
			cout<<"2. KIA Travello"<<endl;
			cout<<"3. Toyota Hiace"<<endl;
			cout<<"masukkan pilihan anda : ";
			cin>>pilihan;
			switch (pilihan){
				case 1 :{
					system ("cls");
					b.elf("Isuzu Elf", 1000000);
					break;
				}
				case 2 :{
					system ("cls");
					b.kia_travello("KIA Travello", 700000);
					break;
				}
				case 3 :{
					system ("cls");
					b.hiace("Toyota Hiace", 1000000);
					break;
				}
				default :{
					system ("cls");
					cout<<"menu pilihan tidak ada"<<endl<<endl;
					break;
				}
			}
		}
				
		void tampil_mobil (){
			cout<<"-------informasi tentang mobil------"<<endl<<endl;
			cout<<"1. mobil biasa "<<endl;
			cout<<"2. minibus (kapasitas banyak)"<<endl;
			cout<<"masukkan plihan anda : ";
			cin>>pilihan;
			switch (pilihan){
				case 1 :{
					system ("cls");
					mobil_biasa ();
					break;
				}
				case 2 :{
					system ("cls");
					minibus ();
					break;
				}
				default :{
					cout<<"menu pilihan tidak ada"<<endl<<endl;
					break;
				}
			}
			
		}
};
class pinjam_mobil : public rental_mobil {
	int pil;
	int pil2, pil3, hari, biaya_sewa;
	public :
		peminjam customer;
		
		void daftar (){
			cout<<"------------Menu Pinjam Mobil-----------"<<endl<<endl;
			customer.nama();
			customer.alamat();
			customer.no_telp();
			cout<<endl;
			cout<<"1. Mobil biasa"<<endl;
			cout<<"2. minibus (kapasitas banyak)"<<endl;
			cout<<"masukkan pilihan anda : ";
			cin>>pil;
			switch (pil){
				case 1 :{
					system ("cls");
					cout<<"------------Mobil Biasa-----------"<<endl<<endl;
					cout<<"1. KIA picanto"<<endl;
					cout<<"2. Ayla"<<endl;
					cout<<"3. Agya"<<endl;
					cout<<"4. Honda Jazz"<<endl;
					cout<<"5. Avanza"<<endl;
					cout<<"6. Xenia"<<endl;
					cout<<"7. Ertiga"<<endl;
					cout<<"8. Innova"<<endl;
					cout<<"masukkan pilihan anda : ";
					cin>>pil2;
					switch (pil2){
						case 1 :{
						
							if (kia <=0){
								cout<<"stok mobil ini telah habis"<<endl;
							}
							else{
								cout<<endl;
								customer.tampil_peminjam();
								cout<<endl;
								cout<<"pelangggan akan meminjam mobil picanto"<<endl;
								cout<<"biaya sewa : Rp 390.000/hari"<<endl;
								cout<<"sudah termasuk biaya bensin dan supir"<<endl<<endl;
								cout<<"berapa hari mobil akan disewa ? ";
								cin>>hari;
								biaya_sewa=390000*hari;
								cout<<endl;
								cout<<"total biaya sewa = "<<biaya_sewa;
								kia=kia-1;
								pemasukan=pemasukan+biaya_sewa;
							}
							break;
						}
						case 2 :{
						
							if (ayla <=0){
								cout<<"stok mobil ini telah habis"<<endl;
							}
							else{
								cout<<endl;
								customer.tampil_peminjam();
								cout<<endl;
								cout<<"pelangggan akan meminjam mobil ayla"<<endl;
								cout<<"biaya sewa : Rp 390.000/hari"<<endl;
								cout<<"sudah termasuk biaya bensin dan supir"<<endl<<endl;
								cout<<"berapa hari mobil akan disewa ? ";
								cin>>hari;
								biaya_sewa=390000*hari;
								cout<<endl;
								cout<<"total biaya sewa = "<<biaya_sewa;
								ayla=ayla-1;
								pemasukan=pemasukan+biaya_sewa;
							}
							
							break;
						}
						case 3 :{
							if (agya <=0){
								cout<<"stok mobil ini telah habis"<<endl;
							}
							else{
								cout<<endl;
								customer.tampil_peminjam();
								cout<<endl;
								cout<<"pelangggan akan meminjam mobil agya"<<endl;
								cout<<"biaya sewa : Rp 390.000/hari"<<endl;
								cout<<"sudah termasuk biaya bensin dan supir"<<endl<<endl;
								cout<<"berapa hari mobil akan disewa ? ";
								cin>>hari;
								biaya_sewa=390000*hari;
								cout<<endl;
								cout<<"total biaya sewa = "<<biaya_sewa;
								agya=agya-1;
								pemasukan=pemasukan+biaya_sewa;
							}
							break;
						}
						case 4 :{
							if (jazz<=0){
								cout<<"stok mobil ini telah habis"<<endl;
							}
							else {
								cout<<endl;
								customer.tampil_peminjam();
								cout<<endl;
								cout<<"pelangggan akan meminjam mobil honda jazz"<<endl;
								cout<<"biaya sewa : Rp 500.000/hari"<<endl;
								cout<<"sudah termasuk biaya bensin dan supir"<<endl<<endl;
								cout<<"berapa hari mobil akan disewa ? ";
								cin>>hari;
								biaya_sewa=500000*hari;
								cout<<endl;
								cout<<"total biaya sewa = "<<biaya_sewa;
								jazz=jazz-1;
								pemasukan=pemasukan+biaya_sewa;
							}
							break;
						}
						case 5 :{
							if (avanza<=0){
								cout<<"stok mobil ini telah habis"<<endl;
							}
							else {
								cout<<endl;
								customer.tampil_peminjam();
								cout<<endl;
								cout<<"pelangggan akan meminjam mobil avanza"<<endl;
								cout<<"biaya sewa : Rp 450.000/hari"<<endl;
								cout<<"sudah termasuk biaya bensin dan supir"<<endl<<endl;
								cout<<"berapa hari mobil akan disewa ? ";
								cin>>hari;
								biaya_sewa=450000*hari;
								cout<<endl;
								cout<<"total biaya sewa = "<<biaya_sewa;
								avanza=avanza-1;
								pemasukan=pemasukan+biaya_sewa;
							}
							break;
						}
						case 6 :{
							if (xenia<=0){
								cout<<"stok mobil ini telah habis"<<endl;
							}
							else {
								cout<<endl;
								customer.tampil_peminjam();
								cout<<endl;
								cout<<"pelangggan akan meminjam mobil xenia"<<endl;
								cout<<"biaya sewa : Rp 450.000/hari"<<endl;
								cout<<"sudah termasuk biaya bensin dan supir"<<endl<<endl;
								cout<<"berapa hari mobil akan disewa ? ";
								cin>>hari;
								biaya_sewa=450000*hari;
								cout<<endl;
								cout<<"total biaya sewa = "<<biaya_sewa;
								xenia=xenia-1;
								pemasukan=pemasukan+biaya_sewa;
							}
							break;
						}
						case 7 :{
							if (ertiga<=0){
								cout<<"stok mobil ini telah habis"<<endl;
							}
							else {
								cout<<endl;
								customer.tampil_peminjam();
								cout<<endl;
								cout<<"pelangggan akan meminjam mobil ertiga"<<endl;
								cout<<"biaya sewa : Rp 450.000/hari"<<endl;
								cout<<"sudah termasuk biaya bensin dan supir"<<endl<<endl;
								cout<<"berapa hari mobil akan disewa ? ";
								cin>>hari;
								biaya_sewa=450000*hari;
								cout<<endl;
								cout<<"total biaya sewa = "<<biaya_sewa;
								ertiga=ertiga-1;
								pemasukan=pemasukan+biaya_sewa;
							}
							break;
						}
						case 8 :{
							if (innova<=0){
								cout<<"stok mobil ini telah habis"<<endl;
							}
							else {
								cout<<endl;
								customer.tampil_peminjam();
								cout<<endl;
								cout<<"pelangggan akan meminjam mobil innova"<<endl;
								cout<<"biaya sewa : Rp 650.000/hari"<<endl;
								cout<<"sudah termasuk biaya bensin dan supir"<<endl<<endl;
								cout<<"berapa hari mobil akan disewa ? ";
								cin>>hari;
								biaya_sewa=650000*hari;
								cout<<endl;
								cout<<"total biaya sewa = "<<biaya_sewa;
								innova=innova-1;
								pemasukan=pemasukan+biaya_sewa;
							}
							break;
						}
						default :{
							cout<<"menu pilihan tidak ada"<<endl<<endl;
							break;
						}
					}
					break;
				}
				case 2 :{
					cout<<"1. Isuzu Elf"<<endl;
					cout<<"2. KIA Travello"<<endl;
					cout<<"3. Toyota Hiace"<<endl;
					cout<<"masukkan pilihan anda : ";
					cin>>pil3;
					switch (pil3){
						case 1 :{
							if (elf<=0){
								cout<<"stok mobil ini telah habis"<<endl;
							}
							else {
								cout<<endl;
								customer.tampil_peminjam();
								cout<<endl;
								cout<<"pelangggan akan meminjam mobil isuzu elf"<<endl;
								cout<<"biaya sewa : Rp 1.000.000/hari"<<endl;
								cout<<"sudah termasuk biaya bensin dan supir"<<endl<<endl;
								cout<<"berapa hari mobil akan disewa ? ";
								cin>>hari;
								biaya_sewa=1000000*hari;
								cout<<endl;
								cout<<"total biaya sewa = "<<biaya_sewa;
								elf=elf-1;
								pemasukan=pemasukan+biaya_sewa;
							}
							break;
						}
						case 2 :{
							if (travello<=0){
								cout<<"stok mobil ini telah habis"<<endl;
							}
							else {
								cout<<endl;
								customer.tampil_peminjam();
								cout<<endl;
								cout<<"pelangggan akan meminjam mobil Travello"<<endl;
								cout<<"biaya sewa : Rp 700.000/hari"<<endl;
								cout<<"sudah termasuk biaya bensin dan supir"<<endl<<endl;
								cout<<"berapa hari mobil akan disewa ? ";
								cin>>hari;
								biaya_sewa=700000*hari;
								cout<<endl;
								cout<<"total biaya sewa = "<<biaya_sewa;
								travello=travello-1;
								pemasukan=pemasukan+biaya_sewa;
							}
							break;
						}
						case 3 :{
							if (hiace<=0){
								cout<<"stok mobil ini telah habis"<<endl;
							}
							else {
								cout<<endl;
								customer.tampil_peminjam();
								cout<<endl;
								cout<<"pelangggan akan meminjam mobil hiace"<<endl;
								cout<<"biaya sewa : Rp 1.000.000/hari"<<endl;
								cout<<"sudah termasuk biaya bensin dan supir"<<endl<<endl;
								cout<<"berapa hari mobil akan disewa ? ";
								cin>>hari;
								biaya_sewa=1000000*hari;
								cout<<endl;
								cout<<"total biaya sewa = "<<biaya_sewa;
								hiace=hiace-1;
								pemasukan=pemasukan+biaya_sewa;
							}
							break;
						}
						default :{
							cout<<"menu pilihan tidak ada"<<endl<<endl;
							break;
						}
						
					}
					break;
				}
				default :{
					cout<<"menu pilihan tidak ada"<<endl<<endl;
					break;
				}
			}
		
		}
};
class stock : public rental_mobil {
	public :

		void stock_mobil (){
			cout<<"----------Informasi ketersediaan mobil---------"<<endl;
			cout<<"==============================================="<<endl<<endl;
			cout<<"--------mobil biasa--------"<<endl<<endl;
			cout<<"1. KIA picanto\t: "<<kia<<endl;
			cout<<"2. Ayla \t: "<<ayla<<endl;
			cout<<"3. Agya \t: "<<agya<<endl;
			cout<<"4. Honda Jazz\t: "<<jazz<<endl;
			cout<<"5. Avanza \t: "<<avanza<<endl;
			cout<<"6. Xenia \t: "<<xenia<<endl;
			cout<<"7. Ertiga \t: "<<ertiga<<endl;
			cout<<"8. Innova \t: "<<innova<<endl<<endl;
			cout<<"----------minibus------------"<<endl<<endl;
			cout<<"1. Isuzu Elf \t: "<<elf<<endl;
			cout<<"2. KIA Travello\t: "<<travello<<endl;
			cout<<"3. Toyota Hiace\t: "<<hiace<<endl;
		}
};
class pendapatan : public rental_mobil {
	public :
		void tampil_pendapatan (){
			cout<<"----------------Total pemasukan----------------"<<endl;
			cout<<"==============================================="<<endl<<endl;
			cout<<"pendapatan masuk : Rp "<<pemasukan;
		}
};
class menu_utama : public rental_mobil {
	public :
		int pil_kembali;
		int pil_menu;
		pinjam_mobil a;
		info_mobil b;
		stock c;
		pendapatan d;
	
		
		
		menu_utama (){
			cout<<"======================================"<<endl;
			cout<<"-------------Rental Mobil-------------"<<endl;
			cout<<"======================================"<<endl<<endl;
		}
		void tampil_menu_utama (){
			
			cout<<"1. Pinjam mobil "<<endl;
			cout<<"2. Informasi mobil "<<endl;
			cout<<"3. Informasi stok mobil "<<endl;
			cout<<"4. Total pemasukan"<<endl;
			cout<<"5. keluar "<<endl;
			cout<<"masukkan pilihan anda : ";
			cin>>pil_menu;
			switch (pil_menu){
				case 1 :{
					system ("cls");
					a.daftar();
					cout<<endl;
					cout<<"tekan 1 untuk kembali ke menu utama : ";
					cin>>pil_kembali;
					switch (pil_kembali){
						case 1 :{
							system ("cls");
							cout<<"======================================"<<endl;
							cout<<"-------------Rental Mobil-------------"<<endl;
							cout<<"======================================"<<endl<<endl;
							tampil_menu_utama ();
							break;
						}
						default :{
							cout<<"maaf pilihan yang anda masukkan tidak sesuai";
							break;
						}
					}
					break;
				}
				case 2 :{
					system ("cls");
					b.tampil_mobil();
					cout<<endl;
					cout<<"tekan 1 untuk kembali ke menu utama : ";
					cin>>pil_kembali;
					switch (pil_kembali){
						case 1 :{
							system ("cls");
							cout<<"======================================"<<endl;
							cout<<"-------------Rental Mobil-------------"<<endl;
							cout<<"======================================"<<endl<<endl;
							tampil_menu_utama ();
							break;
						}
						default :{
							cout<<"pilihan yang anda masukkan tidak sesuai ";
							break;
						}
					}
					break;
				}	
				case 3 :{
					system ("cls");
					c.stock_mobil();
					cout<<endl;
					cout<<"tekan 1 untuk kembali ke menu utama : ";
					cin>>pil_kembali;
					switch (pil_kembali){
						case 1 :{
							system ("cls");
							cout<<"======================================"<<endl;
							cout<<"-------------Rental Mobil-------------"<<endl;
							cout<<"======================================"<<endl<<endl;
							tampil_menu_utama ();
							break;
						}
						default :{
							cout<<"pilihan yang anda masukkan tidak sesuai ";
							break;
						}
					}
					break;
				}
				case 4 :{
					system ("cls");
					d.tampil_pendapatan();
					cout<<endl;
					cout<<"tekan 1 untuk kembali ke menu utama : ";
					cin>>pil_kembali;
					switch (pil_kembali){
						case 1 :{
							system ("cls");
							cout<<"======================================"<<endl;
							cout<<"-------------Rental Mobil-------------"<<endl;
							cout<<"======================================"<<endl<<endl;
							tampil_menu_utama ();
							break;
						}
						default :{
							cout<<"pilihan yang anda masukkan tidak sesuai ";
							break;
						}
					}
					break;
				}
				case 5 :{
					system ("cls");
					cout<<"tekan enter untuk keluar dari program ";
					break;
				}
				default :{
					cout<<"menu pilihan tidak ada"<<endl<<endl;
					cout<<endl;
					cout<<"tekan 1 untuk kembali ke menu utama : ";
					cin>>pil_kembali;
					switch (pil_kembali){
						case 1 :{
							system ("cls");
							cout<<"======================================"<<endl;
							cout<<"-------------Rental Mobil-------------"<<endl;
							cout<<"======================================"<<endl<<endl;
							tampil_menu_utama ();
							break;
						}
						default :{
							cout<<"pilihan yang anda masukkan tidak sesuai ";
							break;
						}
					}
					break;
				}
				
			}
		}
		~menu_utama (){
			cout<<endl;
			cout<<"terimakasih telah menggunakan program ini ";
		}
};

int main (){
	menu_utama tampil;
	
	tampil.tampil_menu_utama();
	
	return 0;
}
