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
    double inch = 2.54;

    cout << "Цикл for:\n";
    for (double i = 2; i <= 12; i += 2)
        cout << "в " << i << " дюймах " << float(i * inch) << " см" << endl;

    cout << "Цикл while:\n";
    double i = 2;
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

void int_input(int &a) { // Проверяет, являются-ли введённые данные int
    while (true) {
        if (cin >> a) // Если введено целое число - идём дальше
            break;
        else {
            cout << "Ошибка! Введено не целое число. Попробуйте снова: "; // Даём второй шанс
            cin.clear(); // Сбрасываем ошибки ввода
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Очистка буфера от введённой кракозябры

            /*
                P.S.
                cin.ignore() - удаляет символы из потока ввода
                cin.clear() - обнуляет состояние потока cin, в данном случае - состояние ошибки
                Эти методы вызываются для продолжения попыток ввода.
                В противном случае цикл просто будет вечно выводить сообщение об ошибке
            */
        }
    }
}

void two_digit_input(int &a) {
    int_input(a);
    while (a > 99 || a < -99 || (a > -10 && a < 10)) {
        cout << "Ошибка! Введено не двузначное число. Попробуйте снова:" << endl;
        int_input(a);
    }
}

void three_digit_input(int& a) {
    int_input(a);
    while (a > 999 || a < -999 || (a > -100 && a < 100)) {
        cout << "Ошибка! Введено не трёхзначное число. Попробуйте снова:" << endl;
        int_input(a);
    }
}

