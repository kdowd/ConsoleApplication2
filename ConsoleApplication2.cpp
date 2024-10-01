#include <iostream>   

#include <cmath>   



using namespace std;



int main() {
	int a = 8;
	int b = 2;
	int c = a + b;

	cout << "Square = " << pow(a, b) << endl;
	cout << "Square Root = " << sqrt(c) << endl;


	if (isgreater(a, b)) {

		cout << "a is greater than b" << "\n";
	}
	else {
		cout << "a is not greater than b" << "\n";
	}


	system("pause");
}