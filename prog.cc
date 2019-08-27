#include <iostream>
//#include "Sales_item.h"
#include <string>
#include <vector>
#include <stdexcept>
using std::vector;

int main()
{

  int int1, int2;

  while (std::cin >> int1 >> int2) {
    try {
      if (int2 == 0) {
	throw std::range_error("Cannot divide by zero.");
      }
      std::cout << int1/int2 << std::endl;
      break;
    } catch (std::runtime_error err) {
      std::cout << err.what() << "\nTry again? Enter y or n" << std::endl;

      char c;
      std::cin >> c;
      if (!std::cin || c == 'n') {
	break;
      }
    }
  }
  
  

  
  return 0;
}
