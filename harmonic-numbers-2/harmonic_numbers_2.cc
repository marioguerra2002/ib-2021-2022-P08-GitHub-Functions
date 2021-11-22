/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file add_one_second.cc
  * @author Mario Guerra Pérez alu0101395036@ull.edu.es
  * @date Nov 22 2021
  * @brief lee pares de numeros e imprime resta de sus numeros armonicos
  * @bug No pasa el jutge.org
  * @see https://jutge.org/problems/P58153
  */
#include <iostream>
#include <iomanip>

double Harmonic_Number (int number_analise) {
  double harmonic_number{0.0};
  for (int i{1}; i <= number_analise; ++i) {
    harmonic_number += (1.0000000000 / i);
  }
  return harmonic_number;
}

int main() {
  int number_analise_1;
  int number_analise_2;
  std::cin >> number_analise_1;
  std::cin >> number_analise_2;
  if (number_analise_1 >= number_analise_2) {
    std::cout << std::fixed << std::setprecision(10) << Harmonic_Number(number_analise_1) - Harmonic_Number(number_analise_2) << std::endl;
  }
}