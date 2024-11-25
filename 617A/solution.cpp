#include <iostream>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  int k;

  std::cin >> k;

  if (k <= 5) {
	std::cout << 1 << std::endl;
	return 0;
  }

  std::cout << (((k / 5) + (((k % 5) > 0) ? 1: 0))) << std::endl;
  
  return 0;
}
