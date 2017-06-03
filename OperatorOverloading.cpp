#include<bits/stdc++.h>
using namespace std;


class Complex {
	private:
	int real, img;
	
	public:
	
	Complex(int real = 0, int img = 0) {
		this->real = real;
		this->img = img;
	}
	
	Complex operator + (Complex const &obj) {
		Complex res;
		res.real = real + obj.real;
		res.img = real + obj.img;
		return res;
	}
	
	 void print() { cout << real << " + i" << img << endl; }
};

int main() {
	Complex c1(10, 5), c2(2, 4);
    Complex c3 = c1 + c2; // An example call to "operator+"
    c3.print();
    c1.print();
    c2.print();
	return 0;
}

