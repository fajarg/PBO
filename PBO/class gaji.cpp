#include <cstdlib>
#include <iostream>

using namespace std;
class gaji {
	public :
		int nominal;
		
	public :
		void entry_pendapatan (){
			cout<<"masukkan nominal ";
			cin>>nominal;
		
		}
		void display_pendapatan (){
			cout<<"nominal : ";
			cout<<nominal;
		}
};

class gaji_pokok : public gaji{
	public :
		int gpokok;
	public :
		void entry_gpokok (){
			cout<<"masukkan gaji pokok ";
			cin>>gpokok;
		}
		void display_gpokok (){
			cout<<"gaji pokok : ";
			cout<<gpokok; 
		}
	
};

class tunjangan : public gaji{
	public :
		int tunjangan;
	public :
		void entry_tjgn (){
			cout<<"masukkan tunjangan ";
			cin>>tunjangan;
		}
			void display_tjgn (){
			cout<<"tunjangan : ";
			cout<<tunjangan; 
		}
	
};

class transport : public gaji{
	public :
		int transport;
	public :
		void entry_transport (){
			cout<<"masukkan uang tunjangan transport : ";
			cin>>transport;
		}
			void display_transport (){
			cout<<"tunjangan transport : ";
			cout<<transport; 
		}
	
	
};



int main(int argc, char *argv[])
{
	gaji w;
	w.entry_pendapatan ();
	w.display_pendapatan ();
	cout<<endl;
	
	transport t;
	t.entry_transport();
	t.display_transport();	 
   	cout<<endl;
   	
   	tunjangan a;
   	a.entry_tjgn ();
   	a.display_tjgn ();
   	cout<<endl;
   	
   	gaji_pokok b;
   	b.entry_gpokok ();
   	b.display_gpokok  ();
   
   

}
