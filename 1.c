// Liczby parzyste
// Data   : 11.03.2008
// (C)2012 mgr Jerzy Wa³aszek
//----------------------------

#include <iostream>

using namespace std;

int main()
{
  int a,b,i;

  cin >> a >> b;
  i = a;
  if(a % 2) i++;
  while(i <= b)
  {
    cout << i << " ";
    i += 2;        
  }
  cout << endl;
  return 0;
}