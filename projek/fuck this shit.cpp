#include <iostream>
#include <stdio.h>
using namespace std;

int stockmtk=25,stockbind=25,stockbing=25,stocksains=25,stocksos=25;
int stockbuma=25,stockasb=25,stocksangpem=25;
int stockdb=25,stocknar=25,stockop=25;

struct pembeli
{
	char nama[30],alamat[50],nomortelepon[12];
};


pembeli pmb;

class menu
{
	public:
		void input()
		{
			cout<<endl<<"Masukan data pembeli"<<endl;
			cout<<"Masukan nama : ";
			cin>>pmb.nama;
			cout<<"Masukan alamat : ";
			cin>>pmb.alamat;
			cout<<"Masukan nomor telepon : ";
			cin>>pmb.nomortelepon;
			cout<<endl<<endl<<endl;
		}
		void display ()
		{
			cout<<endl<<"Nama : "<<pmb.nama<<endl<<"Alamat : "<<pmb.alamat<<endl<<"Nomor Telepon : "<<pmb.nomortelepon<<endl<<endl;
		}
		void menu_awal()
		{
			pembeli pmb;
			cout<<"SELAMAT DATANG DI BOOKSTORE"<<endl<<endl;
			cout<<"Kategori buku"<<endl;
			cout<<"1. Pelajaran Sekolah"<<endl<<"2. Novel"<<endl<<"3. Komik"<<endl<<"4. Tampilkan data pembeli"<<endl<<"5. Keluar dari program"<<endl<<endl;
			cout<<"Pilih menu (masukan nomor menu): ";
		}
};

