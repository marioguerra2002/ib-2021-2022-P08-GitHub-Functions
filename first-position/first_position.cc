/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file add_one_second.cc
  * @author Mario Guerra Pérez alu0101395036@ull.edu.es
  * @date Nov 22 2021
  * @brief posicion del primer par encontrado
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P89078
  */
#include <iostream>
#include <vector>

void Position_even () {
  int number_introduced;
  int counter {0};
  int position{0};
  while (std::cin >> number_introduced) {
    counter += 1;
    if (number_introduced % 2 == 0 && (position == 0 || position > counter)) {
      position = counter;
    }
  }
  std::cout << position << std::endl;
}

int main() {
  Position_even();
}