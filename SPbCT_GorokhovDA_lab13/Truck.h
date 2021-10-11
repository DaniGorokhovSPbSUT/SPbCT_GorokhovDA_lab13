#pragma once
#include "Car.h"
class Truck :
    public Car
{
public:
    int load_capacity;

    // Конструктор
    Truck(void);
    // Конструктор с параметрами
    Truck(string, int, int, int);
    // Конструктор копирования
    Truck(const Truck&);
    // Деструктор
    ~Truck(void);

    // Селектор и модификатор для нового поля
    int get_load_capacity();
    int set_load_capacity(int);
};

