// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;



vector<int> board{};
const int boardSize = 5;
//board.reserve(20);

vector<int> makeBoard() {
	int tempSize = pow(boardSize, 2);
	srand(time(0));
	for (int i = 0; i < tempSize; i++) {
		board.push_back(rand() % 5);
	}

	//cout << "board size = " << board.size() << endl;


	auto start = board.begin();
	auto end = board.end();
	random_shuffle(start, end);

	return board;
}


void debugBoard() {
	for (auto i : board) {
		cout << i << ", ";
	}
}

void drawBoard() {
	int counter{};
	for (auto i : board) {
		counter++;
		cout << setw(6) << i << " ";
		if (counter % boardSize == 0) {
			cout << endl << endl;
		}
	}
}

vector<int> findLowestInRow() {
	int counter{};
	cout << string(50, '*') << endl << endl;
	vector<int> listOfLowestPoints{};
	vector<int> tempVector{};
	for (auto i : board) {
		counter++;
		cout << i << " ";
		tempVector.push_back(i);

		if (counter % boardSize == 0) {

			sort(tempVector.begin(), tempVector.end());
			listOfLowestPoints.push_back(tempVector.front());
			tempVector.clear();
			cout << endl;
		}
	}
	cout << string(50, '*') << endl;

	return listOfLowestPoints;
}

int main()
{

	makeBoard();
	//debugBoard();
	drawBoard();
	vector<int> lowestPoints = findLowestInRow();

	for (auto i : lowestPoints) {
		cout << "Lowest Point = " << i << endl;
	}

}