class stock_harga : public menu
{
	public:
		int mtk,bind,bing,sains,sos,x;
		int buma,asb,sangpem;
		int db,nar,op;
		int stock_mtk()
		{
			mtk=65000;
			system("cls");
			cout<<endl<<endl<<"Informasi buku :"<<endl;
			cout<<"Judul : Matematika Dasar SMA/SMK sederajat"<<endl<<"Pengarang : GuruSBMPTN"<<endl<<"Penerbit : ForumEdukasi"<<endl<<"Tahun terbit : 2018"<<endl;
			cout<<"Harga buku : Rp.65000"<<endl;
			cout<<"Stock buku untuk saat ini : "<<stockmtk<<endl<<endl;
			cout<<"Masukan stock buku yang akan anda beli : ";
			cin>>x;
			if(stockmtk<=0 || x>stockmtk)
			{
				cout<<"Maaf stock buku untuk saat ini habis atau tidak cukup"<<endl;
			}
			else
			{
				stockmtk=stockmtk-x;
				mtk=mtk*x;
				cout<<"Total harga : Rp."<<mtk<<endl;
				cout<<"Stock buku untuk saat ini : "<<stockmtk;
				cout<<endl<<"Terima kasih sudah membeli. Buku akan dikirim segera ke alamat anda"<<endl<<endl<<endl;
			}
			return stockmtk;
		}
		int stock_bind()
		{
			bind=80000;
			system("cls");
			cout<<endl<<endl<<"Informasi buku :"<<endl;
			cout<<"Judul : Bahasa Indonesia SMA/SMK sederajat"<<endl<<"Pengarang : GuruSBMPTN"<<endl<<"Penerbit : ForumEdukasi"<<endl<<"Tahun terbit : 2018"<<endl;
			cout<<"Harga buku : Rp.80000"<<endl;
			cout<<"Stock buku untuk saat ini : "<<stockbind<<endl<<endl;
			cout<<"Masukan stock buku yang akan anda beli : ";
			cin>>x;
			if(stockbind<=0 || x>stockbind)
			{
				cout<<"Maaf stock buku untuk saat ini habis atau tidak cukup"<<endl;
			}
			else
			{
				stockbind=stockbind-x;
				bind=bind*x;
				cout<<"Total harga : Rp."<<bind<<endl;
				cout<<"Stock buku untuk saat ini : "<<stockbind;
				cout<<endl<<"Terima kasih sudah membeli. Buku akan dikirim segera ke alamat anda"<<endl<<endl<<endl;
			}
			return stockbind;
		}
		int stock_bing()
		{
			bing=70000;
			system("cls");
			cout<<endl<<endl<<"Informasi buku :"<<endl;
			cout<<"Judul : 3. Bahasa Inggris SMA/SMK sederajat"<<endl<<"Pengarang : GuruSBMPTN"<<endl<<"Penerbit : ForumEdukasi"<<endl<<"Tahun terbit : 2018"<<endl;
			cout<<"Harga buku : Rp.70000"<<endl;
			cout<<"Stock buku untuk saat ini : "<<stockbing<<endl<<endl;
			cout<<"Masukan stock buku yang akan anda beli : ";
			cin>>x;
			if(stockbing<=0 || x>stockbing)
			{
				cout<<"Maaf stock buku untuk saat ini habis atau tidak cukup"<<endl;
			}
			else
			{
				stockbing=stockbing-x;
				bing=bing*x;
				cout<<"Total harga : Rp."<<bing<<endl;
				cout<<"Stock buku untuk saat ini : "<<stockbing;
				cout<<endl<<"Terima kasih sudah membeli. Buku akan dikirim segera ke alamat anda"<<endl<<endl<<endl;
			}
			return stockbing;
		}
		int stock_sains()
		{
			sains=70000;
			system("cls");
			cout<<endl<<endl<<"Informasi buku :"<<endl;
			cout<<"Judul : SBMPTN Saintek"<<endl<<"Pengarang : GuruSBMPTN"<<endl<<"Penerbit : ForumEdukasi"<<endl<<"Tahun terbit : 2018"<<endl;
			cout<<"Harga buku : Rp.70000"<<endl;
			cout<<"Stock buku untuk saat ini : "<<stocksains<<endl<<endl;
			cout<<"Masukan stock buku yang akan anda beli : ";
			cin>>x;
			if(stocksains<=0 || x>stocksains)
			{
				cout<<"Maaf stock buku untuk saat ini habis atau tidak cukup"<<endl;
			}
			else
			{
				stocksains=stocksains-x;
				sains=sains*x;
				cout<<"Total harga : Rp."<<sains<<endl;
				cout<<"Stock buku untuk saat ini : "<<stocksains;
				cout<<endl<<"Terima kasih sudah membeli. Buku akan dikirim segera ke alamat anda"<<endl<<endl<<endl;
			}
			return stocksains;
		}
		int stock_sos()
		{
			sos=75000;
			system("cls");
			cout<<endl<<endl<<"Informasi buku :"<<endl;
			cout<<"Judul : SBMPTN Soshum"<<endl<<"Pengarang : GuruSBMPTN"<<endl<<"Penerbit : ForumEdukasi"<<endl<<"Tahun terbit : 2018"<<endl;
			cout<<"Harga buku : Rp.75000"<<endl;
			cout<<"Stock buku untuk saat ini : "<<stocksos<<endl<<endl;
			cout<<"Masukan stock buku yang akan anda beli : ";
			cin>>x;
			if(stocksos<=0 || x>stocksos)
			{
				cout<<"Maaf stock buku untuk saat ini habis atau tidak cukup"<<endl;
			}
			else
			{
				stocksos=stocksos-x;
				sos=sos*x;
				cout<<"Total harga : Rp."<<sos<<endl;
				cout<<"Stock buku untuk saat ini : "<<stocksos;
				cout<<endl<<"Terima kasih sudah membeli. Buku akan dikirim segera ke alamat anda"<<endl<<endl<<endl;
			}
			return stocksos;
		}
		int stock_buma()
		{
			buma=50000;
			system("cls");
			cout<<endl<<endl<<"Informasi buku :"<<endl;
			cout<<"Judul : Bumi Manusia"<<endl<<"Pengarang : Pramoedya Ananta Toer"<<endl<<"Penerbit : Hasta Mitra"<<endl<<"Tahun terbit : 1980"<<endl;
			cout<<"Harga buku : Rp.50000"<<endl;
			cout<<"Stock buku untuk saat ini : "<<stockbuma<<endl<<endl;
			cout<<"Masukan stock buku yang akan anda beli : ";
			cin>>x;
			if(stockbuma<=0 || x>stockbuma)
			{
				cout<<"Maaf stock buku untuk saat ini habis atau tidak cukup"<<endl;
			}
			else
			{
				stockbuma=stockbuma-x;
				buma=buma*x;
				cout<<"Total harga : Rp."<<buma<<endl;
				cout<<"Stock buku untuk saat ini : "<<stockbuma;
				cout<<endl<<"Terima kasih sudah membeli. Buku akan dikirim segera ke alamat anda"<<endl<<endl<<endl;
			}
			return stockbuma;
		}
		int stock_asb()
		{
			asb=50000;
			system("cls");
			cout<<endl<<endl<<"Informasi buku :"<<endl;
			cout<<"Judul : Anak Semua Bangsa"<<endl<<"Pengarang : Pramoedya Ananta Toer"<<endl<<"Penerbit : Penguin Books"<<endl<<"Tahun terbit : 1980"<<endl;
			cout<<"Harga buku : Rp.50000"<<endl;
			cout<<"Stock buku untuk saat ini : "<<stockasb<<endl<<endl;
			cout<<"Masukan stock buku yang akan anda beli : ";
			cin>>x;
			if(stockasb<=0 || x>stockasb)
			{
				cout<<"Maaf stock buku untuk saat ini habis atau tidak cukup"<<endl;
			}
			else
			{
				stockasb=stockasb-x;
				asb=asb*x;
				cout<<"Total harga : Rp."<<asb<<endl;
				cout<<"Stock buku untuk saat ini : "<<stockasb;
				cout<<endl<<"Terima kasih sudah membeli. Buku akan dikirim segera ke alamat anda"<<endl<<endl<<endl;
			}
			return stockasb;
		}
		int stock_sangpem()
		{
			sangpem=55000;
			system("cls");
			cout<<endl<<endl<<"Informasi buku :"<<endl;
			cout<<"Judul : Sang Pemimpi"<<endl<<"Pengarang : Andrea Hirata"<<endl<<"Penerbit : Bentang Pustaka"<<endl<<"Tahun terbit : 2006"<<endl;
			cout<<"Harga buku : Rp.55000"<<endl;
			cout<<"Stock buku untuk saat ini : "<<stocksangpem<<endl<<endl;
			cout<<"Masukan stock buku yang akan anda beli : ";
			cin>>x;
			if(stocksangpem<=0 || x>stocksangpem)
			{
				cout<<"Maaf stock buku untuk saat ini habis atau tidak cukup"<<endl;
			}
			else
			{
				stocksangpem=stocksangpem-x;
				sangpem=sangpem*x;
				cout<<"Total harga : Rp."<<sangpem<<endl;
				cout<<"Stock buku untuk saat ini : "<<stocksangpem;
				cout<<endl<<"Terima kasih sudah membeli. Buku akan dikirim segera ke alamat anda"<<endl<<endl<<endl;
			}
			return stocksangpem;
		}
		int stock_db()
		{
			db=35000;
			system("cls");
			cout<<endl<<endl<<"Informasi buku :"<<endl;
			cout<<"Judul : Dragon Ball"<<endl<<"Pengarang : Akira Toriyama"<<endl<<"Penerbit : Elex Media Komputindo"<<endl<<"Tahun terbit : 2000"<<endl;
			cout<<"Harga buku : Rp.35000"<<endl;
			cout<<"Stock buku untuk saat ini : "<<stockdb<<endl<<endl;
			cout<<"Masukan stock buku yang akan anda beli : ";
			cin>>x;
			if(stockdb<=0 || x>stockdb)
			{
				cout<<"Maaf stock buku untuk saat ini habis atau tidak cukup"<<endl;
			}
			else
			{
				stockdb=stockdb-x;
				db=db*x;
				cout<<"Total harga : Rp."<<db<<endl;
				cout<<"Stock buku untuk saat ini : "<<stockdb;
				cout<<endl<<"Terima kasih sudah membeli. Buku akan dikirim segera ke alamat anda"<<endl<<endl<<endl;
			}
			return stockdb;
		}
		int stock_nar()
		{
			nar=35000;
			system("cls");
			cout<<endl<<endl<<"Informasi buku :"<<endl;
			cout<<"Judul : Naruto"<<endl<<"Pengarang : Masashi Kishimoto"<<endl<<"Penerbit : Elex Media Komputindo"<<endl<<"Tahun terbit : 2007"<<endl;
			cout<<"Harga buku : Rp.35000"<<endl;
			cout<<"Stock buku untuk saat ini : "<<stocknar<<endl<<endl;
			cout<<"Masukan stock buku yang akan anda beli : ";
			cin>>x;
			if(stocknar<=0 || x>stocknar)
			{
				cout<<"Maaf stock buku untuk saat ini habis atau tidak cukup"<<endl;
			}
			else
			{
				stocknar=stocknar-x;
				nar=nar*x;
				cout<<"Total harga : Rp."<<nar<<endl;
				cout<<"Stock buku untuk saat ini : "<<stocknar;
				cout<<endl<<"Terima kasih sudah membeli. Buku akan dikirim segera ke alamat anda"<<endl<<endl<<endl;
			}
			return stocknar;
		}
		int stock_op()
		{
			op=35000;
			system("cls");
			cout<<endl<<endl<<"Informasi buku :"<<endl;
			cout<<"Judul : One Piece"<<endl<<"Pengarang : Eiichiro Oda"<<endl<<"Penerbit : Elex Media Komputindo"<<endl<<"Tahun terbit : 2000"<<endl;
			cout<<"Harga buku : Rp.35000"<<endl;
			cout<<"Stock buku untuk saat ini : "<<stockop<<endl<<endl;
			cout<<"Masukan stock buku yang akan anda beli : ";
			cin>>x;
			if(stockop<=0 || x>stockop)
			{
				cout<<"Maaf stock buku untuk saat ini habis atau tidak cukup"<<endl;
			}
			else
			{
				stockop=stockop-x;
				op=op*x;
				cout<<"Total harga : Rp."<<op<<endl;
				cout<<"Stock buku untuk saat ini : "<<stockop;
				cout<<endl<<"Terima kasih sudah membeli. Buku akan dikirim segera ke alamat anda"<<endl<<endl<<endl;
			}
			return stockop;
		}
};

