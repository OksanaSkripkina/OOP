

#include <iostream>
using namespace std;

class Time {
private:
	int s;
	int m;
	int h;
public:
	Time(int s) {
		this->s = s %60;
		m = (s%3600) /60;
		h = s / 3600;
	}
	Time(int h, int m, int s) {
		this->s = s;
		this->m = m;
		this->h = h;
	}
    void print() {
		cout << h << ":" << m << ":" << s <<endl;
	}
	Time add(Time a2) {
		return Time(a2.toSec() + toSec());
	}
	int toSec() {
		return (s + m * 60 + h * 3600);
    }
};



int main()
{
	Time a1(2, 30, 55);

	a1.print();
	cout << endl;
	Time a2(1, 40, 15);

	a2.print();
	Time a3 = a1.add(a2);
	a3.print();
	
}


