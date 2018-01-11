

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