class buku : public stock_harga
{
	public:
		int n;
		int pelajaran_sekolah()
		{
			system("cls");
			cout<<endl<<endl<<endl<<"Judul buku : "<<endl;
			cout<<"1. 'Matematika Dasar SMA/SMK sederajat'"<<endl<<"2. 'Bahasa Indonesia SMA/SMK sederajat'"<<endl<<"3. 'Bahasa Inggris SMA/SMK sederajat'"<<endl<<"4. 'SBMPTN Saintek'"<<endl<<"5. 'SBMPTN Soshum'"<<endl<<"6. Kembali ke menu awal"<<endl;
			cout<<"Pilih judul buku yang akan dibeli : ";
		}
		int novel()
		{
			system("cls");
			cout<<endl<<endl<<endl<<"Judul buku : "<<endl;
			cout<<"1. 'Bumi Manusia'"<<endl<<"2. 'Anak Semua Bangsa'"<<endl<<"3. 'Sang Pemimpi'"<<endl<<"4. Kembali ke menu awal"<<endl;
			cout<<"Pilih judul buku yang akan dibeli : ";
		}
		int komik()
		{
			cout<<endl<<endl<<endl<<"Judul buku : "<<endl;
			cout<<"1. 'Dragon Ball'"<<endl<<"2. 'Naruto'"<<endl<<"3. 'One Piece'"<<endl<<"4. Kembali ke menu awal"<<endl;
			cout<<"Pilih judul buku yang akan dibeli : ";
		}
};


