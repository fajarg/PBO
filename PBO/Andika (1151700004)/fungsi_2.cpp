#include<iostream>
using namespace std;
float jum(float a,float b);
float kal(float a,float b);
float kur(float a,float b);
float bag(float a,float b);
main()
{
	float a, b;
	int n;
	cout << "\tMenu\n";
	cout << "===========================\n";
	cout << "1)\tTambah\n";
	cout << "2)\tKurang\n";
	cout << "3)\tKali\n";
	cout << "4)\tBagi\n";
	cout << "===========================\n";
	cout << "Masukkan pilihan\t: ";
	cin >> n;
	switch(n)
	{
		case 1 :
			{
				cout << "Input a\t:";
				cin >> a;	
				cout << "Input b\t:";
				cin >> b;
				cout << "Hasil\t: " << jum(a,b);
				break;
			}
		case 2 :
			{
				cout << "Input a\t:";
				cin >> a;	
				cout << "Input b\t:";
				cin >> b;
				cout << "Hasil\t: " << kur(a,b);
				break;
			}
		case 3 :
			{
				cout << "Input a\t:";
				cin >> a;	
				cout << "Input b\t:";
				cin >> b;
				cout << "Hasil\t: " << kal(a,b);
				break;
			}
		case 4 :
			{
				cout << "Input a\t:";
				cin >> a;	
				cout << "Input b\t:";
				cin >> b;
				cout << "Hasil\t: " << bag(a,b);
				break;
			}
	}
	return 0;
}

float jum(float a,float b)
{
	float n;
	n = a+b;
	return n;
}
float kur(float a,float b)
{
	float n;
	n = a-b;
	return n;
}
float kal(float a,float b)
{
	float n;
	n = a*b;
	return n;
}
float bag(float a,float b)
{
	float n;
	n = a/b;
	return n;
}

