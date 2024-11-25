#include <iostream>
#include <string>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  std::string s;

  std::cin >> s;

  if(s.size() > 0 && s[0] >= 'a') {
	s[0] -= 32;
  }

  std::cout << s << std::endl;
}