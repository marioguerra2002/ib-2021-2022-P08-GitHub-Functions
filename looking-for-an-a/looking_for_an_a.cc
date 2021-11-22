/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file add_one_second.cc
  * @author Mario Guerra Pérez alu0101395036@ull.edu.es
  * @date Nov 22 2021
  * @brief comprueba si hay alguna a minuscula en una cadena dada
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P75149
  */
#include <string>
#include <iostream>

bool Number_as (std::string sentence) {
  const char kChecker{'a'};
  for (int i{0}; i < sentence.size(); ++i) {
    if (sentence.at(i) == kChecker) {
      return true;
    }
  }
  return false;
}

int main() {
  std::string sentence_introduced("");
  getline(std::cin, sentence_introduced);
  if (Number_as(sentence_introduced)) {
    std::cout << "yes" << std::endl;
  } else {
    std::cout << "no" << std::endl;
  }
}