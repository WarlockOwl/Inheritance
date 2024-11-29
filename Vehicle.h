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


	void displayInfo() {
		cout << "Manufacturer: " << manufacturer << endl;
		cout << "year Built: " << year << endl;
	}

};

class Car: public Vehicle {
protected:
	int doors;
public:
	Car() {
		doors = 0;
	}
	void setDoors(int d) {
		doors = d;
	}
	int getDoors() {
		return doors;
	}

	void displayInfo() {
		cout << "Manufacturer: " << manufacturer << endl;
		cout << "year Built: " << year << endl;
		cout << "Doors: " << doors << endl;
	}
};

class Truck : public Vehicle {
protected:
	int towingCap;
public:
	Truck() {
		towingCap = 0;
	}
	void setTow(int t) {
		towingCap = t;
	}
	int getTow() {
		return towingCap;
	}

	void displayInfo() {
		cout << "Manufacturer: " << manufacturer << endl;
		cout << "year Built: " << year << endl;
		cout << "Towing capacity: " << towingCap << endl;
	}
};