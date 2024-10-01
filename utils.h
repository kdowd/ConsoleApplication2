#pragma once

#include <iostream>
#include <vector>
#include <algorithm>


int getIndexByValue(std::vector<int>& v, int val)
{
	auto it = find(v.begin(), v.end(), val);

	if (it != v.end())
	{
		int index = it - v.begin();
		return index;
	}
	else {
		return -1;
	}
}

std::vector<int> dummyBoard() {

	std::vector<int> saddlePoints{
		70,4,40,50,0,
		13,8,25,33,7,
		2,61,4,67,53,
		50,60,11,96,87,
		87,83,43,70,58
	};


	return saddlePoints;
}



std::vector<float> realSaddlePointVector() {

	std::vector<float> saddlePoints{ -0.08, 0.55, 0.98, 1.21, 1.24, 1.07, 0.7, 0.13, -0.64,
			-0.69, -0.06,0.37,0.6,0.63,0.46,0.09,-0.48,-1.25,
			-1.1,-0.47,-0.04,0.19,0.22,0.05,-0.32,-0.89,-1.66,
			-1.31,-0.68,-0.25,-0.02,0.01,-0.16,-0.53,-1.1,-1.87,
			-1.32,-0.69,-0.26,-0.03,0,-0.17,-0.54,-1.11,-1.88,
			-1.13,-0.5,-0.07,0.16,0.19,0.02,-0.35,-0.92,-1.69,
			-0.74,-0.11,0.32,0.55,0.58,0.41,0.04,-0.53,-1.3,
			-0.15,0.48,0.91,1.14,1.17,1.0,0.63,0.06,-0.71,
			0.64,1.27,1.7,1.93,1.96,1.79,1.42,0.85,0.08 };

	return saddlePoints;
}


void asort() {
	int arr[] = { 60,10,80,40,30,20,50,90,70 };

	std::sort(arr, arr + 9, std::less<int>());

	for (int i = 0; i < 9; i++) {
		std::cout << arr[i] << " ";
	}

	std::cout << std::string(50, '#') << std::endl;

}
