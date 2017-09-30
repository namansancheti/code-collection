#include<iostream>
#include<map>
#include<string>

using std::cout;
using std::map;
using std::pair;
using std::string;

void zero() { cout << "zero"; }
void one() { cout << "one"; }
void two() { cout << "two"; }
map<string, int> m;


void foo(string fun_name) {		
	static void (*lookup[])() = {zero, one, two};
	lookup[m.at(fun_name)]();	
}

int main() {
	m.insert(pair<string,int>("zero", 0));
	m.insert(pair<string,int>("one", 1));
	m.insert(pair<string,int>("two", 2));
	foo("one");
	foo("two");
	return 0;
}
