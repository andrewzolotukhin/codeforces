#include <iostream>

int main()
{
  int n;

  int X = 0, Y = 0, Z = 0;

  std::cin >> n;

  while (n--)
  {
    int x, y, z;
    std::cin >> x >> y >> z;

    X += x;
    Y += y;
    Z += z;
  }

  std::cout << (((X == 0) && (Y == 0) && (Z == 0)) ? "YES" : "NO") << std::endl;
  return 0;
}
