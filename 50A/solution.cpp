#include <iostream>

int main() {
  std::ios_base::sync_with_stdio(false);
        std::cin.tie(NULL);
        std::cout.tie(NULL);

        int n, k;
        std::cin >> n >> k;
        int s = n * k;
  if (s < 2) {
    std::cout << 0 << std::endl;
    return 0;
  }
  std::cout << (s/2) << std::endl;
  return 0;
}
