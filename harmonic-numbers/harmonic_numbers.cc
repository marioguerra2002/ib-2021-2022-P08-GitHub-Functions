/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file add_one_second.cc
  * @author Mario Guerra Pérez alu0101395036@ull.edu.es
  * @date Nov 22 2021
  * @brief imprime el n-th numero armónico
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P59539
  */
#include <iostream>
#include <iomanip>

double Harmonic_Number (int number_analise) {
  double harmonic_number{0.0};
  for (int i{1}; i <= number_analise; ++i) {
    harmonic_number += (1.0000 / i);
  }
  return harmonic_number;
}

int main() {
  int number_analise;
  std::cin >> number_analise;
  std::cout << std::fixed << std::setprecision(4) << Harmonic_Number(number_analise) << std::endl;
}