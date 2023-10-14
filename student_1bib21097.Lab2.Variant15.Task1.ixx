#include <cmath>
#include <iostream>
export module student_1bib21097.Lab2.Variant15.Task1;

namespace RBPO {
    namespace Lab2 {
        namespace Variant15 {
            namespace Task1 {
                export void Function1() {
                    double x, y;
                    std::cout << "������� �������� x � y: ";
                    std::cin >> x >> y;
                    if (x <= 0 || y <= 0) {
                        std::cout << "�������� �������� x � y" << std::endl;
                    }

                    double result = sqrt(2 * x + 2 * sqrt(pow(x, 2) - 4)) / sqrt(pow(x, 2) - 4 + x + 2);
                    std::cout << "���������  f1 = " << result << std::endl;
                }

                export void Function2() {
                    std::cout << "������� �������� x: ";
                    double x, result;
                    std::cin >> x;
                    if (x <= 4) {
                        result = sqrt(pow(x, 2) + 4);
                    }
                    else {
                        result = cos(abs(2 + x));
                    }
                    std::cout << "��������� f2(x) = " << result << std::endl;
                }


                export double FunctionA(int i) {
                    double result = pow(-1, i) * ((i + 1) / (pow(i, 2) + 2 * i + 1));
                    return result;
                }

                export void Function3() {
                    std::cout << "������� �������� n: ";
                    int n;
                    std::cin >> n;
                    double sum = 0.0;
                    for (int i = 0; i <= n; i++) {
                        sum += FunctionA(i); 
                    }
                    std::cout << "��������� f3 = " << sum << std::endl;
                }

                export void Function4() {
                    std::cout << "������� �������� ���������� E: ";
                    double E;
                    std::cin >> E;
                    double sum = 0.0;
                    double prevSum = 0.0;
                    double nextSum = 0.0;
                    int k = 0;
                    for (int i = 0;; i++)
                    {
                        prevSum = nextSum;
                        nextSum = FunctionA(i);
                        sum += FunctionA(i);
                        k = i;
                        if (std::abs(nextSum - prevSum) <= E)
                        {
                            break;
                        }
                    }
                    std::cout << "��������� f4 = " << sum << std::endl << "����� �������� k = " << k << std::endl;
                }
            }
        }
    }
}