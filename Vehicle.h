#pragma once
//Aaron Richardson
//CIS 1202 501
//December 1st, 2024

#ifndef VEHICLE_H
#define VEHICLE_H

#include <iomanip>
#include "iostream"

using namespace std;

class Vehicle {
protected:
	string manufacturer;
	int year;
public:

	Vehicle() {
		manufacturer = " ";
		year = 0;
	}
	//sets default values

	void setManu(string m) {
		manufacturer = m;
	}
	string getManu() {
		return manufacturer;
	}
	void setYear(int y) {
		year = y;
	}
	int getYear() {
		return year;
	}
	//the functions called to set and get the manufacturer and year produced


	void displayInfo() {
		cout << "Manufacturer: " << manufacturer << endl;
		cout << "year Built: " << year << endl;
	}
	//Displays the entered info of the vehicle

};
//Class for vehicles in general, and will be inherited by the subsequent classes

class Car: public Vehicle {
protected:
	int doors;
public:
	Car() {
		doors = 0;
	}
	//sets default values
	void setDoors(int d) {
		doors = d;
	}
	int getDoors() {
		return doors;
	}
	//the functions called to set and get the towing cap

	void displayInfo() {
		cout << "Manufacturer: " << manufacturer << endl;
		cout << "year Built: " << year << endl;
		cout << "Doors: " << doors << endl;
	}
	//Displays the entered info of the car
};
//class for specifically cars and their values, inherits the vehicle class

class Truck : public Vehicle {
protected:
	int towingCap;
public:
	Truck() {
		towingCap = 0;
	}
	//sets default values
	void setTow(int t) {
		towingCap = t;
	}
	int getTow() {
		return towingCap;
	}
	//the functions called to set and get the towing cap

	void displayInfo() {
		cout << "Manufacturer: " << manufacturer << endl;
		cout << "year Built: " << year << endl;
		cout << "Towing capacity: " << towingCap << endl;
	}
	//Displays the entered info of the truck
};
//class for specifically trucks and their values, inherits the vehicle class
#endif // !1