#include <iostream>
#include <string>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  std::string s;
  int k;
  int r = 0;

  std::cin >> k;
  std::cin >> s;

  for(int i = 1; i < s.size(); i++) {
	if(s[i] == s[i-1]) r++;
  }

  std::cout << r << std::endl;
  
  return 0;
}
