#include<iostream>
#include<string>
#include<cmath>

using namespace std;
class counter {
	int counter_;
	int a, b;
	public:
		void seta(int _a)
		{
			a = _a;
		}
		int geta() {
			return a;
		}
		void setb(int _b)
		{
			b = _b;
		}
		int getb() {
			return b;
		}
		void setcounter(int _counter)
		{
			counter_ = _counter;
		}
		int getcounter() {
			return counter_;
		}
		void counter_cout(int a,int b) 
		{
		
			if (a < b) 
			{
			
				for (int i = a;i <= b;i++) 
				{
					cout << i << endl;
					if (i == b) 
					{
						i = a;
					}
					_sleep(500);
				}
			}
			else if(a > b)
			{
				for (int i = b;i <= a;i++)
				{
					cout << i << endl;
					if (i == a)
					{
						i = b;
					}
					_sleep(500);
				}
			}
		}


};

int main() {

	counter c;
	int a, b;
	cin >> a >> b;
	c.counter_cout(a, b);
	system("pause");
	return 0;
}