class menu_judul : public buku
{
	public:
		void pilih_buku_ps()
		{
			cin>>n;
			menu c;
			buku b;
			stock_harga a;
			switch (n)
			{
				case 1:
					{
						a.stock_mtk();
						break;
					}
				case 2:
					{
						a.stock_bind();
						break;
					}
				case 3:
					{
						a.stock_bing();
						break;
					}
				case 4:
					{
						a.stock_sains();
						break;
					}
				case 5:
					{
						a.stock_sos();
						break;
					}
				case 6:
					{
						system("cls");
						break;
					}
				default:
					{
						cout<<"Menu pilihan tidak ada, pilih ulang"<<endl<<endl;
					}
			}
		}
		void pilih_buku_nv()
		{
			cin>>n;
			menu c;
			buku b;
			stock_harga a;
			switch (n)
			{
				case 1:
					{
						a.stock_buma();
						break;
					}
				case 2:
					{
						a.stock_asb();
						break;
					}
				case 3:
					{
						a.stock_sangpem();
						break;
					}
				case 4:
					{
						system("cls");
						break;
					}
				default:
					{
						cout<<"Menu pilihan tidak ada, pilih ulang"<<endl<<endl;
					}
			}
		}
		void pilih_buku_km()
		{
			cin>>n;
			menu c;
			buku b;
			stock_harga a;
			switch (n)
			{
				case 1:
					{
						a.stock_db();
						break;
					}
				case 2:
					{
						a.stock_nar();
						break;
					}
				case 3:
					{
						a.stock_op();
						break;
					}
				case 4:
					{
						system("cls");
						break;
					}
				default:
					{
						cout<<"Menu pilihan tidak ada, pilih ulang"<<endl<<endl;
					}
			}
		}
};

