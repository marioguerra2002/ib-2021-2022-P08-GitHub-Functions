/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file add_one_second.cc
  * @author Mario Guerra Pérez alu0101395036@ull.edu.es
  * @date Nov 22 2021
  * @brief divisores de un numero
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P39308
  */
#include <iostream>
#include <cmath>
void divisor (int number) {
  int counter{0};
  int square_root{0};
	square_root = sqrt(number) + 1;
	std::cout << "divisors of " << number << ": ";	
	if (number != 1) {
		for (int i = 1; i < square_root; i++) { 
			if ( (number % i) == 0) { 
				std::cout << i << " ";
				counter = i;
			}
		}
		for (int j = square_root; j > 1; j--) { 
			if ((number % j == 0) && (j * j != number) && (number/j != counter)) {
				std::cout << number/j << " ";
			}
		}
	}
	std::cout << number << std::endl;
}
int main () {
	int number{0}; 
	while (std::cin >> number) {		
		divisor(number);
	}
}