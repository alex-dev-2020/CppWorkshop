#include "stdafx.h"
#include <iostream>
using namespace std;
 
double enter_number(int);
double check(double, int);
void solution(double, int);
 
//Функция для ввода числа, с последующей его проверкой
double enter_number(int digit) {
    double number;
    do {
        cout << "Введите " << digit << "-значное число: ";
        cin >> number;
        number = check(number, digit);
    } while (number == 0);
    return number;
}
 
//Функция для проверки разрядности числа и его знака
double check(double check_number, int check_digit) {
    double control = check_number / pow(10, check_digit - 1);
    if ((abs(control) > 0 && abs(control) < 1) || (abs(control) > 10))
    {
        cout << endl << "\t\tВы ввели неверное число. Будьте внимательны!\n" << endl;
        return 0;
    }
    else if (control < 0)
        {
            cout << endl << "\tЭто отрицательное число\n" << endl;
            check_number = abs(check_number);
        }
    else cout << endl << "\tЭто положительное число\n" << endl;
    return check_number;
}
 
//Функция для вывода каждой цифры в новой строке
void solution(double data, int size) {
    for (int i = 1;i <= size;i++) {
        double rank = pow(10, (size - i));
        double(numeral) = data / rank;
        cout << "\t" << i << "-я цифра этого числа - " << int(numeral) << endl;
        data -= rank * int(numeral);
    }
    //Для дробного числа
    if (data != 0)
        cout << endl << "\tЦифры после запятой: " << double(data) << " (могут быть округлены)" << endl;
    cout << endl;
}
 
int main(int argc, char* argv[]) {
    setlocale(0, "");
    //Разрядность можно изменять по необходимости
    const int const_digit = 5;
    double number = enter_number(const_digit);
    solution(number, const_digit);
    return 0;
}