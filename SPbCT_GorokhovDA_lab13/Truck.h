#pragma once
#include "Car.h"
class Truck :
    public Car
{
public:
    int load_capacity;

    // �����������
    Truck(void);
    // ����������� � �����������
    Truck(string, int, int, int);
    // ����������� �����������
    Truck(const Truck&);
    // ����������
    ~Truck(void);

    // �������� � ����������� ��� ������ ����
    int get_load_capacity();
    int set_load_capacity(int);
};

