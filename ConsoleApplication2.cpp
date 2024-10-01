// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;


struct myStruct {
	int i{};
	string s{};
	bool b{};

	myStruct() {
		cout << 123 << endl;
	}
};

struct point {
	int x;
	int y;
};

int main()
{
	struct myStruct test;
	test.b = false;

	vector<myStruct> blah(5);

	std::cout << "Hello Worldy!\n";
	std::cout << "Hello Worldy!\n";
	std::cout << "Hello Worldy!\n";
}
