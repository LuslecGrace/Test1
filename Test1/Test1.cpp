#include <iostream>
#include <iomanip>
#include <locale>
#include <thread>

using namespace std;

int main() {
   
    setlocale(LC_ALL, "Russian");
    double cost, percentage, tax, salary, complexity;

    cout << "Введите сумму: ";
    cin >> cost;

    cout << "Введите процент отчисления на зарплату врача: ";
    cin >> percentage;

    cout << "Введите коэффициент сложности: ";
    cin >> complexity;

    salary = cost * complexity * percentage / 100;
    tax = salary * 0.13;
    salary -= tax;
    cout << "Заработная плата врача за прием: " << salary << " рублей" << endl;
    std::this_thread::sleep_for(std::chrono::seconds(20));
   

    return 0;
}