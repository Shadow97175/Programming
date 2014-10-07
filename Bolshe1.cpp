#include "stdafx.h"
#include <iostream>

int main(void)
{
  int a = 0, b = 0, c = 1, d = 0;
  setlocale(LC_ALL, "Russian");
  std::cout << "Введите два числа: " << std::endl;
  std::cin >> a >> b;
  if (std::cin.fail())
  {
      std::cout << "Неккоректный ввод" << std::endl;
      return 0;
  }
  while (a != 0 || b != 0)
  {
        if ((a % 10) > (b % 10))
      {
      d = d + c * (a % 10);
      }
      else
      {
      d = d + c * (b % 10);
      }
      c *= 10;
      a /= 10;
      b /= 10;
  }
  std::cout << "Наибольшое число, составленное из цифр разрядов: " << d << std::endl;
  return 0;
}
