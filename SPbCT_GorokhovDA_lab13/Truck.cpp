#include "Truck.h"

// Конструктор
Truck::Truck() {
	Car();
	load_capacity = -1;
}
// Конструктор с параметрами
Truck::Truck(string m, int cq, int p, int lc) {
	Car(m, cq, p);
	load_capacity = lc;
}
// Конструктор копирования
Truck::Truck(const Truck& to_copy_truck) {
	mark = to_copy_truck.mark;
	cylinder_quan = to_copy_truck.cylinder_quan;
	power = to_copy_truck.power;
	load_capacity = to_copy_truck.load_capacity;
}
// Деструктор
Truck::~Truck(void) {
	mark.clear();
}

// Селекторы
int Truck::get_load_capacity() {
	return load_capacity;
}

// Модификаторы
int Truck::set_load_capacity(int new_load_capacity) {
	return load_capacity = new_load_capacity;
}
