// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

#include "utils.h"

using namespace std;



vector<int> board{};
const int boardSize = 5;
const int maxRandom = 100;
//board.reserve(20);



vector<int> makeBoard() {
	vector<int> temp{};
	int tempSize = pow(boardSize, 2);
	//srand(time(0));
	for (int i = 0; i < tempSize; i++) {
		temp.push_back(rand() % maxRandom);
	}

	//cout << "board size = " << board.size() << endl;


	auto start = temp.begin();
	auto end = temp.end();
	random_shuffle(start, end);

	return temp;
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

vector<int> findLowestInRowByValue() {
	int counter{};

	vector<int> listOfLowestPoints{};
	vector<int> tempVector{};
	for (auto i : board) {
		counter++;
		tempVector.push_back(i);

		if (counter % boardSize == 0) {

			sort(tempVector.begin(), tempVector.end(), less<int>{});
			listOfLowestPoints.push_back(tempVector.front());
			tempVector.clear();
		}
	}
	//https://numbergenerator.org/random-64-bit-binary-number
	return listOfLowestPoints;
}

vector<int> findLowestInRowByIndex() {
	int counter{};

	vector<int> listOfLowestPoints{};
	vector<int> tempVector{};
	for (auto i : board) {
		counter++;
		tempVector.push_back(i);

		if (counter % boardSize == 0) {

			sort(tempVector.begin(), tempVector.end(), less<int>{});
			listOfLowestPoints.push_back(getIndexByValue(board, tempVector.front()));
			tempVector.clear();
		}
	}
	//https://numbergenerator.org/random-64-bit-binary-number
	return listOfLowestPoints;
}

void findIfLowestInColumn(vector<int>& lp) {
	// this is working

	for (auto i : lp) {
		int currentIndex = i;

		cout << currentIndex << " == " << board.at(currentIndex) << " ^^^ " << endl;

		for (int j = 1; j <= 5; j++) {
			int nextNum = currentIndex + j;
			if (nextNum % 5 != 0) {
				cout << nextNum << endl;

			}
			else {
				break;
			}

		}

		// j is now dead
		for (int j = 1; j <= 5; j++) {
			int previousNum = currentIndex - j;

			if (previousNum >= 0 && previousNum % 5 != 4) {
				cout << previousNum << endl;
			}
			else {
				break;
			}

		}

	}


}



int main()
{
	//board = makeBoard();
	board = dummyBoard();
	//debugBoard();
	drawBoard();
	vector<int> lowestPointsByValue = findLowestInRowByValue();
	vector<int> lowestPointsByIndex = findLowestInRowByIndex();

	findIfLowestInColumn(lowestPointsByIndex);

}

