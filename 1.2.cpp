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
  if (a=b)
    cout<<"Угроза Королю";
  if (x=y)
    cout<<"Угоза Королю";
  if ((a-g)=(b-h))
    cout<<"Угроза королю";
  return 0;
}
