#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
	ifstream inFile;

	inFile.open("SalaryData.txt");
	ofstream outFile;
	outFile.open("SalaryOut.txt");


	string lastName, firstName;
	double salary, increase, UpdatedSalary;
	
	outFile << fixed << setprecision(2) << showpoint;

		inFile >> lastName >> firstName >> salary >> increase;
		outFile << firstName << " " << lastName << " " << salary + (salary * (increase / 100)) << endl;

		inFile >> lastName >> firstName >> salary >> increase;
		outFile << firstName << " " << lastName << " " << salary + (salary * (increase / 100)) << endl;

		inFile >> lastName >> firstName >> salary >> increase;
		outFile << firstName << " " << lastName << " " << salary + (salary * (increase / 100)) << endl;

		

	outFile.close();

	return 0;

}