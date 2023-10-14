#include <cmath>
#include <iostream>
module student_1bib21097.Lab2.Variant15.Task3;
void RBPO::Lab2::Variant15::Task3::Function1() {
    double x, y;
    std::cout << "Введите значения x и y: ";
    std::cin >> x >> y;
    if (x <= 0 || y <= 0) {
        std::cout << "Неверные значения x и y" << std::endl;
    }

    double result = (std::sqrt(x) - std::sqrt(y)) / x;
    std::cout << "Результат f1 = " << result << std::endl;
}