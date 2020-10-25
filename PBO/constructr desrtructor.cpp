#include <iostream>
#include <iomanip>

using namespace std;

class Time
{
	private :
		int hour;
		int minute;
		int second;
	public :
		Time ()
		{
			hour =minute=second=0;
		}
		void setTime (int h, int m, int s);
		void printUniversal();
		void printStandart ();
		void entry();
		void display ();
		~Time (){}
};
		void Time::setTime(int h, int m, int s){
			hour=(h>=0&&h<24)?h:0;
			minute=(m>=0&&m<60)?m:0;
			second=(s>=0&&s<60)?s:0;
		}
		void Time::printUniversal(){
			cout<<setfill('0')<<setw(2)<<hour<<":"<<setw<<(2)<<minute<<":"<<setw(2)<<second;
		}
		void Time::printStandart(){
			cout<<((hour==0||hour==12)?12:hour%12)
			<<":"<<setfill('0')<<setw<<(2)<<minute
			<<":"<<setw<<(2)<<second
			<<(hour<12?"AM":"PM");
		}
		void Time:: entry (){
			cout<<"massukkan jam :";
			cin>>hour;
			cout<<"masukkan menit :";
			cin>>minute;
			cout<<"masukkan detik :";
			cin>>second;
			
		}
		void Time :: display(){
			cout<<"hasilnya :";
		}

int main(){
//	int h,m,s;
	Time t;
	
	t.entry ();
	t.Time::setTime (int h,int m,int s);
	t.printUniversal();
	t.printStandart ();
	
	return 0;
}
