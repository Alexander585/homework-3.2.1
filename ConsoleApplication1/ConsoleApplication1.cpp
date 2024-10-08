#include <iostream>

class Calculator {
private:
    double num1;
    double num2;

public:
    Calculator() : num1(0), num2(0) {}
   
    void set(double n1, double n2) {
        num1 = n1;
        num2 = n2;
    }

    double add() {
        return num1 + num2;
    }

    double multiply() {
        return num1 * num2;
    }

    double subtract_1_2() {
        return num1 - num2;
    }

    double subtract_2_1() {
        return num2 - num1;
    }

    double divide_1_2() {
       // if (num2 != 0) {
            return num1 / num2;
        }/*
        else {
            std::cerr << "Ошибка: деление на ноль" << std::endl;
            return 0; // Возвращаем 0, но это можно изменить в зависимости от требований
        }
    }*/

    double divide_2_1() {
       // if (num1 != 0) {
            return num2 / num1;
        }/*
        else {
            std::cerr << "Ошибка: деление на ноль" << std::endl;
            return 0; // Возвращаем 0, но это можно изменить в зависимости от требований
        }
    }*/

    /*bool set_num1(double value) {
        if (value != 0) {
            num1 = value;
            return true;
        }
        return false;
    }

    bool set_num2(double value) {
        if (value != 0) {
            num2 = value;
            return true;
        }
        return false;
    }*/
};

int main() {

    while (true)
    {
    Calculator calculator;

    setlocale(LC_ALL, "RUS");
    double input1, input2;
    std::cout << "Введите num1: ";
    std::cin >> input1;
    if (input1 == 0) {
        std::cout << "Неверный ввод!" << std::endl;
        continue;
    }
    std::cout << "Введите num2: ";
    std::cin >> input2;
    if (input2 == 0) {
        std::cout << "Неверный ввод!" << std::endl;
        continue;
    }



    calculator.set(input1, input2);


        std::cout << "num1 + num2 = " << calculator.add() << std::endl;
        std::cout << "num1 - num2 = " << calculator.subtract_1_2() << std::endl;
        std::cout << "num2 - num1 = " << calculator.subtract_2_1() << std::endl;
        std::cout << "num1 * num2 = " << calculator.multiply() << std::endl;
        std::cout << "num1 / num2 = " << calculator.divide_1_2() << std::endl;
        std::cout << "num2 / num1 = " << calculator.divide_2_1() << std::endl;
    }

    return 0;
}