class menu_kategori : public menu
{
	public:
		int n;
		void pilih_kategori()
			{
				cin>>n;
				switch (n)
				{
					case 1:
						{
							menu a;
							system("cls");
							menu_judul b;
							buku ps;
							ps.pelajaran_sekolah();
							b.pilih_buku_ps();
							a.menu_awal();
							pilih_kategori();
							system("cls");
							break;
						}
					case 2:
						{
							menu a;
							system("cls");
							menu_judul b;
							buku nv;
							nv.novel();
							b.pilih_buku_nv();
							a.menu_awal();
							pilih_kategori();
							system("cls");
							break;
						}
					case 3:
						{
							menu a;
							system("cls");
							menu_judul b;
							buku km;
							km.komik();
							b.pilih_buku_km();
							a.menu_awal();
							pilih_kategori();
							system("cls");
							break;
						}
					case 4:
						{
							system("cls");
							menu a;
							a.display();
							cout<<endl<<endl<<endl;
							a.menu_awal();
							pilih_kategori();
							system("cls");
							break;
						}
					case 5:
						{
							system("cls");
							cout<<"Program Selesai";
							break;
						}
					default :
						{
							cout<<"Menu pilihan tidak ada, pilih ulang"<<endl<<endl;
							menu a;
							a.menu_awal();
							pilih_kategori();
							break;
						}
				}
			}
};

int main()
{
	
	menu a;
	a.input();
	system("cls");
	a.display();
	a.menu_awal();
	menu_kategori b;
	b.pilih_kategori();
}
