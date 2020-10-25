  #include <iostream>
  using namespace std;
  
  void decrease_by_ten(int* n) {
  	*n -=10;
  }
  
  int main ()
  {
  	int number =100;
  	while (number >= 0)
  	{
  		cout << number << endl;
		decrease_by_ten(&number);		
	}
	return 0;
  }
