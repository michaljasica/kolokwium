// NWD - wersja z odejmowaniem
// Data   : 12.03.2008
// (C)2012 mgr Jerzy Wa³aszek
//----------------------------

#include <iostream>

using namespace std;

int main()
{
  unsigned int a,b;

  cin >> a >> b;
  while(a != b)
    if(a < b) b -= a; else a -= b;
  cout << a << endl;
  return 0;
} 