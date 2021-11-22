/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file add_one_second.cc
  * @author Mario Guerra Pérez alu0101395036@ull.edu.es
  * @date Nov 22 2021
  * @brief imprime tres palabras dadas en orden inverso
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P62421_en
  */
#include <iostream>
#include <string>

void Change_Words_Order (std::string word_a, std::string word_b, std::string word_c) {
  std::cout << word_c << " " << word_b << " " << word_a << std::endl;
}

int main() {
  std::string word_1;
  std::string word_2;
  std::string word_3;
  std::cin >> word_1;
  std::cin >> word_2;
  std::cin >> word_3;
  Change_Words_Order (word_1, word_2, word_3);
}