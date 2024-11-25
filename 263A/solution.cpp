#include <iostream>
#include <cmath>

int main() {
  std::ios_base::sync_with_stdio(false);
        std::cin.tie(NULL);
        std::cout.tie(NULL);

        int i, j, x, y;
        for(i = 0; i < 5; i++)
   for(j = 0; j < 5; j++)
    {
      char o;
                        std::cin >> o;
                        if(o == 0x31) {
                                x = i;
                                y = j;
                        }
    }

  std::cout << (abs(x-2) + abs(y - 2)) << std::endl;
  return 0;
}
