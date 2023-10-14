#include <cmath>
#include <iostream>
module student_1bib21097.Lab2.Variant15.Task4:Function3;
import :FunctionA;
void RBPO::Lab2::Variant15::Task4::Function3() {
    std::cout << "Введите значение n: ";
    int n;
    std::cin >> n;
    double sum = 0.0;
    for (int i = 0; i <= n; i++) {
        sum += FunctionA(i); 
    }
    std::cout << "Результат  f3 = " << sum << std::endl;
}