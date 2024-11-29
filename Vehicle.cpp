//Aaron Richardson
//CIS 1202 501
//December 1st, 2024
#include "Vehicle.h"
#include "iostream"
#include <string>
#include <cstdlib>

using namespace std;

int main() {
	string tempVehicle;
	int tempNum;
	Vehicle entry1;
	Car entry2;
	Truck entry3;

	cout << "Vehicle Program" << endl << endl << "Vehicle:" << endl;
	cout << "Enter the manufacturer: ";
	cin >> tempVehicle;
	entry1.setManu(tempVehicle);
	cout << "Enter the year built: ";
	cin >> tempNum;
	entry1.setYear(tempNum);

	cout << "Vehicle Information: " << endl;
	cout << "Manufacturer: " << entry1.getManu() << endl;
	cout << "Year Built: " << entry1.getYear() << endl;



	return 0;
}