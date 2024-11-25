#include <iostream>
#include <string>
#include <unordered_map>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  std::string s;

  std::unordered_map<char, bool> map;

  std::cin >> s;

  for(size_t i = 0; i < s.size(); i++) {
	map[s[i]] = true;
  }

  std::cout << ((map.size() & 1) ? "IGNORE HIM!" : "CHAT WITH HER!") << std::endl;
  return 0;
}
