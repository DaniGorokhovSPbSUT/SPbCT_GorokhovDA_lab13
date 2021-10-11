#include "Truck.h"

// �����������
Truck::Truck() {
	Car();
	load_capacity = -1;
}
// ����������� � �����������
Truck::Truck(string m, int cq, int p, int lc) {
	Car(m, cq, p);
	load_capacity = lc;
}
// ����������� �����������
Truck::Truck(const Truck& to_copy_truck) {
	mark = to_copy_truck.mark;
	cylinder_quan = to_copy_truck.cylinder_quan;
	power = to_copy_truck.power;
	load_capacity = to_copy_truck.load_capacity;
}
// ����������
Truck::~Truck(void) {
	mark.clear();
}

// ���������
int Truck::get_load_capacity() {
	return load_capacity;
}

// ������������
int Truck::set_load_capacity(int new_load_capacity) {
	return load_capacity = new_load_capacity;
}
