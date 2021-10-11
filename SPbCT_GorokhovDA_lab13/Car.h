#pragma once
#include <string>
#include <iostream>

using namespace std;

class Car {
public:
	string mark;
	int cylinder_quan;
	int power;

	// Конструктор без параметров
	Car(void);
	// Конструктор с параметрами
	Car(string, int, int);
	// Конструктор копирования
	Car(const Car&);
	// Десктрутор
	~Car(void);

	string get_mark();
	int get_cylinder_quan();
	int get_power();

	string set_mark(string);
	int set_cylinder_quan(int);
	int set_power(int);

	Car& operator=(const Car&);

	friend ostream& operator<<(ostream& stream, const Car& c) {
		stream << "Марка: " << c.mark << endl;
		stream << "Кол-во цилиндров: " << c.cylinder_quan << endl;
		stream << "Мощность: " << c.power << endl;

		return stream;
	}
	friend istream& operator>>(istream& stream, Car& c) {
		stream >> c.mark;
		stream >> c.cylinder_quan;
		stream >> c.power;

		return stream;
	}
};
