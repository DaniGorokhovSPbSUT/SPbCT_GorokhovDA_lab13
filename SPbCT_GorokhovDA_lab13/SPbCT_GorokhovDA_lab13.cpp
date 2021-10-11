#include <iostream>

#include "Car.h"
#include "Truck.h"

using namespace std;

void out(Car& c) {
    cout << c;
}

int main()
{
    setlocale(LC_ALL, "rus");

    cout << "Создание экзмепляра без параметров и обновление через ввод" << endl;

    cout << "Введите описание машины" << endl;

    Car a;
    cin >> a;
    cout << a << endl;

    cout << "Создание экзмепляра через передачу параметров" << endl;

    Car b("Ford", 4, 115);
    cout << b;

    cout << "Присваиваем к введённой машине машину статичную" << endl;

    a = b;
    cout << a;

    cout << "Создание экземпляра через копирование" << endl;

    Car c(a);
    cout << c;
    
    cout << "Использование функции вывода для демонстрации метода подстановки" << endl;

    Truck d("Ford-truck", 8, 230, 1000);

    out(d);
}

