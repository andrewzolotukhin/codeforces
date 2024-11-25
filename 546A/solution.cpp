#include <iostream>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  int k,n,w;

  std::cin >> k >> n >> w;

  if(w == 0) {
	std::cout << 0 << std::endl;
	return 0;
  }

  int s = (w * (k+ w*k) / 2);

  if(n >= s) {
	std::cout << 0 << std::endl;
	return 0;
  }

  std::cout << (s - n) << std::endl;
  
  return 0;
}
