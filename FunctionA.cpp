#include <cmath>
#include <iostream>
module student_1bib21097.Lab2.Variant15.Task4:FunctionA;

double RBPO::Lab2::Variant15::Task4::FunctionA(int i) {
     double result = pow(-1, i) * ((i + 1) / (pow(i, 2) + 2 * i + 1));
     return result;
}
