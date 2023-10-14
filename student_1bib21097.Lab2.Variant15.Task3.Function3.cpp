#include <cmath>
#include <iostream>
module student_1bib21097.Lab2.Variant15.Task3;

void RBPO::Lab2::Variant15::Task3::Function3() {
    std::cout << "Введите значение n: ";
    int n;
    std::cin >> n;
    double sum = 0.0;
    int i = 0;
    do {
        sum += FunctionA(i); 
        i++;
    } while (i <= n);
    std::cout << "Результат f3 = " << sum << std::endl;
}