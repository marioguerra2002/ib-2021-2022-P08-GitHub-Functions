/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file add_one_second.cc
  * @author Mario Guerra Pérez alu0101395036@ull.edu.es
  * @date Nov 22 2021
  * @brief imprime el numero de una posicion dada 
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P39225
  */
#include <iostream>
#include <vector>

void Number_Position (std::vector<int> sequence, int position) {
  std::cout << "At the position " << position << " there is a(n) ";
  std::cout << sequence.at(position - 1) << "." << std::endl;
}

int main() {
  int position;
  const int kStop_Number{-1};
  std::cin >> position;
  std::vector<int> sequence;
  int number_introduce;
  while (std::cin >> number_introduce) {
    if (number_introduce == kStop_Number) {
      break;
    }
    else {
      sequence.push_back(number_introduce);
    }
  }
  Number_Position(sequence, position);
}