void task9() {
    //Вывести кубы целых чисел от a до b в обратном порядке
    int a, b;
    cout << "Введите число a (a<=b): ";
    int_input(a);

    cout << "Введите число b: ";
    int_input(b);

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

void task10() {
    //Вывести целые числа от a до b, оканчивающиеся на x
    int a, b, x;
    cout << "Введите первое число (a<=b): ";
    int_input(a);
    cout << "Введите второе число: ";
    int_input(b);
    cout << "Введите третье число: ";
    int_input(x);
    cout << "Целые числа от " << a << " до " << b << ", оканчивающиеся на " << x << ":" << endl;

    cout << "Цикл for:\n";
    for (int i = a; i <= b; i++) {
        if(i%10 == x)
            cout << i  << endl;
    }
        

    cout << "Цикл while:\n";
    int i = a;
    while (i <= b) {
        if (i % 10 == x)
            cout << i << endl;
        i++;
    }

    cout << "Цикл do while:\n";
    i = a;
    do {
        if (i % 10 == x)
            cout << i << endl;
        i++;
    } while (i <= b);
}

void task11() {
    //Вывести целые числа от a до b, оканчивающиеся на x или y
    int a, b, x, y;
    cout << "Введите первое число (a<=b): ";
    int_input(a);
    cout << "Введите второе число: ";
    int_input(b);
    cout << "Введите третье число: ";
    int_input(x);
    cout << "Введите четвёртое число: ";
    int_input(y);
    cout << "Целые числа от " << a << " до " << b << ", оканчивающиеся на " << x << " или " << y << ":" << endl;

    cout << "Цикл for:\n";
    for (int i = a; i <= b; i++) {
        if (i % 10 == x || i % 10 == y)
            cout << i << endl;
    }


    cout << "Цикл while:\n";
    int i = a;
    while (i <= b) {
        if (i % 10 == x || i % 10 == y)
            cout << i << endl;
        i++;
    }

    cout << "Цикл do while:\n";
    i = a;
    do {
        if (i % 10 == x || i % 10 == y)
            cout << i << endl;
        i++;
    } while (i <= b);
}

void task12() {
    //Вывести целые числа от a до b, оканчивающиеся на чётное число
    int a, b;
    cout << "Введите первое число (a<=b): ";
    int_input(a);
    cout << "Введите второе число: ";
    int_input(b);
    cout << "Целые числа от " << a << " до " << b << ", оканчивающиеся на чётное число:" << endl;

    cout << "Цикл for:\n";
    for (int i = a; i <= b; i++) {
        if (i % 10%2 == 0)
            cout << i << endl;
    }

    cout << "Цикл while:\n";
    int i = a;
    while (i <= b) {
        if (i % 10%2 == 0)
            cout << i << endl;
        i++;
    }

    cout << "Цикл do while:\n";
    i = a;
    do {
        if (i % 10%2 == 0)
            cout << i << endl;
        i++;
    } while (i <= b);
}

void task13() {
    //Вывести положительные целые числа от a до b
    int a, b;
    cout << "Введите первое число (a<=b): ";
    int_input(a);
    cout << "Введите второе число: ";
    int_input(b);
    cout << "Целые положительные числа от " << a << " до " << b << ":" << endl;

    cout << "Цикл for:\n";
    for (int i = a; i <= b; i++) {
        if (i > 0)
            cout << i << endl;
    }

    cout << "Цикл while:\n";
    int i = a;
    while (i <= b) {
        if (i > 0)
            cout << i << endl;
        i++;
    }

    cout << "Цикл do while:\n";
    i = a;
    do {
        if (i > 0)
            cout << i << endl;
        i++;
    } while (i <= b);
}

void task14() {
    //Вывести целые числа от a до b, кратные трём
    int a, b;
    cout << "Введите первое число (a<=b): ";
    int_input(a);
    cout << "Введите второе число: ";
    int_input(b);
    cout << "Целые числа от " << a << " до " << b << ", оканчивающиеся на чётное число:" << endl;

    cout << "Цикл for:\n";
    for (int i = a; i <= b; i++) {
        if (i % 3 ==  0)
            cout << i << endl;
    }

    cout << "Цикл while:\n";
    int i = a;
    while ( i <= b) {
        if (i % 3 == 0)
            cout << i << endl;
        i++;
    }

    cout << "Цикл do while:\n";
    i = a;
    do {
        if (i % 3 == 0)
            cout << i << endl;
        i++;
    } while (i <= b);
}

void task15() {
    //Вывести целые чётные числа от a до b, кратные трём
    int a, b;
    cout << "Введите первое число (a<=b): ";
    int_input(a);
    cout << "Введите второе число: ";
    int_input(b);
    cout << "Целые чётные числа от " << a << " до " << b << ", кратные трём:" << endl;

    cout << "Цикл for:\n";
    for (int i = a; i <= b; i++) {
        if (i % 3 == 0 && i % 2 == 0)
            cout << i << endl;
    }

    cout << "Цикл while:\n";
    int i = a;
    while (i <= b) {
        if (i % 3 == 0 && i % 2 == 0)
            cout << i << endl;
        i++;
    }

    cout << "Цикл do while:\n";
    i = a;
    do {
        if (i % 3 == 0 && i % 2 == 0)
            cout << i << endl;
        i++;
    } while (i <= b);
}

void task16() {
    //Вывести отрицательные целые числа от a до b, оканчивающиеся на чётное число
    int a, b;
    cout << "Введите первое число (a<=b): ";
    int_input(a);
    cout << "Введите второе число: ";
    int_input(b);
    cout << "Целые отрицательные числа от " << a << " до " << b << ", оканчивающиеся на чётное число:" << endl;

    cout << "Цикл for:\n";
    for (int i = a; i <= b; i++) {
        if (i < 0 && i % 2 == 0)
            cout << i << endl;
    }

    cout << "Цикл while:\n";
    int i = a;
    while (i <= b) {
        if (i < 0 && i % 2 == 0)
            cout << i << endl;
        i++;
    }

    cout << "Цикл do while:\n";
    i = a;
    do {
        if (i < 0 && i % 2 == 0)
            cout << i << endl;
        i++;
    } while (i <= b);
}

void task17() {
    //Вывести целые двузначные числа от a до b, цифры которого разные
    int a, b;
    cout << "Введите первое двузначное число (a<=b): ";
    two_digit_input(a);
    cout << "Введите второе двузначное число: ";
    two_digit_input(b);
    cout << "Целые двузначные числа от " << a << " до " << b << ", цифры которого разные:" << endl;

    cout << "Цикл for:\n";
    for (int i = a; i <= b; i++) {
        if (i % 10 != i / 10)
            cout << i << endl;
    }

    cout << "Цикл while:\n";
    int i = a;
    while (i <= b) {
        if (i % 10 != i / 10)
            cout << i << endl;
        i++;
    }

    cout << "Цикл do while:\n";
    i = a;
    do {
        if (i % 10 != i / 10)
            cout << i << endl;
        i++;
    } while (i <= b);
}

void task18() {
    //Вывести целые двузначные числа от a до b, в которых старшая цифра отличается от младшей не больше, чем на единицу
    int a, b;
    cout << "Введите первое двузначное число (a<=b): ";
    two_digit_input(a);
    cout << "Введите второе двузначное число: ";
    two_digit_input(b);
    cout << "Целые двузначные числа от " << a << " до " << b << ", в которых старшая цифра отличается от младшей не больше, чем на единицу:" << endl;

    cout << "Цикл for:\n";
    for (int i = a; i <= b; i++) {
        int diff = (i % 10) - (i / 10);
        if (abs(diff) <= 1)
            cout << i << endl;
    }

    cout << "Цикл while:\n";
    int i = a;
    while (i <= b) {
        int diff = (i % 10) - (i / 10);
        if (abs(diff) <= 1)
            cout << i << endl;
        i++;
    }

    cout << "Цикл do while:\n";
    i = a;
    do {
        int diff = (i % 10) - (i / 10);
        if (abs(diff) <= 1)
            cout << i << endl;
        i++;
    } while (i <= b);
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
    //task9();
    //task10();
    //task11();
    //task12();
    //task13();
    //task14();
    //task15();
    //task16();
    //task17();
    task18();

    system("pause");
    return 0;
}