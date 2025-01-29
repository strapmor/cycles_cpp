#include <iostream>
using namespace std;

void task1() {
    //Вывести числа от 1 до 21 с шагом 2
    cout << "Задание 1\nЦикл for:\t";
    for (int i = 1; i <= 21; i += 2)
        cout << i << " ";
    cout << endl;

    cout << "Цикл while:\t";
    int i = 1;
    while (i <= 21) {
        cout << i << " ";
        i += 2;
    }
    cout << endl;
        
    cout << "Цикл do while:\t";
    i = 1;
    do {
        cout << i << " ";
        i += 2;
    } while (i <= 21);
    cout << endl;
}

void task2() {
    //Вывести числа от 60 до 10 с шагом 2
    cout << "Задание 2\nЦикл for:\n";
    for (int i = 60; i >= 10; i -= 2)
        cout << i << endl;

    cout << "Цикл while:\n";
    int i = 60;
    while (i >= 10) {
        cout << i << endl;
        i -= 2;
    }

    cout << "Цикл do while:\n";
    i = 60;
    do {
        cout << i << endl;
        i -= 2;
    } while (i >= 10);
}

void task3() {
    //Вывести числа от 10 до 25
    cout << "Задание 3\nЦикл for:\n";
    for (int i = 10; i <= 25; i++)
        cout << i << " " << float(i+0.4) << endl;

    cout << "Цикл while:\n";
    int i = 10;
    while (i <= 25) {
        cout << i << " " << float(i + 0.4) << endl;
        i ++;
    }

    cout << "Цикл do while:\n";
    i = 10;
    do {
        cout << i << " " << float(i + 0.4) << endl;
        i ++;
    } while (i <= 25);
}

void task4() {
    //Вывести числа от 25 до 35
    cout << "Задание 4\nЦикл for:\n";
    for (int i = 25; i <= 35; i++)
        cout << i << " " << float(i + 0.5) << " " << float(i - 0.2) << endl;

    cout << "Цикл while:\n";
    int i = 25;
    while (i <= 35) {
        cout << i << " " << float(i + 0.5) << " " << float(i - 0.2) << endl;
        i++;
    }

    cout << "Цикл do while:\n";
    i = 25;
    do {
        cout << i << " " << float(i + 0.5) << " " << float(i - 0.2) << endl;
        i++;
    } while (i <= 35);
}

void task5() {
    //Вывести фунты и кило от 1 до 10
    cout << "Задание 5\nЦикл for:\n";
    for (int i = 1; i <= 10; i++)
        cout << i << " lb" << " = " << float(i * 0.453) << "kg" << endl;

    cout << "Цикл while:\n";
    int i = 1;
    while (i <= 10) {
        cout << i << " lb" << " = " << float(i * 0.453) << "kg" << endl;
        i++;
    }

    cout << "Цикл do while:\n";
    i = 1;
    do {
        cout << i << " lb" << " = " << float(i * 0.453) << "kg" << endl;
        i++;
    } while (i <= 10);
}

void task6() {
    //Вывести курс доллара от 5 до 120 с шагом 5
    cout << "Задание 6\nВведите курс доллара в рублях: ";
    float rub;
    cin >> rub;

    cout << "Цикл for:\n";
    for (int i = 5; i <= 120; i+=5)
        cout << i << "$" << " = " << float(i * rub) << "руб." << endl;

    cout << "Цикл while:\n";
    int i = 5;
    while (i <= 120) {
        cout << i << "$" << " = " << float(i * rub) << "руб." << endl;
        i+=5;
    }

    cout << "Цикл do while:\n";
    i = 5;
    do {
        cout << i << "$" << " = " << float(i * rub) << "руб." << endl;
        i+=5;
    } while (i <= 120);
}

void task7() {
    //Вывести стоимость n шт товара от 10 до 100 с шагом 10
    cout << "Задание 7\nВведите цену товара: ";
    float price;
    cin >> price;

    cout << "Цикл for:\n";
    for (int i = 10; i <= 100; i += 10)
        cout << i << "шт" << " стоят " << float(i * price) << "руб." << endl;

    cout << "Цикл while:\n";
    int i = 10;
    while (i <= 100) {
        cout << i << "шт" << " стоят " << float(i * price) << "руб." << endl;
        i += 10;
    }

    cout << "Цикл do while:\n";
    i = 10;
    do {
        cout << i << "шт" << " стоят " << float(i * price) << "руб." << endl;
        i += 10;
    } while (i <= 100);
}

void task8() {
    //Вывести расстояние в дюймах и сантиметрах от 2 до 12 с шагом 2
    float inch = 2.54;

    cout << "Цикл for:\n";
    for (int i = 2; i <= 12; i += 2)
        cout << "в " << i << " дюймах " << float(i * inch) << " см" << endl;

    cout << "Цикл while:\n";
    int i = 2;
    while (i <= 12) {
        cout << "в " << i << " дюймах " << float(i * inch) << " см" << endl;
        i += 2;
    }

    cout << "Цикл do while:\n";
    i = 2;
    do {
        cout << "в " << i << " дюймах " << float(i * inch) << " см" << endl;
        i += 2;
    } while (i <= 12);
}

void task9() {
    //Вывести чисел от a до b в обратном порядке
    float a, b;
    cout << "Введите первое число: ";
    cin >> a;
    cout << "Введите второе число: ";
    cin >> b;
    cout << "Кубы чисел от " << a << " до " << b << " в обратном порядке:" << endl;

    cout << "Цикл for:\n";
    for (int i = b; i >= a; i --)
        cout << i << "^=" << pow(i, 3) << endl;

    cout << "Цикл while:\n";
    int i = b;
    while (i >= a) {
        cout << i << "^=" << pow(i, 3) << endl;
        i --;
    }

    cout << "Цикл do while:\n";
    i = b;
    do {
        cout << i << "^=" << pow(i, 3) << endl;
        i --;
    } while (i >= a);
}

int main()
{
    setlocale(LC_ALL, "rus");

    //task1();
    //task2();
    //task3();
    //task4();
    //task5();
    //task6();
    //task7();
    //task8();
    task9();



    system("pause");
    return 0;
}