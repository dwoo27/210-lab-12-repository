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

	cout << "1. # of times: " << times.size() << endl;
	cout << "2. Values: " << endl;
	coutTimes(times); //output all times
	cout << "3. Front: " << times.front() << endl;
	cout << "4. Back: " << times.back() << endl;
	cout << "5. Empty?: " << (times.empty() == 0 ? "False" : "True") << endl;
	


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
		cout << "File not found." << endl;
	}

}

void coutTimes(array<double, RUNNERS>& times) {
	for (int i = 0; i < RUNNERS; i++) {
		cout << i + 1 << ". " << times[i] << endl;
	}
}