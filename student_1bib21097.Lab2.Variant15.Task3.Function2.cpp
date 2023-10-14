#include <cmath>
#include <iostream>
module student_1bib21097.Lab2.Variant15.Task3;

void RBPO::Lab2::Variant15::Task3::Function2() {
    std::cout << "Введите значения x для второй функции: ";
    double x;
    std::cin >> x;
    double result;
    if (x <= 4) {
        result = sqrt(pow(x, 2) + 4);
    }
    else {
        result = cos(abs(2 + x));
    }
    std::cout << "Результат функции f2(x) = " << result << std::endl;
}