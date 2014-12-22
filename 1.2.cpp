Programming
===========
#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
  int a, b, x, y, g, h;
  setlocale (LC_ALL "Russian");
  cout<<"Введите координаты Короля: ";
  cin>>a>>b;
  cout<<"Введите координаты Ладьи: ";
  cin>>x>>y;
  cout<<"Введите координаты Слона: ";
  cin>>g>>h;
  if (a==x)
    cout<<"Угроза Королю";
  if (b==y)
    cout<<"Угоза Королю";
  if (abs(a-g)==abs(b-h))
    cout<<"Угроза королю";
  if (8<a && a<1)
    cout<<"Неверные координаты";
  if (8<b && b<1)
    cout<<"Неверные координаты";
  if (8<x && x<1)
    cout<<"Неверные координаты";
  if (8<y && y<1)
    cout<<"Неверные координаты";
  if (8<g && g<1)
    cout<<"Неверные координаты";
  if (8<h && h<1)
    cout<<"Неверные координаты";
  return 0;
}
