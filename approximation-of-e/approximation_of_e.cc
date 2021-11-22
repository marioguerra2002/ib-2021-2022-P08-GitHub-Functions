/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file add_one_second.cc
  * @author Mario Guerra Pérez alu0101395036@ull.edu.es
  * @date Nov 22 2021
  * @brief serie de taylor de e
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P11916_en
  */
#include <iostream>
#include <iomanip>

void Taylor_serie (int introduced_number) {
  double taylor_result {0.0};
  // vale 1 ya que primera iteracion es siempre = 1
  for (double i{1.0}; i <= introduced_number; ++i) {
    double result{1.0};
    for (double j{i}; i > 0; --j) {
      result *= i;
    }
    taylor_result += (i / result);
  }
  std::cout << "With " << introduced_number << " term(s) we get ";
  std::cout << std::fixed << std::setprecision(10) << taylor_result << "." << std::endl;
}

int main() {
  int number;
  std::cin >> number;
  Taylor_serie(number);
  int number2;
  std::cin >> number2;
  Taylor_serie(number2);
  int number3;
  std::cin >> number3;
  Taylor_serie(number3);
  int number4;
  std::cin >> number4;
  Taylor_serie(number4);

}