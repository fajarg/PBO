#include <iostream>
using namespace std;

class counter {
	private :
		unsigned int count;
	public :
		counter ():count (0){
		}
		counter (int c):count (c){
		}
		unsigned int get_count (){
			return count;
		}
		counter operator ++(){
			++count;
			return counter(count);
		}
};
int main (){
	counter c1, c2;
	cout<<endl<<"c1 : "<<c1.get_count();
	cout<<endl<<"c2 : "<<c2.get_count();
	++c1;
	++c2;
	++c2;
	cout<<endl<<"=================================";
	cout<<endl<<"c1:"<<c1.get_count();
	cout<<endl<<"c2:"<<c2.get_count();
}







































































































































