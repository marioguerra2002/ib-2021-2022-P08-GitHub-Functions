/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file add_one_second.cc
  * @author Mario Guerra Pérez alu0101395036@ull.edu.es
  * @date Nov 22 2021
  * @brief comprueba si los numeros dados son primos
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P48713
  */
#include <iostream>
#include <vector>
#include <math.h>
bool Is_Prime (int number_analise) {
  int square_root = sqrt(number_analise) + 1;
  if (number_analise < 2) return false;
  if (number_analise == 2) return true;
  if (number_analise % 2 == 0) return false;
  for (int i{3}; i <= square_root; ++i) {
    // Si los numeros por debajo de la raiz, ecuentro alguno que sea divisible, significa que no es primo.
    // En cambio, si no encuentro ninguno, conlleva que es primo.
    if (number_analise % i == 0) return false;
  }
  return true;
}
int main() {
  int number_of_number{0};
  int number{0};
  std::cin >> number_of_number;
  for (int i{0}; i < number_of_number; ++i) {
    std::cin >> number;
    std::cout << number;
    if (Is_Prime(number)) {
      std::cout << " is prime" << std::endl;
    } else {
      std::cout << " is not prime" << std::endl;
    }
  }
}