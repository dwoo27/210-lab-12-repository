#include <iostream>
#include <algorithm> //for sort() and find()
#include <numeric> //for accumulate()
#include <array>
#include <fstream> //for reading file
using namespace std;

const int RUNNERS = 30;

void finTimes(array<double, RUNNERS>&);
void foutTimes(array<double, RUNNERS>&);
void coutTimes(array<double, RUNNERS>&);

int main()
{

}

void finTimes(array<double, RUNNERS>&) {
	ifstream fin;
	fin.open("times.txt");

	if (fin.good()) {

	}
}
