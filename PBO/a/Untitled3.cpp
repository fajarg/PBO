#include <iostream>
using namespace std;

int main (){
	struct name {
		char last [15];
		char middle [15];
		char first [15];
	};
	typedef struct {
		char title [35];
		struct name author;
		float cost;
		int pages;
	}book;
	book algorithm;
	
	string t = "algorithm";
	string l = "knuth";
	string f = "donald";
	
	algorithm.title [ t.copy(algorithm.title, string::npos) ] = 0;
	algorithm.author.last [ l.copy(algorithm.author.last, string::npos) ] = 0;
	algorithm.author.first [f.copy(algorithm.author.first, string::npos) ] = 0;
	
	algorithm.cost = 201;
	algorithm.pages = 943;
	
	cout << algorithm.title; cout << "\n";
	cout << algorithm.author.first; cout << "\n";
	cout << algorithm.author.last; cout << "\n";
	cout << algorithm.cost; cout << "\n";
	cout << algorithm.pages; cout << "\n";
	
return 0;
}
