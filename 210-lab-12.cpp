#include <iostream>
#include <algorithm> //for sort() and find()
#include <numeric> //for accumulate()
#include <array>
#include <string>
#include <fstream> //for reading file
using namespace std;

const int RUNNERS = 30;

void finTimes(array<double, RUNNERS>&);
void foutTimes(array<double, RUNNERS>&);
void coutTimes(array<double, RUNNERS>&);

int main()
{
	array<double, RUNNERS> times; //creates array for runners' 100m dash times
	finTimes(times); //populates array from txt file

}

void finTimes(array<double, RUNNERS>& times) {
	ifstream fin;
	fin.open("times.txt");
	string buf;

	if (fin.good()) {
		for (int i = 0; i < RUNNERS; i++) {
			getline(fin, buf); times[i] = atof(buf.c_str());
		}
		fin.close();
	}
	else {
		cout << "Could not open file" << endl;
	}

}

void coutTimes(array<double, RUNNERS>&);