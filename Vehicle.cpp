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
	//lets the user enter the vehicle information

	cout << "Vehicle Information: " << endl;
	cout << "Manufacturer: " << entry1.getManu() << endl;
	cout << "Year Built: " << entry1.getYear() << endl << endl;
	//prints the entered vehicle information

	cout << "Car" << endl;
	cout << "Enter the manufacturer: ";
	cin >> tempVehicle;
	entry2.setManu(tempVehicle);
	cout << "Enter the year built: ";
	cin >> tempNum;
	entry2.setYear(tempNum);
	cout << "Enter the number of doors: ";
	cin >> tempNum;
	entry2.setDoors(tempNum);
	//lets the user enter the car information

	cout << "Vehicle Information: " << endl;
	cout << "Manufacturer: " << entry2.getManu() << endl;
	cout << "Year Built: " << entry2.getYear() << endl;
	cout << "Doors: " << entry2.getDoors() << endl;
	//prints the entered car information

	cout << "Truck" << endl;
	cout << "Enter the manufacturer: ";
	cin >> tempVehicle;
	entry2.setManu(tempVehicle);
	cout << "Enter the year built: ";
	cin >> tempNum;
	entry3.setYear(tempNum);
	cout << "Enter the number of doors: ";
	cin >> tempNum;
	entry3.setTow(tempNum);
	//lets the user enter the truck information

	cout << "Vehicle Information: " << endl;
	cout << "Manufacturer: " << entry3.getManu() << endl;
	cout << "Year Built: " << entry3.getYear() << endl;
	cout << "Doors: " << entry3.getTow() << endl;
	//prints the entered truck information

	return 0;
}