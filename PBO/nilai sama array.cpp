#include <iostream>
using namespace std;

int main(){
	
int a[5], sama=0, beda=0;

	for (int i=0; i<5; i++){
		cout<<"masukan bilangan \n";
		cin>>a[i];
	}	
	

	for (int j=0; j<5; j++){
		cout<<a[j];
		if (a[j]==a[j+1]){
		sama = sama+1;
		}
		/*if(a[j]!=a[j+1]){
		beda=beda+1;*/
	}
	
	/*cout<<"sama"<<sama<<endl;
	cout<<"beda"<<beda<<endl;*/
	if (sama>0){
		cout<<"true";
	}
	if (sama==0){
		cout<<"false";
	}

return 0;
}
