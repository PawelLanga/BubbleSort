// BubbleSort.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
#include <conio.h>

using namespace std;

void printArray(vector<int> array) {
	for (int q = 0; q < array.size(); q++) {
		cout << array.at(q);
		if (q != array.size() - 1) {
			cout << ", ";
		}
	}
}

bool compare(int a, int b) {
	if (a > b) {
		return true;
	}
	return false;

}

int main()
{

	vector<int> v = { 4, 3, 1, 2, 6, 5, 10, 0, 13 };
	for (int u = 0; u < v.size(); u++) {
		for (int i = 0; i < v.size() - 1; i++) {
			bool isGreater = compare(v.at(i), v.at(i + 1));
			if (isGreater) {
				int r = 0;
				r = v.at(i);
				v.at(i) = v.at(i + 1);
				v.at(i + 1) = r;
			}
		}
	}

	printArray(v);


	_getch();

}

