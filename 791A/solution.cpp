#include <iostream>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  int a, b, i = 1;

  std::cin >> a >> b;

  while (a <= b) {
	i++;
	a *= 3;
	b*= 2;
  }

  std::cout << (i - 1) << std::endl;
  
  return 0;
}
