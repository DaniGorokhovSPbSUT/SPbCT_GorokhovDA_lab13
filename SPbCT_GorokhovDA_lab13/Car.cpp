#include <string>
#include <iostream>
#include "Car.h"

using namespace std;

// �����������
Car::Car() {
	mark = "unknown";
	cylinder_quan = -1;
	power = -1;
}
// ����������� � �����������
Car::Car(string _mark, int _cylinder_quan, int _power): mark(_mark), cylinder_quan(_cylinder_quan), power(_power) {}

// ����������� �����������
Car::Car(const Car& to_copy_car) {
	mark = to_copy_car.mark;
	cylinder_quan = to_copy_car.cylinder_quan;
	power = to_copy_car.power;
}

// ����������
Car::~Car() {
	mark.clear();
}

// ���������
string Car::get_mark() {
	return mark;
}

int Car::get_cylinder_quan() {
	return cylinder_quan;
}

int Car::get_power() {
	return power;
}

// ������������
string Car::set_mark(string new_mark) {
	return mark = new_mark;
}

int Car::set_cylinder_quan(int new_cyliner_quan) {
	return cylinder_quan = new_cyliner_quan;
}

int Car::set_power(int new_power) {
	return power = new_power;
}

// ���������� ������������
Car& Car::operator=(const Car& to_copy_car) {
	cout << "���������� ������������" << endl;

	mark = to_copy_car.mark;
	cylinder_quan = to_copy_car.cylinder_quan;
	power = to_copy_car.power;

	return *this;
}
