#include "stdafx.h"
#include <iostream>
#include <locale.h>
#include <iso646.h>

int main(void)
{
int a=0, b = 0, a1, b1, c = 1, d=0;
setlocale (LC_ALL, "Russian");
std::cout « "Введите два натуральных числа: " « std::endl;
std::cin » a » b;
if (a < 1 or b < 1)
{
std::cout « "Неккоректный ввод" « std::endl;
return 0;
}
while (a > 0 or b > 0)
{
a1 = a % 10;
b1 = b % 10;
if (a1 > b1)
{
d = d + c*a1;
}
else
{
d = d + c*b1;
}
c *= 10;
a /=10;
b /=10;
}
std::cout « "Наибольшие число составленное из максимальных цифр разряд: " « d « std::endl;
return 0;
}
