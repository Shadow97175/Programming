Programming
===========
#include <iostream>
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
  if ((a-g)==(b-h))
    cout<<"Угроза королю";
  if 8<a<1
    cout<<"Неверные координаты";
  if 8<b<1
    cout<<"Неверные координаты";
  if 8<x<1
    cout<<"Неверные координаты";
  if 8<y<1
    cout<<"Неверные координаты";
  if 8<g<1
    cout<<"Неверные координаты";
  if 8<h<1
    cout<<"Неверные координаты";
  return 0;
}
