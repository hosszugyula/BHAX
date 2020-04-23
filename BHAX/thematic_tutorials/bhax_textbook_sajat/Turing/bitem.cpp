#include <iostream>
using namespace std;

int main ()
{
  int h = 0;
  int n = 0x01;
  do
    ++h;
  while (n <<= 1);
  cout << "A szohossz ezen a gepen: " << h << " bites\n";
}
